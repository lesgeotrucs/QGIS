/***************************************************************************
    qgsphotoconfigdlg.h
     --------------------------------------
    Date                 : 5.1.2014
    Copyright            : (C) 2014 Matthias Kuhn
    Email                : matthias at opengis dot ch
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef QGSPHOTOCONFIGDLG_H
#define QGSPHOTOCONFIGDLG_H

#include "ui_qgsphotoconfigdlgbase.h"

#include "qgseditorconfigwidget.h"
#include "qgis_gui.h"

/** \ingroup gui
 * \class QgsPhotoConfigDlg
 * \note not available in Python bindings
 */

class GUI_EXPORT QgsPhotoConfigDlg : public QgsEditorConfigWidget, private Ui::QgsPhotoConfigDlgBase
{
    Q_OBJECT

  public:
    explicit QgsPhotoConfigDlg( QgsVectorLayer* vl, int fieldIdx, QWidget *parent = nullptr );

    // QgsEditorConfigWidget interface
  public:
    QVariantMap config() override;
    void setConfig( const QVariantMap& config ) override;
};

#endif // QGSPHOTOCONFIGDLG_H
