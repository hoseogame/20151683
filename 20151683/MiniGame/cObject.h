#pragma once
#define COBJECT_H

#include <time.h>
#include "define.h"
#include "cPoint.h"
#include "Screen.h"
#include <stdlib.h>

class cObject {
public:
	virtual void Render() {};
	cObject() {};
	virtual ~cObject() {}
};