/*
** Copyright (C) 2014 Cisco and/or its affiliates. All rights reserved.
**
** This program is free software; you can redistribute it and/or modify
** it under the terms of the GNU General Public License Version 2 as
** published by the Free Software Foundation.  You may not use, modify or
** distribute this program under any other version of the GNU General
** Public License.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software
** Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/

// cd_pppoe_module.cc author Josh Rosenbaum <jrosenba@cisco.com>

#include "codecs/link/cd_pppoe_module.h"

static const RuleMap pppoe_rules[] =
{
    { DECODE_BAD_PPPOE, "(" CD_PPPOE_NAME ") Bad PPPOE frame detected" },
    { 0, nullptr }
};

//-------------------------------------------------------------------------
// General PPPoEpkt module.
//
//      ***** NOTE: THE CODEC HAS A DIFFERENT NAME!
//          * Additionally, this module is used for generator a rule stub ONLY!
//          * If you want to create a module for configuration, you must change the
//          * names of the correct PPPoEpkt codec
//-------------------------------------------------------------------------

/// ^^^  READ THE COMMENT!
PPPoEModule::PPPoEModule() : DecodeModule(CD_PPPOE_NAME)
{ }

const RuleMap* PPPoEModule::get_rules() const
{ return pppoe_rules; }

