" Test for block inserting
"

func Test_blockinsert_indent()
  new
  filetype plugin indent on
  setlocal sw=2 et ft=vim
  call setline(1, ['let a=[', '  ''eins'',', '  ''zwei'',', '  ''drei'']'])
  call cursor(2, 3)
  exe "norm! \<c-v>2jI\\ \<esc>"
  call assert_equal(['let a=[', '      \ ''eins'',', '      \ ''zwei'',', '      \ ''drei'']'],
        \ getline(1,'$'))
  " reset to sane state
  filetype off
  bwipe!
endfunc

func Test_blockinsert_autoindent()
  new
  let lines =<< trim END
      var d = {
      a: () => 0,
      b: () => 0,
      c: () => 0,
      }
  END
  call setline(1, lines)
  filetype plugin indent on
  setlocal sw=2 et ft=vim
  setlocal indentkeys+=:
  exe "norm! 2Gf)\<c-v>2jA: asdf\<esc>"
  let expected =<< trim END
      var d = {
        a: (): asdf => 0,
      b: (): asdf => 0,
      c: (): asdf => 0,
      }
  END
  call assert_equal(expected, getline(1, 5))

  " insert on the next column should do exactly the same
  :%dele
  call setline(1, lines)
  exe "norm! 2Gf)l\<c-v>2jI: asdf\<esc>"
  call assert_equal(expected, getline(1, 5))

  :%dele
  call setline(1, lines)
  setlocal sw=8 noet
  exe "norm! 2Gf)\<c-v>2jA: asdf\<esc>"
  let expected =<< trim END
      var d = {
      	a: (): asdf => 0,
      b: (): asdf => 0,
      c: (): asdf => 0,
      }
  END
  call assert_equal(expected, getline(1, 5))

  " insert on the next column should do exactly the same
  :%dele
  call setline(1, lines)
  exe "norm! 2Gf)l\<c-v>2jI: asdf\<esc>"
  call assert_equal(expected, getline(1, 5))

  filetype off
  bwipe!
endfunc

func Test_blockinsert_delete()
  new
  let _bs = &bs
  set bs=2
  call setline(1, ['case Arg is ', '        when Name_Async,', '        when Name_Num_Gangs,', 'end if;'])
  exe "norm! ggjVj\<c-v>$o$A\<bs>\<esc>"
  "call feedkeys("Vj\<c-v>$o$A\<bs>\<esc>", 'ti')
  call assert_equal(["case Arg is ", "        when Name_Async", "        when Name_Num_Gangs,", "end if;"],
        \ getline(1,'$'))
  " reset to sane state
  let &bs = _bs
  bwipe!
endfunc

" vim: shiftwidth=2 sts=2 expandtab