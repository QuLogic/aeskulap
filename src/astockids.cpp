/*
    Aeskulap - DICOM image viewer and network client
    Copyright (C) 2005  Alexander Pipelka

    This file is part of Aeskulap.

    Aeskulap is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    Aeskulap is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Aeskulap; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

    Alexander Pipelka
    pipelka@teleweb.at

    Last Update:      $Author: braindead $
    Update Date:      $Date: 2005/08/23 19:32:06 $
    Source File:      $Source: /cvsroot/aeskulap/aeskulap/src/astockids.cpp,v $
    CVS/RCS Revision: $Revision: 1.1 $
    Status:           $State: Exp $
*/

#include "astockids.h"
#include "gettext.h"

namespace Aeskulap {
	
Gtk::StockID Stock::GRID_1X1("aeskulap-grid-1x1");

Gtk::StockID Stock::GRID_1X2("aeskulap-grid-1x2");

Gtk::StockID Stock::GRID_2X1("aeskulap-grid-2x1");

Gtk::StockID Stock::GRID_2X2("aeskulap-grid-2x2");

Gtk::StockID Stock::GRID_4X4("aeskulap-grid-4x4");

Gtk::StockID Stock::SERIES_SINGLE("aeskulap-series-single");

Gtk::StockID Stock::SERIES_ALL("aeskulap-series-all");

Gtk::StockID Stock::SERIES_1X1("aeskulap-series-1x1");

Gtk::StockID Stock::SERIES_2X1("aeskulap-series-2x1");

Gtk::StockID Stock::SERIES_2X2("aeskulap-series-2x2");

Gtk::StockID Stock::REFFRAME("aeskulap-reference-frame");

Gtk::StockID Stock::DRAW_ERASER("aeskulap-draw-eraser");

Gtk::StockItem Stock::StockItems[] = {
	Gtk::StockItem(Stock::GRID_1X1, gettext("1 Image"), Gdk::CONTROL_MASK, GDK_a),
	Gtk::StockItem(Stock::GRID_1X2, gettext("1x2 Images")),
	Gtk::StockItem(Stock::GRID_2X1, gettext("2x1 Images")),
	Gtk::StockItem(Stock::GRID_2X2, gettext("2x2 Images")),
	Gtk::StockItem(Stock::GRID_4X4, gettext("4x4 Images")),
	Gtk::StockItem(Stock::SERIES_SINGLE, gettext("Single")),
	Gtk::StockItem(Stock::SERIES_ALL, gettext("All")),
	Gtk::StockItem(Stock::SERIES_1X1, gettext("1 Series")),
	Gtk::StockItem(Stock::SERIES_2X1, gettext("2x1 Series")),
	Gtk::StockItem(Stock::SERIES_2X2, gettext("2x2 Series")),
	Gtk::StockItem(Stock::REFFRAME, gettext("Reference")),
	Gtk::StockItem(Stock::DRAW_ERASER, gettext("Delete item"))
};

void Stock::init_stock_items() {
	int s = sizeof(Aeskulap::Stock::StockItems) / sizeof(Gtk::StockItem);
	
	for(int i=0; i<s; i++) {
		Gtk::Stock::add(Aeskulap::Stock::StockItems[i]);
	}
}


} // namespace Aeskulap
