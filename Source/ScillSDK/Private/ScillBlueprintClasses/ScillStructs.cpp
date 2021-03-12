// Fill out your copyright notice in the Description page of Project Settings.


#include "ScillBlueprintClasses/ScillStructs.h"

FChallengeCategory FChallengeCategory::FromScillApiChallengeCategory(const ScillSDK::ScillApiChallengeCategory o)
{
	auto n = FChallengeCategory();

	n.IsDailyCategory = o.IsDailyCategory.Get(false);
	n.CategoryPosition = o.CategoryPosition.Get(0);
	n.CategorySlug = o.CategorySlug.Get("");
	n.CategoryName = o.CategoryName.Get("");
	n.CategoryId = o.CategoryId.Get("");

	TArray<FChallenge> challenges = TArray<FChallenge>();

	if(o.Challenges.IsSet())
		for (auto & c : o.Challenges.GetValue())
		{
			challenges.Add(FChallenge::FromScillApiChallenge(c));
		}

	n.Challenges = challenges;

	n.IsDailyCategory = o.IsDailyCategory.Get(false);

	return n;
}

FChallenge FChallenge::FromScillApiChallenge(const ScillSDK::ScillApiChallenge o)
{
	auto n = FChallenge();

	n.ChallengeId = o.ChallengeId.Get("");
	n.ChallengeName = o.ChallengeName.Get("");
	n.LiveDate = o.LiveDate.Get("");
	n.ChallengeIcon = o.ChallengeIcon.Get("");
	n.ChallengeIconHd = o.ChallengeIconHd.Get("");
	n.ChallengeReward = o.ChallengeReward.Get("");
	n.ChallengeRewardType = o.ChallengeRewardType.Get("");
	n.Type = o.Type.Get("");
	n.UserChallengeUnlockedAt = o.UserChallengeUnlockedAt.Get("");
	n.UserChallengeActivatedAt = o.UserChallengeActivatedAt.Get("");

	n.ChallengeDurationTime = o.ChallengeDurationTime.Get(0);
	n.ChallengeGoal = o.ChallengeGoal.Get(0);
	n.UserChallengeCurrentScore = o.UserChallengeCurrentScore.Get(0);
	n.ChallengePrice = o.ChallengePrice.Get(0);
	n.ChallengeGoalCondition = o.ChallengeGoalCondition.Get(0);
	n.ChallengeXp = o.ChallengeXp.Get(0);
	n.UserChallengeStatus = o.UserChallengeStatus.Get(0);

	n.Repeatable = o.Repeatable.Get(false);
	n.IsClaimed = o.IsClaimed.Get(false);
	n.UserChallengeIsClaimed = o.UserChallengeIsClaimed.Get(false);

	return n;
}

FBattlePassUnlockInfo FBattlePassUnlockInfo::FromScillApiBattlePassUnlockInfo(const ScillSDK::ScillApiBattlePassUnlockInfo o)
{
	auto n = FBattlePassUnlockInfo();

	n.PurchaseId = o.PurchaseId.Get("");
	n.BattlePassId = o.BattlePassId.Get("");
	n.PurchasePrice = o.PurchasePrice.Get(0);
	n.UserId = o.UserId.Get("");
	n.PurchaseCurrency = o.PurchaseCurrency.Get("");
	n.PurchasedAt = o.PurchasedAt.Get("");
	n.BattlePassCompleted = o.BattlePassCompleted.Get(false);

	return n;
}

FBattlePassLevelChallenge FBattlePassLevelChallenge::FromScillApiBattlePassLevelChallenge(const ScillSDK::ScillApiBattlePassLevelChallenge o)
{
	auto n = FBattlePassLevelChallenge();

	n.ChallengeId = o.ChallengeId.Get("");
	n.ChallengeName = o.ChallengeName.Get("");
	n.ChallengeGoal = o.ChallengeGoal.Get(0);
	n.ChallengeGoalCondition = o.ChallengeGoalCondition.Get(0);
	n.UserChallengeCurrentScore = o.UserChallengeCurrentScore.Get(0);
	n.ChallengeIcon = o.ChallengeIcon.Get("");
	n.ChallengeIconHd = o.ChallengeIconHd.Get("");
	n.Type = o.Type.Get("");

	return n;
}

FBattlePassLevel FBattlePassLevel::FromScillApiBattlePassLevel(const ScillSDK::ScillApiBattlePassLevel o)
{
	auto n = FBattlePassLevel();

	n.LevelId = o.LevelId.Get("");
	n.AppId = o.AppId.Get("");
	n.BattlePassId = o.BattlePassId.Get("");
	n.RewardAmount = o.RewardAmount.Get("");
	n.RewardTypeName = o.RewardTypeName.Get("");
	n.LevelRewardType = o.LevelRewardType.Get("");
	n.LevelCompleted = o.LevelCompleted.Get(false);
	n.LevelPriority = o.LevelPriority.Get(0);
	n.RewardClaimed = o.RewardClaimed.Get(false);
	n.ActivatedAt = o.ActivatedAt.Get("");
	
	// TODO:
	// Retrieve Battle Pass Level Challenges

	TArray<FBattlePassLevelChallenge> challenges = TArray<FBattlePassLevelChallenge>();
	if(o.Challenges.IsSet())
		for (auto& c : o.Challenges.GetValue())
		{
			challenges.Add(FBattlePassLevelChallenge::FromScillApiBattlePassLevelChallenge(c));
		}


	return n;
}

FBattlePass FBattlePass::FromScillApiBattlePass(const ScillSDK::ScillApiBattlePass battlePass)
{
	auto bp = FBattlePass();

	bp.AppId = battlePass.AppId.Get("");
	bp.BattlePassDescription = battlePass.BattlePassDescription.Get("");
	bp.BattlePassDisclaimer = battlePass.BattlePassDisclaimer.Get("");
	bp.BattlePassId = battlePass.BattlePassId.Get("");
	bp.BattlePassName = battlePass.BattlePassName.Get("");
	bp.BattlePassPriority = battlePass.BattlePassPriority.Get(0);
	bp.BattlePassShortDescription = battlePass.BattlePassDescription.Get("");
	bp.CanPurchaseWithCoins = battlePass.CanPurchaseWithCoins.Get(false);
	bp.CanPurchaseWithMoney = battlePass.CanPurchaseWithMoney.Get(false);
	bp.EndDate = battlePass.EndDate.Get("");
	bp.ImageL = battlePass.ImageL.Get("");
	bp.ImageM = battlePass.ImageM.Get("");
	bp.ImageS = battlePass.ImageS.Get("");
	bp.ImageXl = battlePass.ImageXl.Get("");
	bp.ImageXs = battlePass.ImageXs.Get("");
	bp.IsActive = battlePass.IsActive.Get(false);
	bp.IsUnlockedIncrementally = battlePass.IsUnlockedIncrementally.Get(false);
	bp.PackageSkuAndroid = battlePass.PackageSkuAndroid.Get("");
	bp.PackageSkuIos = battlePass.PackageSkuIos.Get("");
	bp.ReadMoreLink = battlePass.ReadMoreLink.Get("");
	bp.StartDate = battlePass.StartDate.Get("");
	bp.UnlockedAt = battlePass.UnlockedAt.Get("");

	return bp;
}
