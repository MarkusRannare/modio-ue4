// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "ModuleManager.h"
#include "modio.h"

extern modio::Instance *modio_instance;

class FmodioModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

private:
};