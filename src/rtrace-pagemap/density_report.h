/*
 * This file is part of sp-rtrace package.
 *
 * Copyright (C) 2011 by Nokia Corporation
 *
 * Contact: Eero Tamminen <eero.tamminen@nokia.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 */
#ifndef _DENSITY_REPORT_H_
#define _DENSITY_REPORT_H_

#include "pagemap.h"
#include "address_space_report.h"

class DensityReport : public AddressSpaceReport
{
public:

	/**
	 * Creates a class instance.
	 */
	DensityReport(TraceData& data);

	/**
	 * @copydoc AddressSpaceReport::writeDensity
	 */
	void writeLegend(std::ostream& out);

	/**
	 * @copydoc AddresssSpaceReport::writeMemoryMap
	 */
	void writeMemoryMap(std::ostream& out, MemoryArea* area);

	/**
	 * @copydoc AddressSpaceReport::validate
	 */
	bool validate();
};

#endif
