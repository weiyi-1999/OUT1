/*
   Source File : LinearGradientShadingPatternWritingTask.h


   Copyright 2011 Gal Kahana PDFWriter

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

#include "InterpretedGradientStop.h"
#include "EStatusCode.h"
#include "IObjectEndWritingTask.h"
#include "ObjectsBasicTypes.h"
#include "PDFRectangle.h"
#include "PDFMatrix.h"
#include "AbstractGradientShadingPatternWritingTask.h"


class LinearGradientShadingPatternWritingTask: public AbstractGradientShadingPatternWritingTask {
    public:
        LinearGradientShadingPatternWritingTask(
            double inX0,
            double inY0,
            double inX1,
            double inY1,
            InterpretedGradientStopList inColorLine,
            PDFRectangle inBounds,
            PDFMatrix inMatrix,
            ObjectIDType inPatternObjectId
        );

        virtual ~LinearGradientShadingPatternWritingTask();

    private:
        virtual void WriteShadingSpecifics(DictionaryContext* inShadingDict, ObjectsContext* inObjectsContext);

        double x0;
        double y0;
        double x1;
        double y1;
};
