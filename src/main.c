/*
 * Initial main.c file generated by Glade. Edit as required.
 * Glade will not overwrite this file.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "interface.h"
#include "support.h"

int
main (int argc, char *argv[])
{
  GtkWidget *RB_Compte_Client;
  GtkWidget *RL_Admin;
  GtkWidget *AA_Reservation;
  GtkWidget *HS_Agent;
  GtkWidget *Auth;
  GtkWidget *MF_Reclamation;

#ifdef ENABLE_NLS
  bindtextdomain (GETTEXT_PACKAGE, PACKAGE_LOCALE_DIR);
  bind_textdomain_codeset (GETTEXT_PACKAGE, "UTF-8");
  textdomain (GETTEXT_PACKAGE);
#endif

  gtk_set_locale ();
  gtk_init (&argc, &argv);

  add_pixmap_directory (PACKAGE_DATA_DIR "/" PACKAGE "/pixmaps");

  /*
   * The following code was added by Glade to create one of each component
   * (except popup menus), just so that you see something after building
   * the project. Delete any components that you don't want shown initially.
   */
  RB_Compte_Client = create_RB_Compte_Client ();
  gtk_widget_show (RB_Compte_Client);
  RL_Admin = create_RL_Admin ();
  gtk_widget_show (RL_Admin);
  AA_Reservation = create_AA_Reservation ();
  gtk_widget_show (AA_Reservation);
  HS_Agent = create_HS_Agent ();
  gtk_widget_show (HS_Agent);
  Auth = create_Auth ();
  gtk_widget_show (Auth);
  MF_Reclamation = create_MF_Reclamation ();
  gtk_widget_show (MF_Reclamation);

  gtk_main ();
  return 0;
}

