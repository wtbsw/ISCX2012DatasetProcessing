/*************************************************************************
* Copyright 2016 Jarrod N. Bakker
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*    http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
* Makefile for the ISCX 2012 DDoS PCAP file processing program.
*
* FILENAME : parseXML.h
*
* DESCRIPTION :
*       .h file for parseXML.c.
* 
* AUTHOR :  Jarrod N. Bakker 	START DATE :    25/10/2016
*
**/
#ifndef PARSEXML_H
#define PARSEXML_H

xmlDoc * parseXML(char *filename);
void printXML(xmlDoc *doc);

#endif