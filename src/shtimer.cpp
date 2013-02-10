/***************************************************************************
 *   Copyright (C) 2007-1013 by Samith D Sandanayake                       *
 *   samithdisal@gmail.com                                                 *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/


#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <stdio.h>
#include <stdlib.h>

#include <QtGui/QApplication>
#include <QtGui/QSplashScreen>

#include "cmainwindow.h"

#include "pixmap/aboutsplash.xpm"

int main(int argc, char *argv[])
{
  #ifdef Q_WS_X11
     bool useGUI = getenv("DISPLAY") != 0;
  #else
     bool useGUI = true;
  #endif
  QApplication app( argc, argv, useGUI );
  QSplashScreen *spl = new QSplashScreen( (const char**) aboutsplash );
  spl->show();
  CMainWindow *mw = new CMainWindow();
  app.setActiveWindow(mw);
  mw->show();
  spl->finish( mw );
  delete spl;
  return app.exec();
}
