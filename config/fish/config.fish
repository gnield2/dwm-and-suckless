if status is-interactive
    # Commands to run in interactive sessions can go here
end

set -x PATH "$HOME/.local/bin" $PATH
set -Ux EDITOR nvim
set -g fish_greeting ''

fastfetch

alias ls 'ls --color=auto'
alias ll 'ls -lh'
alias la 'ls -ah'
alias lla ' ls -lah'
alias cls 'clear'
alias cp 'cp -i'
alias rm 'rm -i'
alias mv 'mv -i'
alias vi 'vim'
alias vim 'nvim'
alias em 'emacs -nw'
alias iusearchbtw 'fastfetch'
alias grep 'grep --color=auto'
alias lf 'lfub'

starship init fish | source
