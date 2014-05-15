/*
 Source File : ITiledPatternEndWritingTask.h
 
 
 Copyright 2012 Gal Kahana PDFWriter
 
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at
 
 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 
 
 */
#pragma once

#include "EStatusCode.h"

class PDFTiledPattern;
class ObjectsContext;
namespace PDFHummus
{
    class DocumentContext;  
};

class ITiledPatternEndWritingTask
{
public:
    virtual ~IFormEndWritingTask(){}
    
    virtual PDFHummus::EStatusCode Write(PDFTiledPattern* inTiledPattern,
                                         ObjectsContext* inObjectsContext,
                                         PDFHummus::DocumentContext* inDocumentContext) = 0;
    
};
