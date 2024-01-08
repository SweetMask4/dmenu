# dmenu

## introduction
this is my compilation of dmenu with improved search and colour schemes

![dmenu](https://github.com/SweetMask4/dmenu/blob/main/screenshots/dmenu.png?raw=true)

## installation

step 1 clone the repository
``` shell
git clone https://github.com/SweetMask4/dmenu.git ~/.config
```

step 2 and install dmenu
``` shell
cd ~/.config/dmenu
sudo make install
```

to call dmenu use the dm-run command or add it to your WM or DE

``` shell
dmenu-run
```

# Recompile

- You need to recompile dmenu after every change you make to its source code.

```
cd ~/.config/dmenu
rm config.h
sudo make install
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
- barpadding
