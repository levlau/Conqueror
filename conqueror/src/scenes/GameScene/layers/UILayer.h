#pragma once
#include "layer/Layer.h"

class UILayer : public Layer
{
public:

	UILayer();
	~UILayer() override;

	void OnAttach() override;
	void OnDetach() override;
	void Update(const float dt) override;
	void OnEvent(Event& event) override {};

	void ActivateSoldierUI();
	void ActivateMedicUI();
	void ActivateEngineerUI();
	void ActivateMedicBuildlingUI();
	void ActivateEngineerBuildingUI();
	void ActivateSupplyMenuUI();
	void DeactivateCharacterUI();
	void DeactivateBuildingUI();
	void DeactivateSupplyMenuUI();
	

private:
	PictureBox* character_background;
	PictureBox* building_background;
	PictureBox* supply_menu_background;

	
	void UpdateDeathCountdown();
	void AddCountdown();
	void UpdateSoldierCount();
	void AddSoldierCount();
	Label* countDown;
	Label* soldierCount;

	int hp;
	Label* hp_text;
};