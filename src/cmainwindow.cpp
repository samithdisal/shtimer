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
#include "cmainwindow.h"

CMainWindow::CMainWindow(QWidget *parent, const char *name)
 : QMainWindow(parent)
{
  setWindowTitle(QString::fromAscii(name));
  resize( 440, 240 );
//   grdLayout = new QGridLayout( this , 7, 8, 2, 3 );
  grdLayout = new QGridLayout( this );
  grdLayout->setHorizontalSpacing(7);
  grdLayout->setVerticalSpacing(8);
  //Time Set
  int counter;
  lbl_Hrs = new QLabel( "Hours : " , this );
  com_Hrs = new QComboBox( this );
  for(counter = 0;counter < 6; counter++)
  {
    com_Hrs->insertItem( counter, QString::number(counter), counter );
  }
  
  
  lbl_Mins = new QLabel( "Minutes : ", this );
  com_Mins = new QComboBox( this );
  for(counter = 0; counter < 60; counter++)
  {
    com_Mins->insertItem( counter, QString::number(counter), counter );
  }
  
  lbl_Secs = new QLabel( "Seconds : ", this );
  com_Secs = new QComboBox( this );
  for(counter = 0; counter < 60; counter++)
  {
    com_Secs->insertItem( counter, QString::number(counter), counter  );
  }
  
  grdLayout->addWidget( lbl_Hrs, 1, 1 );
  grdLayout->addWidget( com_Hrs, 1, 2 );
  grdLayout->addWidget( lbl_Mins, 1, 3 );
  grdLayout->addWidget( com_Mins, 1, 4 );
  grdLayout->addWidget( lbl_Secs, 1, 5 );
  grdLayout->addWidget( com_Secs, 1, 6 );
  
  //Buttons
  btn_Start = new QPushButton( "Start", this );
  connect( btn_Start, SIGNAL( clicked() ), this, SLOT( slotStart() ) );
  
  btn_Cancel = new QPushButton( "Cancel", this );
  connect(btn_Cancel, SIGNAL( clicked() ), this, SLOT( slotCancel() ) );
  btn_Cancel->setEnabled( false );
  
  grdLayout->addWidget( btn_Start, 2, 2 );
  grdLayout->addWidget( btn_Cancel, 2, 3 );
  
  tmr_Timer = new QTimer( this );
  connect( tmr_Timer, SIGNAL( timeout() ), this, SLOT( slotDone() ) );
  
  tmr_Count = new QTimer( this );
  connect( tmr_Count, SIGNAL( timeout() ), this, SLOT( slotCount() ) );
  
  statusBar()->showMessage ( "Ready" );
  grdLayout->addWidget ( statusBar(), 7, 7, 0, 8 );
  
  lbl_Remain = new QLabel( "0 : 00 : 00", this );
  lbl_Remain->setFont( QFont( "Cronyx-Helvetica", 28, 50 ) );
  grdLayout->addWidget( lbl_Remain, 4,5,3,6 );
  
  //init Actions
  aTimer_Start = new QAction( "&Start", this );
  aTimer_Cancel = new QAction( "&Cancel", this );
  aHelp_Help = new QAction( "&Help", this );
  aHelp_Online = new QAction( "&Online", this );
  aHelp_About = new QAction( "&About", this );
  
  connect( aTimer_Start, SIGNAL( activated() ), this, SLOT( slotTimer_Start() ) );
  connect( aTimer_Cancel, SIGNAL( activated() ), this, SLOT( slotTimer_Cancel() ) );
  connect( aHelp_Help, SIGNAL( activated() ), this, SLOT( slotHelp_Help() ) );
  connect( aHelp_Online, SIGNAL( activated() ), this, SLOT( slotHelp_Online() ) );
  connect( aHelp_About, SIGNAL( activated() ), this, SLOT( slotHelp_About() ) );
  
  //init MenuBar
  grdLayout->addWidget( menuBar(), 0,0,0,8);
  
  mnu_Timer = new QMenu( this );
  mnu_Timer -> addAction( aTimer_Start );
  mnu_Timer -> addAction( aTimer_Cancel );
  menuBar()->addMenu( mnu_Timer );
  aTimer_Cancel -> setEnabled( false );
  
  mnu_Help = new QMenu( this );
  mnu_Help -> addAction( aHelp_Help );
  mnu_Help -> addAction( aHelp_Online );
  mnu_Help -> addAction( aHelp_About );
  menuBar()-> addMenu( mnu_Help );
  
  //About Dialog
  dlgAbout = new CAboutDlg( this );
  
  //Remain Time
  tim_blank = new QTime(0,0,0,0);

}


CMainWindow::~CMainWindow()
{
}

/*
 QMenu *mnu_Timer, *mnu_Help;
    QAction *aTimer_Start, aTimer_Cancel, aHelp_Help, aHelp_Online, aHelp_About;
    */



void CMainWindow::slotStart()
{
  statusBar()->showMessage( "Will Be Shutdown..." );
  l_tim = (long) com_Hrs->currentIndex()*3600000+com_Mins->currentIndex()*60000+com_Secs->currentIndex()*1000;
  int_count = (int)l_tim;
  com_Hrs->setEnabled( false );
  com_Mins->setEnabled( false );
  com_Secs->setEnabled( false );
  btn_Start->setEnabled( false );
  btn_Cancel->setEnabled( true );
  aTimer_Start->setEnabled( false );
  aTimer_Cancel->setEnabled( true );
  tmr_Timer->start( (int) l_tim );
  tmr_Count->start(100);
  
}

void CMainWindow::slotCancel()
{
  tmr_Timer->stop();
  tmr_Count->stop();
  lbl_Remain->setText("0 : 00 : 00");
  com_Hrs->setEnabled( true );
  com_Mins->setEnabled( true );
  com_Secs->setEnabled( true );
  btn_Start->setEnabled( true );
  btn_Cancel->setEnabled( false );
  aTimer_Start->setEnabled( true );
  aTimer_Cancel->setEnabled( false );
  statusBar()->showMessage( "Ready" );
}


void CMainWindow::slotDone()
{
  statusBar()->showMessage( "Shutting down.." );
  QProcess *pross = new QProcess( this );
  pross-> execute( "halt" );
}



void CMainWindow::slotCount()
{
  int_count-=100;
  tim_Remain = tim_blank->addMSecs(int_count);
  lbl_Remain->setText(tim_Remain.toString("h : mm : ss"));
}




void CMainWindow::slotHelp_About()
{
  dlgAbout->exec();
}



void CMainWindow::slotHelp_Help()
{
  QProcess *hlpProssx = new QProcess( this );
  hlpProssx->execute( "firefox /usr/share/doc/ssdcompany/shtimer/html/index.html");
}



void CMainWindow::slotHelp_Online()
{
  QProcess *hlpProssx = new QProcess( this );
  hlpProssx->execute( "firefox http://samithdisal.github.com/shtimer");
}



void CMainWindow::slotTimer_Start()
{
  slotStart();
}



void CMainWindow::slotTimer_Cancel()
{
  slotCancel();
}
