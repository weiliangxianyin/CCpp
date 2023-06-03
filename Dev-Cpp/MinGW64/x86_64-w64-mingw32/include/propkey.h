/*
 * Copyright (C) 2010 Maarten Lankhorst for CodeWeavers
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

#ifndef _INC_PROPKEY
#define _INC_PROPKEY

#include <propkeydef.h>

DEFINE_PROPERTYKEY(PKEY_Audio_ChannelCount, 0x64440490, 0x4c8b, 0x11d1, 0x8b, 0x80, 0x08, 0x00, 0x36, 0xb1, 0x1a, 0x03, 7);
DEFINE_PROPERTYKEY(PKEY_Audio_Compression, 0x64440490, 0x4c8b, 0x11d1, 0x8b, 0x80, 0x08, 0x00, 0x36, 0xb1, 0x1a, 0x03, 10);
DEFINE_PROPERTYKEY(PKEY_Audio_Format, 0x64440490, 0x4c8b, 0x11d1, 0x8b, 0x80, 0x08, 0x00, 0x36, 0xb1, 0x1a, 0x03, 2);
DEFINE_PROPERTYKEY(PKEY_Audio_IsVariableBitRate, 0xe6822fee, 0x8c17, 0x4d62, 0x82, 0x3c, 0x8e, 0x9c, 0xfc, 0xbd, 0x1d, 0x5c, 100);
DEFINE_PROPERTYKEY(PKEY_Audio_PeakValue, 0x2579e5d0, 0x1116, 0x4084, 0xbd, 0x9a, 0x9b, 0x4f, 0x7c, 0xb4, 0xdf, 0x5e, 100);
DEFINE_PROPERTYKEY(PKEY_Audio_SampleRate, 0x64440490, 0x4c8b, 0x11d1, 0x8b, 0x80, 0x08, 0x00, 0x36, 0xb1, 0x1a, 0x03, 5);
DEFINE_PROPERTYKEY(PKEY_Audio_SampleSize, 0x64440490, 0x4c8b, 0x11d1, 0x8b, 0x80, 0x08, 0x00, 0x36, 0xb1, 0x1a, 0x03, 6);
DEFINE_PROPERTYKEY(PKEY_Audio_StreamName, 0x64440490, 0x4c8b, 0x11d1, 0x8b, 0x80, 0x08, 0x00, 0x36, 0xb1, 0x1a, 0x03, 9);
DEFINE_PROPERTYKEY(PKEY_Audio_StreamNumber, 0x64440490, 0x4c8b, 0x11d1, 0x8b, 0x80, 0x08, 0x00, 0x36, 0xb1, 0x1a, 0x03, 8);

DEFINE_PROPERTYKEY(PKEY_Title, 0xf29f85e0,0x4ff9,0x1068,0xab,0x91,0x08,0x00,0x2b,0x27,0xb3,0xd9,2);

DEFINE_PROPERTYKEY(PKEY_ItemName, 0x6b8da074,0x3b5c,0x43bc,0x88,0x6f,0x0a,0x2c,0xdc,0xe0,0x0b,0x6f,100);

DEFINE_PROPERTYKEY(PKEY_AppUserModel_ExcludeFromShowInNewInstall, 0x9f4c2855,0x9f79,0x4b39,0xa8,0xd0,0xe1,0xd4,0x2d,0xe1,0xd5,0xf3,8);
DEFINE_PROPERTYKEY(PKEY_AppUserModel_ID, 0x9f4c2855,0x9f79,0x4B39,0xa8,0xd0,0xe1,0xd4,0x2d,0xe1,0xd5,0xf3,5);
DEFINE_PROPERTYKEY(PKEY_AppUserModel_IsDestListSeparator, 0x9f4c2855,0x9f79,0x4b39,0xa8,0xd0,0xe1,0xd4,0x2d,0xe1,0xd5,0xf3,6);
DEFINE_PROPERTYKEY(PKEY_AppUserModel_PreventPinning, 0x9f4c2855,0x9F79,0x4b39,0xa8,0xd0,0xe1,0xd4,0x2d,0xe1,0xd5,0xf3,9);
DEFINE_PROPERTYKEY(PKEY_AppUserModel_RelaunchCommand, 0x9f4c2855,0x9f79,0x4b39,0xa8,0xd0,0xe1,0xd4,0x2d,0xe1,0xd5,0xf3,2);
DEFINE_PROPERTYKEY(PKEY_AppUserModel_RelaunchDisplayNameResource, 0x9f4c2855,0x9f79,0x4b39,0xa8,0xd0,0xe1,0xd4,0x2d,0xe1,0xd5,0xf3,4);
DEFINE_PROPERTYKEY(PKEY_AppUserModel_RelaunchIconResource, 0x9f4c2855,0x9f79,0x4b39,0xa8,0xd0,0xe1,0xd4,0x2d,0xe1,0xd5,0xf3,3);

#endif /*_INC_PROPKEY*/
