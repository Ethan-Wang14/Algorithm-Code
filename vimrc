" Configuration file for vim
set modelines=0		" CVE-2007-2438

" Normally we use vim-extensions. If you want true vi-compatibility
" remove change the following statements
set nocompatible	" Use Vim defaults instead of 100% vi compatibility
set backspace=2		" more powerful backspacing

" Don't write backup file if vim is being called by "crontab -e"
au BufWrite /private/tmp/crontab.* set nowritebackup nobackup
" Don't write backup file if vim is being called by "chpass"
au BufWrite /private/etc/pw.* set nowritebackup nobackup
syntax on
set tabstop=4
set softtabstop=4
set shiftwidth=4
set nu
set ruler
set foldenable
set tabstop=4
set foldenable
set foldmethod=indent
set autoindent

" insert matched {}
inoremap ( ()<LEFT>
inoremap [ []<LEFT>
inoremap { {}<LEFT>

" change the highlight color
hi MatchParen ctermfg=16 ctermbg=208 cterm=bold
