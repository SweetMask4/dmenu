/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1; /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;  /* -F  option; if 0, dmenu doesn't use fuzzy matching  */
static int centered = 0;    /* -c option; centers dmenu on screen */
static int min_width = 500; /* minimum width when centered */
static const int vertpad = 16;              /* vertical padding of bar */
static const int sidepad = 16;              /* horizontal padding of bar */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
    "Iosevka:style:medium:size=12",
    "JetBrainsMono Nerd Font Mono:style:medium:size=19"};

#include "themes/catppuccin.h"
static const char *prompt =
    NULL; /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
    /*     fg         bg       */
    [SchemeNorm] = {white, black},
    [SchemeSel] = {gray2, blue},
    [SchemeSelHighlight] = {green, highlight},
    [SchemeNormHighlight] = {green, highlight},
    [SchemeOut] = {black, blue},
    [SchemeMid] = {white, gray3},
};

/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines = 0;
static unsigned int columns = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 16;
static unsigned int min_lineheight = 16;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
