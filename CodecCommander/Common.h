/*
 *  Released under "The GNU General Public License (GPL-2.0)"
 *
 *  This program is free software; you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License as published by the
 *  Free Software Foundation; either version 2 of the License, or (at your
 *  option) any later version.
 *
 *  This program is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 *  or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 *  for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 *
 */

#ifndef CodecCommander_Common_h
#define CodecCommander_Common_h

#ifdef DEBUG
#define DebugLog(args...) do { IOLog("CodecCommander: " args); } while (0)
#define DebugOnly(expr)     do { expr; } while (0)
#else
#define DebugLog(args...) do { } while (0)
#define DebugOnly(expr)    do { } while (0)
#endif
#define AlwaysLog(args...) do { IOLog("CodecCommander: " args); } while (0)

#include <IOKit/IOService.h>
#include <IOKit/IOWorkLoop.h>
#include <IOKit/IOTimerEventSource.h>
#include <IOKit/IODeviceTreeSupport.h>
#include <IOKit/IOCommandGate.h>
#include <IOKit/IOUserClient.h>
#include <IOKit/audio/IOAudioDevice.h>
#include <IOKit/pci/IOPCIDevice.h>

#define kCodecProfile               "Codec Profile"
#define kCodecVendorID              "IOHDACodecVendorID"
#define kCodecAddress               "IOHDACodecAddress"
#define kCodecFuncGroupType         "IOHDACodecFunctionGroupType"
#define kCodecSubsystemID           "IOHDACodecFunctionSubsystemID"

#endif
