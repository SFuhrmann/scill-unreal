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

#pragma once

#include "CoreMinimal.h"
#include "ScillApiBaseModel.h"

namespace ScillSDK
{

class SCILLSDK_API ScillApiLeaderboardsApi
{
public:
	ScillApiLeaderboardsApi();
	~ScillApiLeaderboardsApi();

	/* Sets the URL Endpoint. 
	* Note: several fallback endpoints can be configured in request retry policies, see Request::SetShouldRetry */
	void SetURL(const FString& Url);

	/* Adds global header params to all requests */
	void AddHeaderParam(const FString& Key, const FString& Value);
	void ClearHeaderParams();
	
	/* Sets the retry manager to the user-defined retry manager. User must manage the lifetime of the retry manager.
	* If no retry manager is specified and a request needs retries, a default retry manager will be used. 
	* See also: Request::SetShouldRetry */
	void SetHttpRetryManager(FHttpRetrySystem::FManager& RetryManager);
	FHttpRetrySystem::FManager& GetHttpRetryManager();

	class GetLeaderboardRequest;
	class GetLeaderboardResponse;
	class GetLeaderboardRankingRequest;
	class GetLeaderboardRankingResponse;
	class GetLeaderboardRankingsRequest;
	class GetLeaderboardRankingsResponse;
	class GetLeaderboardsRequest;
	class GetLeaderboardsResponse;
	
    DECLARE_DELEGATE_OneParam(FGetLeaderboardDelegate, const GetLeaderboardResponse&);
    DECLARE_DELEGATE_OneParam(FGetLeaderboardRankingDelegate, const GetLeaderboardRankingResponse&);
    DECLARE_DELEGATE_OneParam(FGetLeaderboardRankingsDelegate, const GetLeaderboardRankingsResponse&);
    DECLARE_DELEGATE_OneParam(FGetLeaderboardsDelegate, const GetLeaderboardsResponse&);
    
    bool GetLeaderboard(const GetLeaderboardRequest& Request, const FGetLeaderboardDelegate& Delegate = FGetLeaderboardDelegate()) const;
    bool GetLeaderboardRanking(const GetLeaderboardRankingRequest& Request, const FGetLeaderboardRankingDelegate& Delegate = FGetLeaderboardRankingDelegate()) const;
    bool GetLeaderboardRankings(const GetLeaderboardRankingsRequest& Request, const FGetLeaderboardRankingsDelegate& Delegate = FGetLeaderboardRankingsDelegate()) const;
    bool GetLeaderboards(const GetLeaderboardsRequest& Request, const FGetLeaderboardsDelegate& Delegate = FGetLeaderboardsDelegate()) const;
    
private:
    void OnGetLeaderboardResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetLeaderboardDelegate Delegate) const;
    void OnGetLeaderboardRankingResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetLeaderboardRankingDelegate Delegate) const;
    void OnGetLeaderboardRankingsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetLeaderboardRankingsDelegate Delegate) const;
    void OnGetLeaderboardsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetLeaderboardsDelegate Delegate) const;
    
	FHttpRequestRef CreateHttpRequest(const Request& Request) const;
	bool IsValid() const;
	void HandleResponse(FHttpResponsePtr HttpResponse, bool bSucceeded, Response& InOutResponse) const;

	FString Url;
	TMap<FString,FString> AdditionalHeaderParams;
	mutable FHttpRetrySystem::FManager* RetryManager = nullptr;
	mutable TUniquePtr<HttpRetryManager> DefaultRetryManager;
};
	
}
