/***************************************************************************
 *   Copyright (C) 2007 by Samith D Sandanayake   *
 *   samithdisal@gmail.com   *
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

#include <qapplication.h>
#include <qsplashscreen.h>

#include "cmainwindow.h"

#include "pixmap/aboutsplash.xpm"

int main(int argc, char *argv[])
{
	QApplication *app = new QApplication( argc, argv );
	QSplashScreen *spl = new QSplashScreen( (const char**) aboutsplash_xpm );
	spl->show();
	CMainWindow *mw = new CMainWindow();
	app->setMainWidget( mw );
	mw->show();
	spl->finish( mw );
	delete spl;
	return app->exec();
}
