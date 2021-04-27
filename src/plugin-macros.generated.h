/*
obs-websocket
Copyright (C) 2021 Kyle Manning <tt2468@irltoolkit.com>

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program. If not, see <https://www.gnu.org/licenses/>
*/

#ifndef PLUGINNAME_H
#define PLUGINNAME_H

#define OBS_WEBSOCKET_VERSION "5.0.0"

#define OBS_WEBSOCKET_RPC_VERSION 1

#define QT_TO_UTF8(str) str.toUtf8().constData()

#define blog(level, msg, ...) blog(level, "[obs-websocket] " msg, ##__VA_ARGS__)

#endif
