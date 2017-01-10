#pragma once
#include "src/BaseNPC.h"
#include "src/UtilityValue.h"
#include <map>
#include "src/UtilityScore.h"
using namespace UtilitySystem;

class UtilityNPC : public BaseNPC {
public:
	UtilityNPC(World* pWorld);
	~UtilityNPC();

protected:
	void selectAction(float a_fdeltaTime) override;

private:
	UtilityValue m_waterValue;
	UtilityValue m_foodValue;
	UtilityValue m_restValue;
	UtilityValue m_logValue;
	UtilityValue m_buildValue;

	std::map<std::string, UtilityScore*> m_pUtilityScoreMap;

};
