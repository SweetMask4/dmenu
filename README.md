# dmenu

## introduction
this is my compilation of dmenu with improved search and colour schemes

![dmenu](https://github.com/SweetMask4/dmenu/blob/main/screenshots/dmenu.png?raw=true)

## installation

step 1 clone the repository
``` shell
git clone https://github.com/SweetMask4/dmenu.git ~/.config
```

step 2 move the script
``` shell
mkdir -p ~/.local/bin
mv ~/.config/dmenu/dm-run ~/.local/bin
```


step 3 add this to your .zshrc or .bashrc file so the script can be called from anywhere on your system
``` shell
if [ -d "$HOME/.local/bin" ] ;
  then PATH="$HOME/.local/bin:$PATH"
fi
```

step 4 and install dmenu
``` shell
cd ~/.config/dmenu
sudo make install
```

to call dmenu use the dm-run command or add it to your WM or DE

``` shell
dm-run
```
the theme is configured in the config.def.h file

# Patches
- center
- fuzzyhighlight
- fuzzymatch
- grid
- lineheight
- morecolor
- mousesupport
- numbers
