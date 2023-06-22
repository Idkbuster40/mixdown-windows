#include <gtk/gtk.h>
// Author: Aaranyak Ghosh
/* This file contains all colours for this theme */

// Background 2 (Lighter Grey)
void bg_colour_2(GtkWidget** widget, GtkStateFlags state) {
    /* Changes the background colour of the widget to bg_colour_2 (Lighter Grey) */
    GdkRGBA colour; /* If you're american, pardon my spelling */
    gdk_rgba_parse(&colour, "#363636");
    gtk_widget_override_background_color(*widget, state, &colour); /* Change colour of widget */
}

// Record Button (Red)
void fg_colour_rec(GtkWidget** widget, GtkStateFlags state) {
    /* Changes the background colour of the widget to record red */
    GdkRGBA colour;
    gdk_rgba_parse(&colour, "#a11813");
    gtk_widget_override_color(*widget, state, &colour); /* Change colour of widget */
}
