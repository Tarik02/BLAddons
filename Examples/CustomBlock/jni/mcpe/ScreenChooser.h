#pragma once

#include <string>
#include <functional>

#include "MinecraftClient.h"

class MinecraftUISoundPlayer {};
enum UIScreenType : int { DESKTOP, POCKET };
enum CreateWorldScreenType : int { NORMAL };
enum CraftingType : int { INVENTORY, WORKBENCH };
enum WorldType {};
class SignBlockEntity;

struct ScreenChooser {
	MinecraftClient& client;		// 0
	MinecraftUISoundPlayer& player;	// 4
	UIScreenType screenType;		// 8
	bool canInvite;					// 12
	
	UIScreenType getScreenType() const;
	void pushAddExternalServerScreen();
	void pushChatScreen();
	void pushConsoleScreen();
	void pushCreateWorldScreen(CreateWorldScreenType);
	void pushDeathScreen();
	void pushDebugScreen();
	void pushGamePadLayoutScreen(bool);
	void pushGameViewerScreen();
	void pushInventoryScreen(CraftingType);
	void pushNetherProgressScreen(bool);
	void pushPauseScreen();
	void pushPortfolioScreen();
	void pushProgressScreen(WorldType, const std::string&, std::function<void()>, std::function<void()>, std::function<void()>);
	void pushTextEditScreen(SignBlockEntity*);
	void setDisconnectScreen(const std::string&, const std::string&);
	void setGameplayScreen();
	void setLeaveLevelScreen();
	void setStartMenuScreen();
	void setScreenType(UIScreenType);
};
