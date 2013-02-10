/***************************************************************************
 *   Copyright (C) 2007 - 2013 by Samith D Sandanayake                     *
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
#include "caboutdlg.h"
#include "pixmap/aboutsplash.xpm"
#include <QtGui/QLayout>

CAboutDlg::CAboutDlg(QWidget *parent, const char *name)
 : QDialog(parent)
{
  QGridLayout *gLayout = new QGridLayout( this );
  setWindowTitle( name );
  resize( 630, 400 );
  //setPaletteBackgroundPixmap( (const char**)aboutsplash_xpm );
  QPushButton *btnOK = new QPushButton( "&OK", this );
  btnOK->setDefault( true );
  //btnOK->palette().background().setColor( Qt::darkRed );
  //btnOK->palette().foreground().setColor( Qt::white );
  gLayout->addWidget( btnOK, 4, 4 );
  
  connect( btnOK, SIGNAL( released() ), this, SLOT( accept() ) );
}


CAboutDlg::~CAboutDlg()
{
}


