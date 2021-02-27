/**
 * SCILL API
 * SCILL gives you the tools to activate, retain and grow your user base in your app or game by bringing you features well known in the gaming industry: Gamification. We take care of the services and technology involved so you can focus on your game and content.
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@scillgame.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#include "ScillApiWrapper/ScillApiBattlePassLevelChallenge.h"

#include "ScillSDK.h"
#include "ScillApiWrapper/ScillApiHelpers.h"

#include "Templates/SharedPointer.h"

namespace ScillSDK 
{

void ScillApiBattlePassLevelChallenge::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (ChallengeId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("challenge_id")); WriteJsonValue(Writer, ChallengeId.GetValue());	
	}
	if (ChallengeName.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("challenge_name")); WriteJsonValue(Writer, ChallengeName.GetValue());	
	}
	if (ChallengeGoal.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("challenge_goal")); WriteJsonValue(Writer, ChallengeGoal.GetValue());	
	}
	if (ChallengeGoalCondition.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("challenge_goal_condition")); WriteJsonValue(Writer, ChallengeGoalCondition.GetValue());	
	}
	if (UserChallengeCurrentScore.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("user_challenge_current_score")); WriteJsonValue(Writer, UserChallengeCurrentScore.GetValue());	
	}
	if (ChallengeIcon.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("challenge_icon")); WriteJsonValue(Writer, ChallengeIcon.GetValue());	
	}
	if (ChallengeIconHd.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("challenge_icon_hd")); WriteJsonValue(Writer, ChallengeIconHd.GetValue());	
	}
	if (Type.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("type")); WriteJsonValue(Writer, Type.GetValue());	
	}
	Writer->WriteObjectEnd();
}

bool ScillApiBattlePassLevelChallenge::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("challenge_id"), ChallengeId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("challenge_name"), ChallengeName);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("challenge_goal"), ChallengeGoal);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("challenge_goal_condition"), ChallengeGoalCondition);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("user_challenge_current_score"), UserChallengeCurrentScore);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("challenge_icon"), ChallengeIcon);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("challenge_icon_hd"), ChallengeIconHd);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("type"), Type);

	return ParseSuccess;
}

}
