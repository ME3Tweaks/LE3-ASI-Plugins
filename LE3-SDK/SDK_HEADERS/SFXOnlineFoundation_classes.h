/*
#############################################################################################
# Mass Effect 3 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: SFXOnlineFoundation_classes.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/


#pragma once
#include <Windows.h>
#include <cstdio>
#include "../SdkInitializer.h"



#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Constants
# ========================================================================================= #
*/

#define CONST_LBDEF_FRIEND_METADATA                              "FF=@"
#define CONST_LBCOLUMN_DEFAULT_METADATA                          "W=150, HMC=tableColHeader1, REMC=tableRowEntry1"
#define CONST_LBCOLUMN_USER_FORMATTING                           "UF=@"
#define CONST_LBCOLUMN_RANK_FORMATTING                           "RF=@"
#define CONST_LBKEYSCOPE_ACCOUNTCOUNTRY                          "accountcountry"
#define CONST_LBKEYSCOPE_MAP                                     "ME3Map"
#define CONST_ONLINE_SETTING_ANY                                 127
#define CONST_SFXONLINE_STATS_CHALLENGEPOINTS                    1
#define CONST_NOT_SCHEDULED                                      -1
#define CONST_SERVER_RATING_SCALE                                100
#define CONST_NumProfiles                                        4
#define CONST_MAX_LOCAL_PLAYERS                                  4

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum SFXOnlineFoundation.ISFXOnlineComponentCommerce.CodeRedemptionResult
/*enum CodeRedemptionResult
{
	REDEMPTION_SUCCESS                                 = 0,
	REDEMPTION_CANCELED                                = 1,
	REDEMPTION_INVALID                                 = 2,
	REDEMPTION_ERROR                                   = 3,
	REDEMPTION_MAX                                     = 4
};*/

// Enum SFXOnlineFoundation.ISFXOnlineComponentGalaxyAtWar.EGawParamType
/*enum EGawParamType
{
	GawMsgParamType_Bool                               = 0,
	GawMsgParamType_Int                                = 1,
	GawMsgParamType_Float                              = 2,
	GawMsgParamType_MAX                                = 3
};*/

// Enum SFXOnlineFoundation.ISFXOnlineComponentGalaxyAtWar.EGaWMsgType
/*enum EGaWMsgType
{
	GaWMsgType_Zero                                    = 0,
	GaWMsgType_PlotEvent                               = 1,
	GaWMsgType_MAX                                     = 2
};*/

// Enum SFXOnlineFoundation.SFXOnlineDefine.LeaderboardStatsError
/*enum LeaderboardStatsError
{
	LBS_OK                                             = 0,
	LBS_FAILED                                         = 1,
	LBS_LB_RANK_NOT_FOUND                              = 2,
	LBS_MAX                                            = 3
};*/

// Enum SFXOnlineFoundation.SFXOnlineDefine.SFXOnlineMessageType
/*enum SFXOnlineMessageType
{
	SFXONLINE_MESSAGE_ACHIEVEMENT                      = 0,
	SFXONLINE_MESSAGE_MAX                              = 1
};*/

// Enum SFXOnlineFoundation.SFXOnlineDefine.SFXOnlineGameDifficulty
/*enum SFXOnlineGameDifficulty
{
	SFXONLINE_DIFFICULTY_BRONZE                        = 0,
	SFXONLINE_DIFFICULTY_SILVER                        = 1,
	SFXONLINE_DIFFICULTY_GOLD                          = 2,
	SFXONLINE_DIFFICULTY_MAX                           = 3
};*/

// Enum SFXOnlineFoundation.SFXOnlineDefine.SFXOnlineGameEnemyType
/*enum SFXOnlineGameEnemyType
{
	SFXONLINE_ENEMY_RANDOM                             = 0,
	SFXONLINE_ENEMY_CERBERUS                           = 1,
	SFXONLINE_ENEMY_GETH                               = 2,
	SFXONLINE_ENEMY_REAPER                             = 3,
	SFXONLINE_ENEMY_MAX                                = 4
};*/

// Enum SFXOnlineFoundation.SFXOnlineDefine.SFXOnlineGameStatus
/*enum SFXOnlineGameStatus
{
	SFXONLINE_IN_MATCH_MAKING                          = 0,
	SFXONLINE_IN_LOBBY                                 = 1,
	SFXONLINE_IN_LOBBY_LONGTIME                        = 2,
	SFXONLINE_IN_GAME_STARTING                         = 3,
	SFXONLINE_IN_GAME_MIDGAME                          = 4,
	SFXONLINE_IN_GAME_FINISHING                        = 5,
	SFXONLINE_IN_UNKNOWN_STATE                         = 6,
	SFXONLINE_IN_MAX                                   = 7
};*/

// Enum SFXOnlineFoundation.SFXOnlineDefine.SFXOnlineSettingPropertiesID
/*enum SFXOnlineSettingPropertiesID
{
	SFXONLINESETTINGS_PROPERTY_MAP_INDEX               = 0,
	SFXONLINESETTINGS_PROPERTY_MAP_MAX                 = 1
};*/

// Enum SFXOnlineFoundation.SFXOnlineDefine.SFXOnlineStatsID
/*enum SFXOnlineStatsID
{
	SFXONLINE_STATS_N7RATING                           = 0,
	SFXONLINE_STATS_MAX                                = 1
};*/

// Enum SFXOnlineFoundation.SFXOnlineDefine.SFXOnlineErrorFieldCause
/*enum SFXOnlineErrorFieldCause
{
	SFXONLINE_FIELD_ERR_UNKNOWN                        = 0,
	SFXONLINE_FIELD_ERR_INVALID_VALUE                  = 1,
	SFXONLINE_FIELD_ERR_ILLEGAL_VALUE                  = 2,
	SFXONLINE_FIELD_ERR_MISSING_VALUE                  = 3,
	SFXONLINE_FIELD_ERR_DUPLICATE_VALUE                = 4,
	SFXONLINE_FIELD_ERR_INVALID_EMAIL_DOMAIN           = 5,
	SFXONLINE_FIELD_ERR_SPACES_NOT_ALLOWED             = 6,
	SFXONLINE_FIELD_ERR_TOO_SHORT                      = 7,
	SFXONLINE_FIELD_ERR_TOO_LONG                       = 8,
	SFXONLINE_FIELD_ERR_TOO_YOUNG                      = 9,
	SFXONLINE_FIELD_ERR_TOO_OLD                        = 10,
	SFXONLINE_FIELD_ERR_ILLEGAL_FOR_COUNTRY            = 11,
	SFXONLINE_FIELD_ERR_BANNED_COUNTRY                 = 12,
	SFXONLINE_FIELD_ERR_NOT_ALLOWED                    = 13,
	SFXONLINE_FIELD_ERR_NOT_MATCH                      = 14,
	SFXONLINE_FIELD_ERR_MAX                            = 15
};*/

// Enum SFXOnlineFoundation.SFXOnlineDefine.SFXOnlineErrorField
/*enum SFXOnlineErrorField
{
	SFXONLINE_FIELD_UNKNOWN                            = 0,
	SFXONLINE_FIELD_PASSWORD                           = 1,
	SFXONLINE_FIELD_VERIFY_PASSWORD                    = 2,
	SFXONLINE_FIELD_EMAIL                              = 3,
	SFXONLINE_FIELD_PARENTAL_EMAIL                     = 4,
	SFXONLINE_FIELD_DISPLAY_NAME                       = 5,
	SFXONLINE_FIELD_STATUS                             = 6,
	SFXONLINE_FIELD_DOB                                = 7,
	SFXONLINE_FIELD_TOKEN                              = 8,
	SFXONLINE_FIELD_EXPIRATION                         = 9,
	SFXONLINE_FIELD_MAX                                = 10
};*/

// Enum SFXOnlineFoundation.SFXOnlineDefine.SFXOnlineErrorContext
/*enum SFXOnlineErrorContext
{
	SFXONLINE_ERRCONTEXT_NONE                          = 0,
	SFXONLINE_ERRCONTEXT_Connect                       = 1,
	SFXONLINE_ERRCONTEXT_Login                         = 2,
	SFXONLINE_ERRCONTEXT_CreatePersona                 = 3,
	SFXONLINE_ERRCONTEXT_LoginPersona                  = 4,
	SFXONLINE_ERRCONTEXT_CreateAccount                 = 5,
	SFXONLINE_ERRCONTEXT_AssociateAccount              = 6,
	SFXONLINE_ERRCONTEXT_SignOut                       = 7,
	SFXONLINE_ERRCONTEXT_MAX                           = 8
};*/

// Enum SFXOnlineFoundation.SFXOnlineDefine.SFXOnlineError
/*enum SFXOnlineError
{
	SFXONLINE_ERR_OK                                   = 0,
	SFXONLINE_AUTH_ERR_DEFAULT                         = 1,
	SFXONLINE_AUTH_ERR_SYSTEM                          = 2,
	SFXONLINE_ERR_AUTHORIZATION_REQUIRED               = 3,
	SFXONLINE_AUTH_ERR_TOS_REQUIRED                    = 4,
	SFXONLINE_AUTH_ERR_INVALID_COUNTRY                 = 5,
	SFXONLINE_AUTH_ERR_INVALID_USER                    = 6,
	SFXONLINE_AUTH_ERR_INVALID_PASSWORD                = 7,
	SFXONLINE_AUTH_ERR_MISSING_PASSWORD                = 8,
	SFXONLINE_AUTH_ERR_INVALID_TOKEN                   = 9,
	SFXONLINE_AUTH_ERR_EXPIRED_TOKEN                   = 10,
	SFXONLINE_AUTH_ERR_EXISTS                          = 11,
	SFXONLINE_AUTH_ERR_TOO_YOUNG                       = 12,
	SFXONLINE_AUTH_ERR_NO_ACCOUNT                      = 13,
	SFXONLINE_AUTH_ERR_PERSONA_NOT_FOUND               = 14,
	SFXONLINE_AUTH_ERR_PERSONA_INACTIVE                = 15,
	SFXONLINE_AUTH_ERR_INVALID_PMAIL                   = 16,
	SFXONLINE_AUTH_ERR_INVALID_FIELD                   = 17,
	SFXONLINE_AUTH_ERR_INVALID_EMAIL                   = 18,
	SFXONLINE_AUTH_ERR_MISSING_EMAIL                   = 19,
	SFXONLINE_AUTH_ERR_INVALID_STATUS                  = 20,
	SFXONLINE_AUTH_ERR_INVALID_SESSION_KEY             = 21,
	SFXONLINE_AUTH_ERR_PERSONA_BANNED                  = 22,
	SFXONLINE_AUTH_ERR_DEACTIVATED                     = 23,
	SFXONLINE_AUTH_ERR_PENDING                         = 24,
	SFXONLINE_AUTH_ERR_BANNED                          = 25,
	SFXONLINE_AUTH_ERR_DISABLED                        = 26,
	SFXONLINE_AUTH_ERR_MISSING_PERSONAID               = 27,
	SFXONLINE_AUTH_ERR_USER_DOES_NOT_MATCH_PERSONA     = 28,
	SFXONLINE_AUTH_ERR_USER_INACTIVE                   = 29,
	SFXONLINE_AUTH_ERR_NAME_MISMATCH                   = 30,
	SFXONLINE_AUTH_ERR_INVALID_PS3_TICKET              = 31,
	SFXONLINE_AUTH_ERR_INVALID_NAMESPACE               = 32,
	SFXONLINE_AUTH_ERR_FIELD_INVALID_CHARS             = 33,
	SFXONLINE_AUTH_ERR_FIELD_TOO_SHORT                 = 34,
	SFXONLINE_AUTH_ERR_FIELD_TOO_LONG                  = 35,
	SFXONLINE_AUTH_ERR_FIELD_MUST_BEGIN_WITH_LETTER    = 36,
	SFXONLINE_AUTH_ERR_FIELD_MISSING                   = 37,
	SFXONLINE_AUTH_ERR_FIELD_INVALID                   = 38,
	SFXONLINE_AUTH_ERR_FIELD_NOT_ALLOWED               = 39,
	SFXONLINE_AUTH_ERR_FIELD_NEEDS_SPECIAL_CHARS       = 40,
	SFXONLINE_AUTH_ERR_FIELD_ALREADY_EXISTS            = 41,
	SFXONLINE_AUTH_ERR_FIELD_NEEDS_CONSENT             = 42,
	SFXONLINE_AUTH_ERR_FIELD_TOO_YOUNG                 = 43,
	SFXONLINE_ERR_DUPLICATE_LOGIN                      = 44,
	SFXONLINE_ERR_DISCONNECTED                         = 45,
	SFXONLINE_SDK_ERR_SERVER_DISCONNECT                = 46,
	SFXONLINE_SDK_ERR_XBL_DISCONNECT                   = 47,
	SFXONLINE_SDK_ERR_PSN_DISCONNECT                   = 48,
	SFXONLINE_REDIRECTOR_NO_MATCHING_INSTANCE          = 49,
	SFXONLINE_REDIRECTOR_CLIENT_NOT_COMPATIBLE         = 50,
	SFXONLINE_REDIRECTOR_CLIENT_UNKNOWN                = 51,
	SFXONLINE_REDIRECTOR_SERVER_DOWN                   = 52,
	SFXONLINE_REDIRECTOR_SERVER_SUNSET                 = 53,
	SFXONLINE_REDIRECTOR_NO_SERVER_CAPACITY            = 54,
	SFXONLINE_SDK_ERR_NO_MULTIPLAYER_PRIVILEGE         = 55,
	SFXONLINE_REDIRECTOR_SERVER_NOT_FOUND              = 56,
	SFXONLINE_AUTH_ERR_PASSWORD_NOT_MATCH              = 57,
	SFXONLINE_AUTH_ERR_INVALID_CODE                    = 58,
	SFXONLINE_AUTH_ERR_CODE_ALREADY_USED               = 59,
	SFXONLINE_SDK_ERR_MINIMUM_AGE_CHECK_FAILED         = 60,
	SFXONLINE_MAX                                      = 61
};*/

// Enum SFXOnlineFoundation.SFXOnlineDefine.SFXOnlinePurchaseSource
/*enum SFXOnlinePurchaseSource
{
	SFXONLINE_PS_CERBERUS_MAIN                         = 0,
	SFXONLINE_PS_SHOW_LIVE_CONTENT                     = 1,
	SFXONLINE_PS_DLC_AVAILABLE                         = 2,
	SFXONLINE_PS_MARKETPLACE                           = 3,
	SFXONLINE_PS_MAX                                   = 4
};*/

// Enum SFXOnlineFoundation.SFXOnlineDefine.SFXOnlineConnection_MessageType
/*enum SFXOnlineConnection_MessageType
{
	SFXONLINE_MT_MESSAGEOFTHEDAY                       = 0,
	SFXONLINE_MT_DOWNLOAD_PROMPT                       = 1,
	SFXONLINE_MT_GAW_SUMMARY                           = 2,
	SFXONLINE_MT_GAW_STATUS_UPDATE                     = 3,
	SFXONLINE_MT_FRIEND_ACHIVEMENT                     = 4,
	SFXONLINE_MT_FRIEND_LEADERBOARD_RANK_CHANGE        = 5,
	SFXONLINE_MT_MESSAGEOFTHEDAY_TICKERONLY            = 6,
	SFXONLINE_MT_DISCONNECTED_TICKERONLY               = 7,
	SFXONLINE_MT_MP_PROMO                              = 8,
	SFXONLINE_MT_MAX                                   = 9
};*/

// Enum SFXOnlineFoundation.SFXOnlineDefine.SFXOnlineUIState
/*enum SFXOnlineUIState
{
	SFXONLINE_UISTATE_NONE                             = 0,
	SFXONLINE_UISTATE_NUCLEUS_CONNECTING               = 1,
	SFXONLINE_UISTATE_NUCLEUS_CONNECTED                = 2,
	SFXONLINE_UISTATE_CERBERUS_CONNECTING              = 3,
	SFXONLINE_UISTATE_CERBERUS_ENTITLED                = 4,
	SFXONLINE_UISTATE_CERBERUS_CONNECTED               = 5,
	SFXONLINE_UISTATE_MAX                              = 6
};*/

// Enum SFXOnlineFoundation.ISFXOnlineComponentGameFlow.JoinFailureReason
/*enum JoinFailureReason
{
	JFR_Unknown                                        = 0,
	JFR_GameFull                                       = 1,
	JFR_InviterLeft                                    = 2,
	JFR_ProtocolMismatch                               = 3,
	JFR_MissingDLCInviter                              = 4,
	JFR_MissingDLCInvitee                              = 5,
	JFR_MAX                                            = 6
};*/

// Enum SFXOnlineFoundation.ISFXOnlineComponentLogin.SFXOnlineConnectMode
/*enum SFXOnlineConnectMode
{
	SFXONLINE_CM_NONE                                  = 0,
	SFXONLINE_CM_IMPLICIT                              = 1,
	SFXONLINE_CM_EXPLICIT                              = 2,
	SFXONLINE_CM_SILENT                                = 3,
	SFXONLINE_CM_FORCEDAUTOMATIC                       = 4,
	SFXONLINE_CM_MAX                                   = 5
};*/

// Enum SFXOnlineFoundation.ISFXOnlineComponentNotification.SFXOnlineNotificationPriority
/*enum SFXOnlineNotificationPriority
{
	SFXONLINE_NOTIFICATION_PRIORITY_CERBERUS_CONTENT   = 0,
	SFXONLINE_NOTIFICATION_PRIORITY_NEW_UNLOCK         = 1,
	SFXONLINE_NOTIFICATION_PRIORITY_SOON_DLC           = 2,
	SFXONLINE_NOTIFICATION_PRIORITY_MOTD               = 3,
	SFXONLINE_NOTIFICATION_PRIORITY_UPCOMING_UNLOCK    = 4,
	SFXONLINE_NOTIFICATION_PRIORITY_UPCOMING_DLC       = 5,
	SFXONLINE_NOTIFICATION_PRIORITY_MAX                = 6
};*/

// Enum SFXOnlineFoundation.ISFXOnlineComponentNotification.SFXOnlineNotificationOfferPurchaseStatus
/*enum SFXOnlineNotificationOfferPurchaseStatus
{
	SFXONLINE_NOTIFICATION_PURHASE_UNKNOWN             = 0,
	SFXONLINE_NOTIFICATION_PURHASE_COMPLETED           = 1,
	SFXONLINE_NOTIFICATION_PURHASE_NONE                = 2,
	SFXONLINE_NOTIFICATION_PURHASE_MAX                 = 3
};*/

// Enum SFXOnlineFoundation.ISFXOnlineComponentNotification.SFXOnlineEntitlementLookupInfoType
/*enum SFXOnlineEntitlementLookupInfoType
{
	SFX_OELIT_NAM_ENTITLEMENT                          = 0,
	SFX_OELIT_NAM_GROUP                                = 1,
	SFX_OELIT_SERVER_ENTITLEMENT                       = 2,
	SFX_OELIT_SERVER_REVOKE                            = 3,
	SFX_OELIT_MAX                                      = 4
};*/

// Enum SFXOnlineFoundation.ISFXOnlineComponentPlatform.EKeyboardType
/*enum EKeyboardType
{
	KT_Standard                                        = 0,
	KT_Password                                        = 1,
	KT_Email                                           = 2,
	KT_Code                                            = 3,
	KT_MAX                                             = 4
};*/

// Enum SFXOnlineFoundation.ISFXOnlineComponentTelemetry.ETelemetryChannel
/*enum ETelemetryChannel
{
	Channel_Normal                                     = 0,
	Channel_Anonymous                                  = 1,
	Channel_MAX                                        = 2
};*/

// Enum SFXOnlineFoundation.ISFXOnlineComponentTelemetry.ETelemetryAttributeType
/*enum ETelemetryAttributeType
{
	AttributeType_None                                 = 0,
	AttributeType_String                               = 1,
	AttributeType_Int                                  = 2,
	AttributeType_Float                                = 3,
	AttributeType_Bool                                 = 4,
	AttributeType_ClassName                            = 5,
	AttributeType_MAX                                  = 6
};*/

// Enum SFXOnlineFoundation.SFXOnlineEvent.SFXOnlineEventStatusFinished
/*enum SFXOnlineEventStatusFinished
{
	SFXONLINE_EVENT_STATUS_FINISHED_SUCCESS            = 0,
	SFXONLINE_EVENT_STATUS_FINISHED_FAILED             = 1,
	SFXONLINE_EVENT_STATUS_FINISHED_CANCELED           = 2,
	SFXONLINE_EVENT_STATUS_FINISHED_TIMEOUT            = 3,
	SFXONLINE_EVENT_STATUS_FINISHED_MAX                = 4
};*/

// Enum SFXOnlineFoundation.SFXOnlineEvent.SFXOnlineEventType
/*enum SFXOnlineEventType
{
	SFXONLINE_EVENT_NONE                               = 0,
	SFXONLINE_EVENT_TICK                               = 1,
	SFXONLINE_EVENT_TIMER                              = 2,
	SFXONLINE_EVENT_MP_GAME_STATUS_CHANGE              = 3,
	SFXONLINE_EVENT_PLATFORM_CONTROLLERCHANGE          = 4,
	SFXONLINE_EVENT_PLATFORM_CONTROLLERCHANGE01        = 5,
	SFXONLINE_EVENT_PLATFORM_CONTROLLERCHANGE02        = 6,
	SFXONLINE_EVENT_PLATFORM_CONTROLLERCHANGE03        = 7,
	SFXONLINE_EVENT_PLATFORM_CONNECT                   = 8,
	SFXONLINE_EVENT_PLATFORM_DISCONNECT                = 9,
	SFXONLINE_EVENT_PLATFORM_LOGINCHANGE               = 10,
	SFXONLINE_EVENT_PLATFORM_LOGINCHANGE01             = 11,
	SFXONLINE_EVENT_PLATFORM_LOGINCHANGE02             = 12,
	SFXONLINE_EVENT_PLATFORM_LOGINCHANGE03             = 13,
	SFXONLINE_EVENT_PLATFORM_UI_OPEN                   = 14,
	SFXONLINE_EVENT_PLATFORM_UI_CLOSE                  = 15,
	SFXONLINE_EVENT_PLATFORM_LOGINCANCEL               = 16,
	SFXONLINE_EVENT_PLATFORM_LOGINSUCCESS              = 17,
	SFXONLINE_EVENT_PLATFORM_UI_KEYBOARD               = 18,
	SFXONLINE_EVENT_LOGIN_SIGNED_IN                    = 19,
	SFXONLINE_EVENT_UTIL_GET_CONFIG_SECTION            = 20,
	SFXONLINE_EVENT_ACHIEVEMENT_GRANT                  = 21,
	SFXONLINE_EVENT_QUICKMATCH                         = 22,
	SFXONLINE_EVENT_INVITE                             = 23,
	SFXONLINE_EVENT_SEEN_PLAYER                        = 24,
	SFXONLINE_EVENT_NETWORK_WAIT_START                 = 25,
	SFXONLINE_EVENT_NETWORK_WAIT_FINISHED              = 26,
	SFXONLINE_EVENT_MAX                                = 27
};*/

// Enum SFXOnlineFoundation.SFXOnlineEvent.SFXOnlineEventStatus
/*enum SFXOnlineEventStatus
{
	SFXONLINE_EVENT_STATUS_NONE                        = 0,
	SFXONLINE_EVENT_STATUS_PENDING                     = 1,
	SFXONLINE_EVENT_STATUS_COMPLETE                    = 2,
	SFXONLINE_EVENT_STATUS_MAX                         = 3
};*/

// Enum SFXOnlineFoundation.SFXOnlineComponentBlazeHub.SFXOnlineComponentBlazeHubEnvironment
/*enum SFXOnlineComponentBlazeHubEnvironment
{
	SFXONLINE_BLAZEHUB_ENV_DISABLED                    = 0,
	SFXONLINE_BLAZEHUB_ENV_DEV                         = 1,
	SFXONLINE_BLAZEHUB_ENV_TEST                        = 2,
	SFXONLINE_BLAZEHUB_ENV_CERT                        = 3,
	SFXONLINE_BLAZEHUB_ENV_PROD                        = 4,
	SFXONLINE_BLAZEHUB_ENV_LOCAL                       = 5,
	SFXONLINE_BLAZEHUB_ENV_STAGE                       = 6,
	SFXONLINE_BLAZEHUB_ENV_MAX                         = 7
};*/

// Enum SFXOnlineFoundation.SFXOnlineComponentBlazeHub.SFXOnlineComponentBlazeHubDirtyAllocationContext
/*enum SFXOnlineComponentBlazeHubDirtyAllocationContext
{
	SFXONLINE_BLAZEHUB_DIRTY_ALLOC_DEFAULT             = 0,
	SFXONLINE_BLAZEHUB_DIRTY_ALLOC_BUGSENTRY           = 1,
	SFXONLINE_BLAZEHUB_DIRTY_ALLOC_MAX                 = 2
};*/

// Enum SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.EDownloadDataStep
/*enum EDownloadDataStep
{
	DDS_Init                                           = 0,
	DDS_GalaxyAtWarLevel                               = 1,
	DDS_BinaryLiveIniData                              = 2,
	DDS_LiveTlkTable                                   = 3,
	DDS_GetLeaderboardList                             = 4,
	DDS_ReadPlayerStorage                              = 5,
	DDS_MAX                                            = 6
};*/

// Enum SFXOnlineFoundation.SFXOnlineJob.OnlineJobCategory
/*enum OnlineJobCategory
{
	OJC_Default                                        = 0,
	OJC_Storage                                        = 1,
	OJC_Leaderboards                                   = 2,
	OJC_FriendList                                     = 3,
	OJC_HTTPSystem                                     = 4,
	OJC_GetAuthToken                                   = 5,
	OJC_ImageSystem                                    = 6,
	OJC_MAX                                            = 7
};*/

// Enum SFXOnlineFoundation.SFXOnlineJob.OnlineJobType
/*enum OnlineJobType
{
	OJT_None                                           = 0,
	OJT_SaveSettings                                   = 1,
	OJT_LoadSettings                                   = 2,
	OJT_GameReporting                                  = 3,
	OJT_GetLeaderboardData                             = 4,
	OJT_GetLeaderboardList                             = 5,
	OJT_GetStatsGroupList                              = 6,
	OJT_ImportFriendListToBlaze                        = 7,
	OJT_SendMessage                                    = 8,
	OJT_FetchAllMessages                               = 9,
	OJT_PurgeMessages                                  = 10,
	OJT_HTTPRequest                                    = 11,
	OJT_GetAuthToken                                   = 12,
	OJT_GalaxyAtWarHTTPRequest                         = 13,
	OJT_HTTPImageRequest                               = 14,
	OJT_AllJobs                                        = 15,
	OJT_MAX                                            = 16
};*/

// Enum SFXOnlineFoundation.SFXOnlineJob.OnlineJobErrorCode
/*enum OnlineJobErrorCode
{
	OJEC_None                                          = 0,
	OJEC_Cancelled                                     = 1,
	OJEC_FailedToStart                                 = 2,
	OJEC_Disconnected                                  = 3,
	OJEC_System                                        = 4,
	OJEC_Timeout                                       = 5,
	OJEC_AuthorizationRequired                         = 6,
	OJEC_RecordNotFound                                = 7,
	OJEC_TooManyKeys                                   = 8,
	OJEC_DBError                                       = 9,
	OJEC_MAX                                           = 10
};*/

// Enum SFXOnlineFoundation.SFXOnlineComponentHTTPManager.ECHTTPManagerState
/*enum ECHTTPManagerState
{
	HTTP_MANAGER_STATE_IDLE                            = 0,
	HTTP_MANAGER_STATE_DOWNLOAD                        = 1,
	HTTP_MANAGER_STATE_MAX                             = 2
};*/

// Enum SFXOnlineFoundation.SFXOnlineComponentOrigin.EPCPresenceStates
/*enum EPCPresenceStates
{
	PC_PRESENCE_OFFLINE                                = 0,
	PC_PRESENCE_ONLINE                                 = 1,
	PC_PRESENCE_INGAME                                 = 2,
	PC_PRESENCE_BUSY                                   = 3,
	PC_PRESENCE_IDLE                                   = 4,
	PC_PRESENCE_JOINABLE                               = 5,
	PC_PRESENCE_MAX                                    = 6
};*/

// Enum SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.SFXOnlineXenonPlayerListButtonType
/*enum SFXOnlineXenonPlayerListButtonType
{
	SFXONLINE_XENON_PLAYERLIST_BUTTON_TYPE_TITLECUSTOM = 0,
	SFXONLINE_XENON_PLAYERLIST_BUTTON_TYPE_PLAYERREVIEW = 1,
	SFXONLINE_XENON_PLAYERLIST_BUTTON_TYPE_GAMEINVITE  = 2,
	SFXONLINE_XENON_PLAYERLIST_BUTTON_TYPE_MESSAGE     = 3,
	SFXONLINE_XENON_PLAYERLIST_BUTTON_TYPE_FRIENDREQUEST = 4,
	SFXONLINE_XENON_PLAYERLIST_BUTTON_TYPE_NONE        = 5,
	SFXONLINE_XENON_PLAYERLIST_BUTTON_TYPE_MAX         = 6
};*/

// Enum SFXOnlineFoundation.SFXOnlineEvent_QuickMatch.SFXOnlineQuickMatchOutcome
/*enum SFXOnlineQuickMatchOutcome
{
	SFXONLINE_MATCHMAKER_IN_PROGRESS                   = 0,
	SFXONLINE_MATCHMAKER_CREATE                        = 1,
	SFXONLINE_MATCHMAKER_JOIN                          = 2,
	SFXONLINE_MATCHMAKER_SEARCH_TIMEOUT                = 3,
	SFXONLINE_MATCHMAKER_FAILED                        = 4,
	SFXONLINE_MATCHMAKER_MAX                           = 5
};*/

// Enum SFXOnlineFoundation.SFXOnlineGameSettings.EPersonalMatchSettingsType
/*enum EPersonalMatchSettingsType
{
	SETTINGS_FOR_SEARCH                                = 0,
	SETTINGS_FOR_CREATE                                = 1,
	SETTINGS_FOR_MAX                                   = 2
};*/

// Enum SFXOnlineFoundation.SFXOnlineGameSettings.EMatchPrivacySetting
/*enum EMatchPrivacySetting
{
	PRIVACY_PUBLIC                                     = 0,
	PRIVACY_PRIVATE                                    = 1,
	PRIVACY_FRIENDS                                    = 2,
	PRIVACY_MAX                                        = 3
};*/

// Enum SFXOnlineFoundation.SFXOnlineHTTPRequest.EHTTPRequest
/*enum EHTTPRequest
{
	HTTP_REQUEST_INVALID                               = 0,
	HTTP_REQUEST_MAX                                   = 1
};*/

// Enum SFXOnlineFoundation.SFXOnlineSubsystem.SFXOnlineComponentType
/*enum SFXOnlineComponentType
{
	SFXONLINE_COMPONENT_TYPE_COORDINATOR               = 0,
	SFXONLINE_COMPONENT_TYPE_ONLINE_API                = 1,
	SFXONLINE_COMPONENT_TYPE_ONLINE_UI                 = 2,
	SFXONLINE_COMPONENT_TYPE_PLATFORM                  = 3,
	SFXONLINE_COMPONENT_TYPE_LOGIN                     = 4,
	SFXONLINE_COMPONENT_TYPE_TELEMETRY                 = 5,
	SFXONLINE_COMPONENT_TYPE_LEADERBOARD               = 6,
	SFXONLINE_COMPONENT_TYPE_STATS                     = 7,
	SFXONLINE_COMPONENT_TYPE_ACHIEVEMENT               = 8,
	SFXONLINE_COMPONENT_TYPE_PLAYGROUP                 = 9,
	SFXONLINE_COMPONENT_TYPE_MATCH_MAKER               = 10,
	SFXONLINE_COMPONENT_TYPE_GAME_MANAGER              = 11,
	SFXONLINE_COMPONENT_TYPE_VOICE                     = 12,
	SFXONLINE_COMPONENT_TYPE_ANTICHEAT                 = 13,
	SFXONLINE_COMPONENT_TYPE_SERVER_LIST               = 14,
	SFXONLINE_COMPONENT_TYPE_GAMEFLOW                  = 15,
	SFXONLINE_COMPONENT_TYPE_ASSOCIATION               = 16,
	SFXONLINE_COMPONENT_TYPE_UNREALSYSTEM              = 17,
	SFXONLINE_COMPONENT_TYPE_UNREALPLAYER              = 18,
	SFXONLINE_COMPONENT_TYPE_UNREALPLAYEREX            = 19,
	SFXONLINE_COMPONENT_TYPE_NOTIFICATION              = 20,
	SFXONLINE_COMPONENT_TYPE_ORIGIN                    = 21,
	SFXONLINE_COMPONENT_TYPE_JOBQUEUE                  = 22,
	SFXONLINE_COMPONENT_TYPE_MATCH_MAKING_BOT          = 23,
	SFXONLINE_COMPONENT_TYPE_MESSAGING                 = 24,
	SFXONLINE_COMPONENT_TYPE_GAME_ENTRY_FLOW           = 25,
	SFXONLINE_COMPONENT_TYPE_LIVE_PARTY                = 26,
	SFXONLINE_COMPONENT_TYPE_HTTP_MANAGER              = 27,
	SFXONLINE_COMPONENT_TYPE_XML_PARSER                = 28,
	SFXONLINE_COMPONENT_TYPE_GALAXYATWAR               = 29,
	SFXONLINE_COMPONENT_TYPE_COMMERCE                  = 30,
	SFXONLINE_COMPONENT_TYPE_IMAGE_MANAGER             = 31,
	SFXONLINE_COMPONENT_TYPE_AVATAR_AWARD              = 32,
	SFXONLINE_COMPONENT_TYPE_MAX                       = 33
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class SFXOnlineFoundation.SFXOnlineComponent
// 0x0034 (0x0094 - 0x0060)
class USFXOnlineComponent : public UObject
{
public:
	struct TArray<struct FSFXOnlineSubscriberEventType> EventSubscriberTable;                             		// 0x0060 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnEvent__Delegate;                              		// 0x0070 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       APIName;                                          		// 0x0080 (0x0008) [0x0000000000000002]              ( CPF_Const )
	class USFXOnlineSubsystem*                         OnlineSubsystem;                                  		// 0x0088 (0x0008) [0x0000000000000000]              
	unsigned long                                      NeedsStateMachine : 1;                            		// 0x0090 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventIsXbox360 ( );
	bool eventIsPS3 ( );
	bool eventIsConsole ( );
	bool GetAllPendingEvents ( unsigned char eEventType, struct TArray<class USFXOnlineEvent*>* aPendingEvents );
	bool IsAnyEventPending ( unsigned char eEventType );
	bool IsEventPending ( unsigned char eEventType, int nEventID );
	class USFXOnlineEvent* GetEvent ( unsigned char eEventType, int nEventID );
	void WaitingForWorkSetObject ( struct TArray<class USFXOnlineEvent*> aOnlineEventSet, struct FScriptDelegate fnWorkComplete );
	void WaitingForWorkSetType ( struct TArray<unsigned char> aWorkUnits, struct FScriptDelegate fnWorkComplete );
	void WaitingForWorkObject ( class USFXOnlineEvent* oEvent, struct FScriptDelegate fnWorkComplete );
	void WaitingForWorkType ( unsigned char eWork, struct FScriptDelegate fnWorkComplete, int nEventID );
	void NotifyWorkFinishedObject ( class USFXOnlineEvent* oEvent, unsigned char eStatusFinished );
	void NotifyWorkFinishedType ( unsigned char eWork, unsigned char eStatusFinished, int nEventID );
	void NotifyWorkStartedObject ( class USFXOnlineEvent* oEvent, unsigned char eEventType, float TimeOut );
	void NotifyWorkStartedType ( unsigned char eWork, int nEventID, float fTimeOut );
	void NotifyEventObject ( class USFXOnlineEvent* oEvent );
	void NotifyEventType ( unsigned char eEventType, unsigned char eStatus, unsigned char eOutcome );
	void StopWaitingForAllWork ( class UObject* oCallbackTarget );
	void UnsubscribeFromAllEvents ( class UObject* oCallbackTarget );
	void UnsubscribeFromEvent ( unsigned char oEventType, struct FScriptDelegate fnEventCallback );
	void SubscribeToEvent ( unsigned char eEventType, struct FScriptDelegate fnEventCallback );
	void OnEvent ( class USFXOnlineEvent* oEvent );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
};

// Class SFXOnlineFoundation.SFXOnlineEvent
// 0x002C (0x008C - 0x0060)
class USFXOnlineEvent : public UObject
{
public:
	struct FString                                     ErrorString;                                      		// 0x0060 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                EventId;                                          		// 0x0070 (0x0004) [0x0000000000000000]              
	float                                              TimeOut;                                          		// 0x0074 (0x0004) [0x0000000000000000]              
	float                                              StartTime;                                        		// 0x0078 (0x0004) [0x0000000000000000]              
	float                                              EndTime;                                          		// 0x007C (0x0004) [0x0000000000000000]              
	int                                                errorCode;                                        		// 0x0080 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsUnique : 1;                                     		// 0x0084 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      TimeOutEnabled : 1;                               		// 0x0084 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      EventType;                                        		// 0x0088 (0x0001) [0x0000000000000000]              
	unsigned char                                      CurrentStatus;                                    		// 0x0089 (0x0001) [0x0000000000000000]              
	unsigned char                                      Outcome;                                          		// 0x008A (0x0001) [0x0000000000000000]              
	unsigned char                                      ErrorContext;                                     		// 0x008B (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	unsigned char GetEventTypeFromString ( struct FString sEventString );
	struct FString GetEventOutcomeAsString ( unsigned char oEventOutcome );
	struct FString GetEventStatusAsString ( unsigned char eStatusStatus );
	struct FString GetEventTypeAsString ( unsigned char eEventType );
	void DumpEventInfo ( );
	void Update ( class USFXOnlineEvent* oEvent );
	bool IsSucceeded ( );
	bool IsCanceled ( );
	bool IsInError ( );
	bool IsComplete ( );
	bool IsPending ( );
	bool IsCompleteAndSucceeded ( );
	void SetEndTime ( float CurrentTime );
	void SetStartTime ( float CurrentTime );
	float GetEndTime ( );
	float GetStartTime ( );
	float GetTimeDifference ( float CurrentTime );
	bool HasTimedOut ( );
	bool IsTimeoutEnabled ( );
	void DisableTimeout ( );
	void EnableTimeout ( );
	void SetTimeout ( float fEventTimeout );
	float GetTimeout ( );
	void SetErrorString ( struct FString sMessage );
	struct FString GetErrorString ( );
	void SetErrorCode ( int nCode );
	int GetErrorCode ( );
	void SetStatus ( unsigned char eNewStatus );
	unsigned char GetStatus ( );
	void SetOutcome ( unsigned char eStatusFinished );
	unsigned char GetOutcome ( );
	void SetEventId ( int nNewEventId );
	int GetEventId ( );
	void SetEventType ( unsigned char eNewEventType );
	unsigned char GetEventType ( );
};

// Class SFXOnlineFoundation.SFXOnlineEvent_Integer
// 0x0004 (0x0090 - 0x008C)
class USFXOnlineEvent_Integer : public USFXOnlineEvent
{
public:
	int                                                m_nInteger;                                       		// 0x008C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void SetInteger ( int nInteger );
	int GetInteger ( );
};

// Class SFXOnlineFoundation.SFXOnlineEvent_Invite
// 0x0010 (0x009C - 0x008C)
class USFXOnlineEvent_Invite : public USFXOnlineEvent
{
public:
	struct FOnlineGameSearchResult                     SearchResult;                                     		// 0x008C (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXOnlineFoundation.SFXOnlineEvent_PlatformKeyboardUI
// 0x004D (0x00D9 - 0x008C)
class USFXOnlineEvent_PlatformKeyboardUI : public USFXOnlineEvent
{
public:
	struct FString                                     Response;                                         		// 0x008C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     TitleText;                                        		// 0x009C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DescriptionText;                                  		// 0x00AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DefaultText;                                      		// 0x00BC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPointer                                    ResponseBuffer;                                   		// 0x00CC (0x0008) [0x0000000000001000]              ( CPF_Native )
	unsigned long                                      ShouldValidate : 1;                               		// 0x00D4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      RouteThroughConsole : 1;                          		// 0x00D4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      LocalUserNum;                                     		// 0x00D8 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXOnlineFoundation.SFXOnlineEvent_QuickMatch
// 0x000D (0x0099 - 0x008C)
class USFXOnlineEvent_QuickMatch : public USFXOnlineEvent
{
public:
	class USFXOnlineGameSettings*                      GameToCreate;                                     		// 0x008C (0x0008) [0x0000000000000000]              
	int                                                GameId;                                           		// 0x0094 (0x0004) [0x0000000000000000]              
	unsigned char                                      SearchOutcome;                                    		// 0x0098 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXOnlineFoundation.SFXOnlineEvent_SeenPlayer
// 0x0008 (0x0094 - 0x008C)
class USFXOnlineEvent_SeenPlayer : public USFXOnlineEvent
{
public:
	struct FPointer                                    SeenPlayer;                                       		// 0x008C (0x0008) [0x0000000000001000]              ( CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXOnlineFoundation.SFXOnlineEvent_String
// 0x0010 (0x009C - 0x008C)
class USFXOnlineEvent_String : public USFXOnlineEvent
{
public:
	struct FString                                     StringData;                                       		// 0x008C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void SetStringData ( struct FString sStringData );
	struct FString GetStringData ( );
};

// Class SFXOnlineFoundation.SFXOnlineEvent_Notification
// 0x0014 (0x00B0 - 0x009C)
class USFXOnlineEvent_Notification : public USFXOnlineEvent_String
{
public:
	struct FString                                     m_sImageName;                                     		// 0x009C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nPriority;                                      		// 0x00AC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void SetPriority ( int nPriority );
	int GetPriority ( );
	void SetImageName ( struct FString sImageName );
	struct FString GetImageName ( );
};

// Class SFXOnlineFoundation.SFXOnlineEvent_Tick
// 0x000C (0x0098 - 0x008C)
class USFXOnlineEvent_Tick : public USFXOnlineEvent
{
public:
	struct FDouble                                     LastTickTime;                                     		// 0x008C (0x0008) [0x0000000000000000]              
	float                                              DeltaTime;                                        		// 0x0094 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXOnlineFoundation.SFXOnlineEventList
// 0x0010 (0x0070 - 0x0060)
class USFXOnlineEventList : public UObject
{
public:
	struct TArray<class USFXOnlineEvent*>              EventList;                                        		// 0x0060 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	class USFXOnlineEvent* GetNextTimedOutEvent ( );
	bool RemoveEvent ( class USFXOnlineEvent* oEvent );
	bool GetAllPendingEvents ( unsigned char eEventType, struct TArray<class USFXOnlineEvent*>* PendingEvents );
	int FindEvent ( class USFXOnlineEvent* oEvent );
	class USFXOnlineEvent* GetEventAtIndex ( int nEventIndex );
	class USFXOnlineEvent* GetEvent ( class USFXOnlineEvent* oEvent );
	bool AddEvent ( class USFXOnlineEvent* oEvent );
};

// Class SFXOnlineFoundation.ISFXOnlineComponent
// 0x0000 (0x0060 - 0x0060)
class UISFXOnlineComponent : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
};

// Class SFXOnlineFoundation.ISFXOnlineComponentAchievement
// 0x0000 (0x0060 - 0x0060)
class UISFXOnlineComponentAchievement : public UISFXOnlineComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int GetTitleAchievementID ( int Index, int* SetIndex );
	int GetPlatformAchievementID ( int Index, int* SetIndex );
	bool IsGranted ( unsigned char LocalUserNum, int AchievementId );
	void Grant ( unsigned char LocalUserNum, int AchievementId );
};

// Class SFXOnlineFoundation.ISFXOnlineComponentAPI
// 0x0000 (0x0060 - 0x0060)
class UISFXOnlineComponentAPI : public UISFXOnlineComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool Idle ( );
	void ResetLocale ( );
	int GetCurrentTime ( );
};

// Class SFXOnlineFoundation.ISFXOnlineComponentCommerce
// 0x0000 (0x0060 - 0x0060)
class UISFXOnlineComponentCommerce : public UISFXOnlineComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void METR_UpdateDLCEntitlements ( );
	struct FString DecryptOfflineEntitlementInfo ( );
	bool StoreOfflineEntitlementInfo ( struct FString a_sEncryptedContent );
	void DumpTestData ( );
	void NucleusEntitlementsRefreshOffline ( );
	void LoadDimeConfig ( struct FString sConfig );
	void OnDimeConfigLoaded ( );
	void FetchOfferDetails ( struct TArray<struct FBWOfferId> aOffers );
	void OnFetchOfferDetailsComplete ( );
	void eventGetOffersList ( struct TArray<struct FBWOfferId> aOfferFilter, struct TArray<struct FBWOfferInfo>* aOffers );
	struct FString GetWalletBalance ( );
	void Display1stPartyStore ( );
	void PurchaseOfferId ( struct FBWOfferId Id );
	void OnPurchaseOfferIdResult ( int nResult );
	void OnCodeRedeemed ( unsigned char nResult );
	void SubmitRedeemCode ( unsigned long bContinue, struct FString strCode );
	void PromptRedeemCode ( );
	void OnPromptRedeemCodeResult ( int nResult );
	void ProcessAutoGrants ( );
	void OnProcessAutoGrantsComplete ( );
	bool GrantEntitlementId ( struct FBWEntitlementId Id, unsigned long bUseNucleusCheck );
	void OnGrantEntitlementResult ( struct FBWEntitlementId Id, int nResult );
	bool ConsumeId ( struct FBWConsumableId Id, int nCopies );
	void OnConsumeResult ( struct FBWConsumableId Id, int nCopies, int nResult );
	bool eventGetConsumableInfo ( struct FBWConsumableId Id, struct FBWConsumableInfo* oConsumable );
	bool eventGetConsumablesList ( struct TArray<struct FBWConsumableInfo>* aConsumables );
	bool eventGetEntitlementInfo ( struct FBWEntitlementId Id, struct FBWEntitlementInfo* oEntitlement );
	bool eventGetEntitlementsList ( struct TArray<struct FBWEntitlementInfo>* aEntitlements );
	void RefreshDigitalRights ( );
	void OnRefreshDigitalRightsResult ( int nResult );
};

// Class SFXOnlineFoundation.ISFXOnlineComponentGalaxyAtWar
// 0x0000 (0x0060 - 0x0060)
class UISFXOnlineComponentGalaxyAtWar : public UISFXOnlineComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void eventSetBaseURL ( struct FString BaseUrl );
	void eventParseTouchMessagesResult ( class USFXOnlineHTTPRequest* request, int* numMsgs, int* errorCode );
	void GetTouchMessagesHTTPRequest ( int msgType, class USFXOnlineHTTPRequest** pSFXOnlineHTTPRequest );
	void eventParseGetMessagesResult ( class USFXOnlineHTTPRequest* request, struct TArray<struct FMessageEntry>* messageEntries, int* errorCode );
	void GetGetMessagesHTTPRequest ( int msgType, class USFXOnlineHTTPRequest** pSFXOnlineHTTPRequest );
	void eventParseSendMessageResult ( class USFXOnlineHTTPRequest* request, int* messageId, struct TArray<int>* messageIds, int* errorCode );
	void GetSendMessageHTTPRequest ( int msgType, struct FString param1, struct FString param2, struct FString param3, class USFXOnlineHTTPRequest** pSFXOnlineHTTPRequest );
	void eventParseHTTPRatingsAssetsLevel ( class USFXOnlineHTTPRequest* request, struct TArray<int>* updatedSecurityRatings, struct TArray<int>* updatedWarAssets, int* Level, int* errorCode );
	void GetIncreaseRatingsHTTPRequest ( int defaultRatingIncrease, struct TArray<struct FMapEntry> securityRatingsIncrease, struct TArray<struct FMapEntry> warAssetsIncrease, class USFXOnlineHTTPRequest** pSFXOnlineHTTPRequest );
	void GetRatingsHTTPRequest ( unsigned long getAssets, class USFXOnlineHTTPRequest** pSFXOnlineHTTPRequest );
	int eventParseAuthenticationResult ( class USFXOnlineHTTPRequest* request );
	void GetAuthenticationHTTPRequest ( struct FString token, int tokenType, class USFXOnlineHTTPRequest** pSFXOnlineHTTPRequest );
	void eventInvalidateSession ( );
	bool eventIsSessionValid ( );
	void Cleanup ( );
	void TouchMessages ( int msgType );
	void GetMessages ( int msgType );
	void SendMessage ( int msgType, struct FString sendMsgParam1, unsigned char ParamType, struct FString sendMsgParam3 );
	void IncreaseRatings ( int defaultRatingIncrease, struct TArray<struct FMapEntry> securityRatingIncrease, struct TArray<struct FMapEntry> warAssetIncrease );
	void GetRatings ( unsigned long getWarAssets, unsigned long bCached );
	void OnTouchMessagesComplete ( int Count, int errorCode );
	void OnGetMessagesComplete ( struct TArray<struct FMessageEntry> Messages, int errorCode );
	void OnSendMessageComplete ( int messageId, struct TArray<int> messageIds, int errorCode );
	void OnIncreaseRatingsComplete ( struct TArray<int> updatedSecurityRatings, struct TArray<int> updatedWarAssets, int Level, int errorCode );
	void OnGetRatingsComplete ( struct TArray<int> updatedSecurityRatings, struct TArray<int> updatedWarAssets, int Level, int errorCode );
	void AuthenticateCompleted ( int errorCode );
};

// Class SFXOnlineFoundation.ISFXOnlineComponentGame
// 0x0000 (0x0060 - 0x0060)
class UISFXOnlineComponentGame : public UISFXOnlineComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool PerformCallRestrictedFunction ( );
	void SetCallRestrictedFunctionMode ( unsigned long bEnable );
	void AllowMatchmaking ( unsigned long bAllow, unsigned long bUpdateServer );
	bool IsInvalidHost ( );
	void GetMultiplayer_MissingDLCs ( unsigned long bInvitee, struct TArray<struct FMPDLCInfo>* missingDLCs );
	void eventSetMPDLCInfo ( struct TArray<struct FMPDLCInfo>* allAvailableDLCs );
	bool IsOnLatestMultiplayerVersion ( );
	void UpdateGameProtocolVersion ( );
	void eventSetServerMatchMakingRulesVersion ( int serverRulesVersion );
	void eventSetMultiplayerTargetVersion ( int protocolVersion );
	class USFXOnlineGameSettings* eventGetSFXGameSettings ( );
	void SetKickedOutOfGame ( unsigned long wasKicked );
	bool WasKickedOutOfGame ( );
	bool KickPlayer ( struct FUniqueNetId PlayerID );
	int GetPlayerCount ( );
	bool IsHostMigrationInProgress ( );
	bool IsReadyForConnections ( );
	void SetHostViabilityEnabled ( unsigned long Enabled );
	bool OnConnectionError ( );
	void LeaveGame ( );
	bool IsPlaying ( );
	bool OnHostAddressResolved ( );
};

// Class SFXOnlineFoundation.ISFXOnlineComponentGameEntryFlow
// 0x0000 (0x0060 - 0x0060)
class UISFXOnlineComponentGameEntryFlow : public UISFXOnlineComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	class USFXOnlineGameSettings* GetDeferredGameSettings ( );
	void eventSetLoginState ( unsigned char loginState );
	bool IsInvitedUserActive ( struct FUniqueNetId* invitedId );
	void OnKitDeployed ( unsigned long Success );
	void OnConnectToMapFlowCompleted ( unsigned long Success );
	bool IsWaitingForKitSelect ( );
	bool IsInConnectToMapFlow ( );
	bool IsInGalaxyMapFlow ( );
	void ActivateConnectToMapFlow ( struct FString mapPackageName, unsigned long fromGalaxyMap, unsigned char Difficulty, int objectiveMode );
	void ActivateMPLobbyAccessFlow ( );
	bool ActivateConnectFlow ( );
	void ActivateInviteFlow ( struct FOnlineGameSearchResult* InviteResult );
};

// Class SFXOnlineFoundation.ISFXOnlineComponentGameFlow
// 0x0000 (0x0060 - 0x0060)
class UISFXOnlineComponentGameFlow : public UISFXOnlineComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventGM_IsConnectionErrorSilent ( );
	bool eventGM_IsInMPMapAction ( );
	bool eventGM_IsInMultiplayerGame ( );
	bool eventGM_IsInMultiplayerFlow ( );
	bool eventGM_IsLeavingGame ( );
	bool eventGM_HasFailedConnecting_QM ( );
	bool eventGM_HasFailedJoiningGameMissingDLCInviter ( );
	bool eventGM_HasFailedJoiningGameMissingDLCInvitee ( );
	bool eventGM_HasFailedJoiningGameProtocolMismatch ( );
	bool eventGM_HasFailedJoiningInviterLeft ( );
	bool eventGM_HasFailedJoiningFullGame ( );
	bool eventGM_HasJoinedGame ( );
	bool eventGM_HasCreatedGame ( );
	bool eventGM_OnHostMigrationEnded ( unsigned long bInLobby );
	bool eventGM_OnHostMigrationStarted ( unsigned long bLocalPlayerIsHost );
	bool eventGM_OnProfileSelected ( );
	bool eventGM_OnNetworkErrorDismissed ( );
	bool eventGM_OnP2PConnectionFailure ( );
	bool eventGM_OnDisconnect ( );
	bool eventGM_OnGameJoined ( );
	bool eventGM_OnInviteErrorNotified ( );
	bool eventGM_OnInviteProceed ( );
	bool eventGM_OnInviteAborted ( );
	bool eventGM_OnInviteAccepted ( unsigned long invitedInactiveUser );
	bool eventGM_OnHostAddressResolved ( );
	bool eventGM_OnLeaveGameComplete ( );
	bool eventGM_OnLeaveGame ( );
	bool eventGM_OnGameCreated ( unsigned long bSuccess );
	bool eventGM_OnCreateGameSent ( );
	bool eventGM_OnQuickMatchSent ( );
	bool eventGM_OnExitMPFlow ( );
	bool eventGM_OnEnterMPGameResults ( );
	bool eventGM_OnEnterMPGameplay ( );
	bool eventGM_OnEnterMPFlow ( );
	bool eventDebugValidateStates ( unsigned long writeToFile );
	struct FString eventGetStateStr ( );
};

// Class SFXOnlineFoundation.ISFXOnlineComponentLeaderboard
// 0x0000 (0x0060 - 0x0060)
class UISFXOnlineComponentLeaderboard : public UISFXOnlineComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool HasNotificationsAvailable ( );
	void eventRemoveRankNotificationCallback ( );
	void eventAddRankNotificationCallback ( );
	struct TArray<struct FRankBypassNotification> GetCurrentRankNotificationsArray ( );
	void RefreshLeaderboardTitles ( );
	int ShowGamerCardForRecord ( unsigned char LocalUserNum, struct FLeaderboardRecord* Record );
	void ReadLeaderboardList ( struct TArray<int>* jobIds );
	int GetFriendLeaderboardData ( int pLbId, struct FPointer pExternalData );
	int GetLeaderboardCenteredData ( int pLbId, struct FUniqueNetId nPlayerId, int nRankRange, struct FPointer pExternalData );
	int GetLeaderboardData ( int pLbId, int nRankStart, int nRankRange, struct FPointer pExternalData );
	void CancelLeaderboardRequests ( );
	void RequestReadLeaderboardList ( );
	void GetRankNotifications ( );
	void RequestLeaderboardCenteredData ( struct FLeaderboardDefinition LeaderboardDef, struct FUniqueNetId nPlayerId, int nRankRange, struct FPointer pExternalData );
	void RequestLeaderboardData ( struct FLeaderboardDefinition LeaderboardDef, int nRankStart, int nRankRange, struct FPointer pExternalData );
	bool GetLeaderboardDefinitionTable ( struct TArray<struct FLeaderboardMapGroup>* aLBDefTableRows );
	bool GetLeaderboardDefinitions ( struct TArray<struct FLeaderboardDefinition>* aLBDefinitions );
	void OnGetRankNotificationsCompleted ( struct TArray<struct FRankBypassNotification> RankBypassNotificationArray );
	void OnReadLbListCompleted ( unsigned char errorCode );
	void OnResultsRetrieved ( struct TArray<struct FLeaderboardColumn> aColumnInfo, struct TArray<struct FLeaderboardRecord> aResults, int iTotalRanks, struct FUniqueNetId uidEntity, unsigned char nErrorCode, struct FPointer pExternalData );
};

// Class SFXOnlineFoundation.ISFXOnlineComponentLogin
// 0x0000 (0x0060 - 0x0060)
class UISFXOnlineComponentLogin : public UISFXOnlineComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void SetExternalDRMDataLoaded ( unsigned long bValue );
	void StartCerberusLogin ( );
	void PostImportFriendListToBlaze ( );
	void SuspendUserPing ( unsigned long suspend );
	unsigned char GetConnectMode ( );
	unsigned char CanShowPresenceInformation ( int nUserIndex );
	unsigned char CanViewPlayerProfiles ( int nUserIndex );
	unsigned char CanPurchaseContent ( int nUserIndex );
	unsigned char CanDownloadUserContent ( int nUserIndex );
	unsigned char CanCommunicate ( int nUserIndex );
	unsigned char CanPlayOnline ( int nUserIndex );
	void EnterCDKey ( struct FString sKey );
	int GetAuthToken ( );
	bool ImportFriendListToBlaze ( );
	void OnImportFriendListToBlazeCompleted ( unsigned char errorCode );
	void OnAuthTokenRetrieved ( struct FString token );
	void RequestImportFriendListToBlaze ( unsigned long callPostImportFriendListToBlaze );
	void OnDownloadOffersUICompleted ( );
	void OnDLCInfoLoaded ( );
	void OpenCerberusUI ( );
	bool IsCerberusMember ( );
	void DisablePersona ( struct FString sPersonaNonGrata );
	void CreatePersona ( struct FString sPersonaName );
	void SelectPersona ( struct FString sPersonaName );
	void AcceptTOS ( unsigned long bAccepted );
	void Disconnect ( unsigned long bShowError );
	void SubmitStore ( struct TArray<int> aiChosen );
	void SubmitCreateNucleusAccountEx ( struct FString sEmail, struct FString sPassword, unsigned long bEAProducts, unsigned long bThirdParty, unsigned long bBioWareProducts, struct FString i_sCountryCode, int BirthDay, int BirthMonth, int BirthYear, struct FString i_sLanguageCode, unsigned long bSubmit );
	void SubmitEmailPasswordMismatch ( struct FString email, struct FString Password, int eReturnCode );
	void SubmitMessageBox ( int eReturnCode );
	void SubmitRedeemCode ( unsigned long bContinue, struct FString i_sCode );
	void SubmitCerberusWelcomeMessage ( );
	void SubmitCerberusIntro ( int eReturnCode );
	void SubmitNucleusWelcomeMessage ( );
	void SubmitCreateNucleusAccount ( struct FString sEmail, struct FString sPassword, unsigned long bEAProducts, unsigned long bThirdParty, unsigned long bBioWareProducts, unsigned long bSubmit );
	void SubmitParentEmail ( unsigned long bContinue, struct FString ParentEmail );
	void SubmitNucleusLogin ( struct FString email, struct FString Password, unsigned char eReturnCode );
	void SubmitIntroPage ( unsigned long bContinue, unsigned long bSimulated );
	void AutoLogin ( struct FString sEmail, struct FString sPassword );
	void AutoLoginWithAccountIndex ( int configAccountIndex );
	bool CheckAutoLoginFromIni ( );
	void GoBackInUI ( );
	void Cancel ( );
	struct FUniqueNetId GetUserId ( );
	struct FString GetPersonaName ( );
	bool HasInternetConnection ( );
	bool IsConnectedTo1stPartyOnlineService ( );
	bool IsSignedIn ( );
	bool IsConnected ( );
	void Connect ( unsigned char connectMode );
	bool IsActiveUser ( struct FUniqueNetId userId );
	void SwitchActiveUserIndex ( int nNewIndex );
	int GetActiveUserIndex ( );
	unsigned char GetLoginStatus ( );
};

// Class SFXOnlineFoundation.ISFXOnlineComponentMatchMakingBot
// 0x0000 (0x0060 - 0x0060)
class UISFXOnlineComponentMatchMakingBot : public UISFXOnlineComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void SetEnabled ( unsigned long Enabled );
	void SetOptions ( unsigned long withDisconnections, unsigned long fastForward );
};

// Class SFXOnlineFoundation.ISFXOnlineComponentMessaging
// 0x0000 (0x0060 - 0x0060)
class UISFXOnlineComponentMessaging : public UISFXOnlineComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void PurgeAllMessagesViaJob ( );
	void FetchAllMessagesViaJob ( );
	void SendMessage ( struct TArray<struct FString> sendToPersonaNames, unsigned char msgType, struct TArray<struct FString> Params );
	void PurgeAllMessages ( );
	void FetchAllMessages ( );
};

// Class SFXOnlineFoundation.ISFXOnlineComponentNotification
// 0x0000 (0x0060 - 0x0060)
class UISFXOnlineComponentNotification : public UISFXOnlineComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void PostGetLeaderboardList ( );
	void ReadPlayerStorageCallback ( unsigned long bWasSuccessful );
	struct FString eventGetStoreCatalogId ( );
	void FetchOfflineEntitlementStoreMappings ( );
	bool IsLiveINIOutOfDate ( );
	bool IsFetchingLiveBinaryINIData ( );
	void RequestBinaryLiveINIData ( unsigned long bMainMenu );
	int GetLiveBinaryINIVersion ( );
	int GetTargetOfferId ( unsigned char nSource );
	void RequestLiveTlkTable ( unsigned long bMainMenu );
	struct FString GetDimeInfo ( );
	struct TArray<struct FSFXOnlineEntitlementLookupInfo> GetEntitlementInfo ( );
	void RequestServerInfo ( );
	void RequestData ( );
	void UpdateMOTDGUI ( );
	struct FSFXOnlineMOTDInfo GetMOTDInfo ( unsigned char Type );
};

// Class SFXOnlineFoundation.ISFXOnlineComponentPlatform
// 0x0000 (0x0060 - 0x0060)
class UISFXOnlineComponentPlatform : public UISFXOnlineComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool ShowInbox ( );
	bool ShowVoiceCommandTunerUI ( );
	int GetMinimumAgeForOnlinePlay ( );
	unsigned char GetFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt, struct TArray<struct FOnlineFriend>* Friends );
	bool ReadFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt );
	bool ShowStoreUI ( );
	bool GetOnlineXuid ( int nUserIndex, struct FUniqueNetId* oUserXuid );
	bool GetOfflineXuid ( int nUserIndex, struct FUniqueNetId* oUserXuid );
	bool AddRecentPlayer ( struct FUniqueNetId oPlayerId, struct FString sDescription );
	bool ShowKeyboardUI ( unsigned char byLocalUserNum, struct FString sTitleText, struct FString sDescriptionText, unsigned char nKeyboardType, unsigned long bShouldValidate, unsigned long bRouteThroughConsole, struct FString sDefaultText, int nMaxResultLength );
	bool ShowAchievementsUI ( unsigned char byLocalUserNum );
	bool ShowFeedbackUI ( unsigned char byLocalUserNum, struct FUniqueNetId oPlayerId );
	bool ShowGamerCardUI ( unsigned char byLocalUserNum, struct FUniqueNetId oPlayerId );
	bool ShowInviteUI ( unsigned char LocalUserNum, struct FString InviteText );
	bool ShowFriendsInviteUI ( unsigned char byLocalUserNum, struct FUniqueNetId oPlayerId );
	bool ShowFriendsUI ( unsigned char byLocalUserNum );
	unsigned char CanShowPresenceInformation ( unsigned char byLocalUserNum );
	unsigned char CanViewPlayerProfiles ( unsigned char byLocalUserNum );
	unsigned char CanPurchaseContent ( unsigned char byLocalUserNum );
	unsigned char CanDownloadUserContent ( unsigned char byLocalUserNum );
	unsigned char CanCommunicate ( unsigned char byLocalUserNum );
	unsigned char CanPlayOnline ( unsigned char byLocalUserNum );
	void SetRichPresence ( unsigned char byLocalUserNum, int nPresenceMode, struct TArray<struct FLocalizedStringSetting>* aLocalizedStringSettings, struct TArray<struct FSettingsProperty>* aProperties );
	bool ShowLoginUI ( unsigned long bShowOnlineOnly );
	unsigned char GetLoginStatus ( unsigned char byLocalUserNum );
};

// Class SFXOnlineFoundation.ISFXOnlineComponentStats
// 0x0000 (0x0060 - 0x0060)
class UISFXOnlineComponentStats : public UISFXOnlineComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int ReadStatsGroupList ( );
	void RequestReadStatsGroupList ( );
	int GetFriendsStatsData ( int nRankRange, struct FPointer pExternalData, struct FLeaderboardStatScope* oScope );
	void OnReadStatsGroupListCompleted ( unsigned char errorCode );
	void OnResultsRetrieved ( struct TArray<struct FLeaderboardColumn> aColumnInfo, struct TArray<struct FLeaderboardRecord> aResults, unsigned char nErrorCode, struct FPointer pExternalData );
};

// Class SFXOnlineFoundation.ISFXOnlineComponentTelemetry
// 0x0000 (0x0060 - 0x0060)
class UISFXOnlineComponentTelemetry : public UISFXOnlineComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Flush ( unsigned char Channel );
	void RegisterConnectionDelegates ( );
	void OnDisconnect ( int Error, struct FString SessionId );
	void OnAuthenticate ( );
	bool CanCollect ( );
};

// Class SFXOnlineFoundation.ISFXOnlineComponentUserInterface
// 0x0000 (0x0060 - 0x0060)
class UISFXOnlineComponentUserInterface : public UISFXOnlineComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventIsInMainMenu ( );
	void eventUpdateGalaxyAtWarLevel ( float newLevel );
	void eventShowStore ( struct TArray<struct FSFXOfferDescriptor> aOffers );
	void eventHasCerberusDLC ( unsigned long bVal );
	void eventOnDisplayNotification ( struct FSFXOnlineMOTDInfo Info );
	void eventClearNotifications ( struct TArray<unsigned char> MessageTypesToClear );
	void eventCloseEANetworking ( );
	void eventSetState ( unsigned char eState );
	void eventMessageBoxCallback ( unsigned long bAPressed, int Context );
	bool ShowQueuedMessageBox ( struct FString sMessage, int srButton1Text );
	void ShowEmailPasswordMismatch ( struct FString email, struct FString Password );
	void ShowMessageBox ( struct FString sTitle, struct FString sMessage, struct FString sButton1Text, struct FString sButton2Text, struct FString sButton3Text );
	void eventShowRedeemCodeConfirmation ( );
	void ShowCreateNucleusAccountEx ( struct FString sEmail, struct FString sPassword, unsigned long bEAProducts, unsigned long bThirdParty, unsigned long bBioWareProducts, struct FString i_sCountryCode, int BirthDay, int BirthMonth, int BirthYear, struct FString i_sLanguageCode, struct TArray<struct FString> m_CountryCodeList, struct TArray<struct FString> m_CountryDisplayList );
	void ShowCerberusWelcomeMessage ( );
	void ShowRedeemCode ( );
	void ShowCerberusIntro ( );
	void ShowNucleusWelcomeMessage ( );
	void ShowCreateNucleusAccount ( struct FString sEmail, struct FString sPassword, unsigned long bEAProducts, unsigned long bThirdParty, unsigned long bRegisterProduct, unsigned long bBioWareProducts, unsigned long bUnderage );
	void ShowParentEmail ( );
	void ShowAccountDemographics ( struct TArray<struct FString> m_CountryCodeList, struct TArray<struct FString> m_CountryDisplayList );
	void ShowTermsOfService ( struct FString i_sTermsOfService, struct FString i_sPrivacyPolicy, unsigned long bTOSChanged );
	void ShowNucleusLogin ( struct FString email, struct FString Password, int eScreenState );
	void ShowIntroPage ( );
};

// Class SFXOnlineFoundation.SFXOnlineDefine
// 0x0000 (0x0060 - 0x0060)
class USFXOnlineDefine : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXOnlineFoundation.SFXOnlineComponentGameFlow
// 0x003E (0x00D2 - 0x0094)
class USFXOnlineComponentGameFlow : public USFXOnlineComponent
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponent;                     		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct TArray<struct FName>                        m_TestStateNames;                                 		// 0x009C (0x0010) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	struct TArray<struct FName>                        m_TestInputNames;                                 		// 0x00AC (0x0010) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	struct FName                                       m_Substate;                                       		// 0x00BC (0x0008) [0x0000000000000000]              
	float                                              m_TimeElapsedInState;                             		// 0x00C4 (0x0004) [0x0000000000000000]              
	float                                              m_LobbyLongWaitingTime;                           		// 0x00C8 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	float                                              m_GameLongActionTime;                             		// 0x00CC (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	unsigned char                                      m_JoinFailureReason;                              		// 0x00D0 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_MatchMakingTimeStatus;                          		// 0x00D1 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void GM_OnQuickMatchUpdateEvent ( class USFXOnlineEvent_QuickMatch* qmEvent );
	bool eventDebugTestInput ( struct FName InputType );
	bool eventDebugValidateStates ( unsigned long writeToFile );
	void MatchMakingTimeStatusUpdate ( unsigned char NewStatus );
	bool eventGM_IsConnectionErrorSilent ( );
	bool eventGM_IsInMPMapAction ( );
	bool eventGM_IsInMultiplayerGame ( );
	bool eventGM_IsInInviteFlow ( );
	bool eventGM_IsInMultiplayerFlow ( );
	bool eventGM_IsLeavingGame ( );
	bool eventGM_HasFailedConnecting_QM ( );
	bool eventGM_HasFailedJoiningGameMissingDLCInvitee ( );
	bool eventGM_HasFailedJoiningGameMissingDLCInviter ( );
	bool eventGM_HasFailedJoiningGameProtocolMismatch ( );
	bool eventGM_HasFailedJoiningInviterLeft ( );
	bool eventGM_HasFailedJoiningFullGame ( );
	bool eventGM_HasFailedConnecting ( );
	bool eventGM_HasJoinedGame ( );
	bool eventGM_HasCreatedGame ( );
	bool eventGM_OnHostMigrationEnded ( unsigned long bInLobby );
	bool eventGM_OnHostMigrationStarted ( unsigned long bLocalPlayerIsHost );
	bool eventGM_OnProfileSelected ( );
	bool eventGM_OnNetworkErrorDismissed ( );
	bool eventGM_OnP2PConnectionFailure ( );
	bool eventGM_OnDisconnect ( );
	bool eventGM_OnQuickMatchUpdate ( class USFXOnlineEvent_QuickMatch* qmEvent );
	void GM_OnTick ( class USFXOnlineEvent* oEvent );
	bool eventGM_CancelSearch ( );
	bool eventGM_OnGameJoinFailure ( unsigned char Reason );
	bool eventGM_OnGameJoined ( unsigned long bSuccess );
	bool eventGM_OnInviteErrorNotified ( );
	bool eventGM_OnInviteProceed ( );
	bool eventGM_OnInviteAborted ( );
	bool eventGM_OnInviteAccepted ( unsigned long invitedInactiveUser );
	bool eventGM_OnHostAddressResolved ( );
	bool eventGM_OnLeaveGameComplete ( );
	bool eventGM_OnLeaveGame ( );
	bool eventGM_OnGameCreated ( unsigned long bSuccess );
	bool eventGM_OnCreateGameSent ( );
	bool eventGM_OnQuickMatchSent ( );
	bool eventGM_OnExitMPFlow ( );
	bool eventGM_OnEnterMPGameResults ( );
	bool eventGM_OnEnterMPGameplay ( );
	bool eventGM_OnEnterMPFlow ( );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
	struct FString eventGetStateStr ( );
};

// Class SFXOnlineFoundation.SFXOnlineComponentHTTPManager
// 0x0045 (0x00D9 - 0x0094)
class USFXOnlineComponentHTTPManager : public USFXOnlineComponent
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponent;                     		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct TArray<class USFXOnlineHTTPRequest*>        mRequests;                                        		// 0x009C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPointer                                    mHttpRef;                                         		// 0x00AC (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    mDataResponse;                                    		// 0x00B4 (0x0008) [0x0000000000001000]              ( CPF_Native )
	class USFXOnlineHTTPRequest*                       mCurrentRequest;                                  		// 0x00BC (0x0008) [0x0000000000001000]              ( CPF_Native )
	int                                                mDataCount;                                       		// 0x00C4 (0x0004) [0x0000000000001000]              ( CPF_Native )
	int                                                mRequestTimeout;                                  		// 0x00C8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                mRequestBuffer;                                   		// 0x00CC (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                mDebugVerbosity;                                  		// 0x00D0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      mServiceStarted : 1;                              		// 0x00D4 (0x0004) [0x0000000000001000] [0x00000001] ( CPF_Native )
	unsigned char                                      mState;                                           		// 0x00D8 (0x0001) [0x0000000000001000]              ( CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnDownloadingTick ( );
	void OnIdleTick ( );
	void QueueRequest ( class USFXOnlineHTTPRequest* request );
	bool ProcessDownload ( class USFXOnlineHTTPRequest* request );
	bool FetchStatus ( class USFXOnlineHTTPRequest* request );
	bool FetchBodyData ( class USFXOnlineHTTPRequest* request );
	bool StartRequest ( class USFXOnlineHTTPRequest* request );
	void StartService ( );
	void OnTick ( class USFXOnlineEvent* oEvent );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
};

// Class SFXOnlineFoundation.SFXOnlineComponentImageManager
// 0x0050 (0x00E4 - 0x0094)
class USFXOnlineComponentImageManager : public USFXOnlineComponent
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponent;                     		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct TArray<struct FSFXOnlineImageRequest>       mPendingRequests;                                 		// 0x009C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FSFXOnlineImageRequest>       mCompletedRequests;                               		// 0x00AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     mBaseUrl;                                         		// 0x00BC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnImageRequestCompleted__Delegate;              		// 0x00CC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                mMaxImages;                                       		// 0x00DC (0x0004) [0x0000000000000000]              
	int                                                mMaxBytes;                                        		// 0x00E0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnJobComplete ( class USFXOnlineHTTPRequest* request );
	int SumTotalSize ( );
	struct FSFXOnlineImageRequest RemoveRequest ( class USFXOnlineHTTPRequest* request );
	void AddCompletedRequest ( struct FSFXOnlineImageRequest request );
	void AddPendingRequest ( struct FSFXOnlineImageRequest request );
	struct FSFXOnlineImageRequest StartRequest ( struct FString ImageName );
	struct FSFXOnlineImageRequest GetImage ( struct FString ImageName );
	void RequestImage ( struct FString ImageName, struct FScriptDelegate CompletedCallback );
	void eventClearReferences ( );
	void ProcessImage ( struct FSFXOnlineImageRequest* imageRequest );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
	void OnImageRequestCompleted ( struct FSFXOnlineImageRequest request );
	void eventSetMaxBytes ( int maxBytes );
	void eventSetMaxImages ( int maxImages );
	void eventSetBaseURL ( struct FString BaseUrl );
};

// Class SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx
// 0x00B8 (0x014C - 0x0094)
class USFXOnlineComponentUnrealPlayerEx : public USFXOnlineComponent
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponent;                     		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FSFXDeviceIdCache                           DeviceCache[ 0x4 ];                               		// 0x009C (0x0090) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDeviceSelectionComplete__Delegate;            		// 0x012C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnProfileDataChanged__Delegate;                 		// 0x013C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool UnlockAvatarAward ( unsigned char LocalUserNum, int AvatarItemId );
	bool ShowCustomPlayersUI ( unsigned char LocalUserNum, struct FString Title, struct FString Description, struct TArray<struct FUniqueNetId>* Players );
	bool ShowPlayersUI ( unsigned char LocalUserNum );
	bool ShowFriendsInviteUI ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	void ClearProfileDataChangedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate );
	void AddProfileDataChangedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate );
	void OnProfileDataChanged ( );
	bool UnlockGamerPicture ( unsigned char LocalUserNum, int PictureId );
	bool IsDeviceValid ( int DeviceID, int SizeNeeded );
	int GetDeviceSelectionResults ( unsigned char LocalUserNum, struct FString* DeviceName );
	void ClearDeviceSelectionDoneDelegate ( unsigned char LocalUserNum, struct FScriptDelegate DeviceDelegate );
	void AddDeviceSelectionDoneDelegate ( unsigned char LocalUserNum, struct FScriptDelegate DeviceDelegate );
	void OnDeviceSelectionComplete ( unsigned long bWasSuccessful, unsigned long bWasBlocked );
	bool ShowDeviceSelectionUI ( unsigned char LocalUserNum, int SizeNeeded, unsigned long bForceShowUI, unsigned long bManageStorage );
	bool ShowMembershipMarketplaceUI ( unsigned char LocalUserNum );
	bool ShowContentMarketplaceUI ( unsigned char LocalUserNum, int CategoryMask, int offerId );
	bool ShowInviteUI ( unsigned char LocalUserNum, struct FString InviteText );
	bool ShowAchievementsUI ( unsigned char LocalUserNum );
	bool ShowMessagesUI ( unsigned char LocalUserNum );
	bool ShowGamerCardUI ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	bool ShowFeedbackUI ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	void OnTick ( class USFXOnlineEvent* oEvent );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
};

// Class SFXOnlineFoundation.SFXOnlineComponentUnrealSystem
// 0x00D9 (0x016D - 0x0094)
class USFXOnlineComponentUnrealSystem : public USFXOnlineComponent
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponent;                     		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct TArray<struct FScriptDelegate>              ExternalUIChangeDelegates;                        		// 0x009C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FScriptDelegate>              ControllerChangeDelegates;                        		// 0x00AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FTitleFile>                   TitleManagedFiles;                                		// 0x00BC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FScriptDelegate>              ReadTitleFileCompleteDelegates;                   		// 0x00CC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FScriptDelegate>              StorageDeviceChangeDelegates;                     		// 0x00DC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FScriptDelegate>              ConnectionStatusChangeDelegates;                  		// 0x00EC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FScriptDelegate>              LinkStatusChangeDelegates;                        		// 0x00FC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLinkStatusChange__Delegate;                   		// 0x010C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnExternalUIChange__Delegate;                   		// 0x011C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnControllerChange__Delegate;                   		// 0x012C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnConnectionStatusChange__Delegate;             		// 0x013C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnStorageDeviceChange__Delegate;                		// 0x014C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadTitleFileComplete__Delegate;              		// 0x015C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      CurrentNotificationPosition;                      		// 0x016C (0x0001) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	unsigned char GetTitleFileState ( struct FString Filename );
	bool GetTitleFileContents ( struct FString Filename, struct TArray<unsigned char>* FileContents );
	void ClearReadTitleFileCompleteDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate );
	void AddReadTitleFileCompleteDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate );
	bool ReadTitleFile ( struct FString FileToRead );
	void OnReadTitleFileComplete ( unsigned long bWasSuccessful, struct FString Filename );
	void ClearStorageDeviceChangeDelegate ( struct FScriptDelegate StorageDeviceChangeDelegate );
	void AddStorageDeviceChangeDelegate ( struct FScriptDelegate StorageDeviceChangeDelegate );
	void OnStorageDeviceChange ( );
	unsigned char GetNATType ( );
	void ClearConnectionStatusChangeDelegate ( struct FScriptDelegate ConnectionStatusDelegate );
	void AddConnectionStatusChangeDelegate ( struct FScriptDelegate ConnectionStatusDelegate );
	void OnConnectionStatusChange ( unsigned char ConnectionStatus );
	bool IsControllerConnected ( int ControllerId );
	void ClearControllerChangeDelegate ( struct FScriptDelegate ControllerChangeDelegate );
	void AddControllerChangeDelegate ( struct FScriptDelegate ControllerChangeDelegate );
	void OnControllerChange ( int ControllerId, unsigned long bIsConnected );
	void SetNetworkNotificationPosition ( unsigned char NewPos );
	unsigned char GetNetworkNotificationPosition ( );
	void ProcessExternalUINotification ( unsigned long bOpening );
	void ClearExternalUIChangeDelegate ( struct FScriptDelegate ExternalUIDelegate );
	void AddExternalUIChangeDelegate ( struct FScriptDelegate ExternalUIDelegate );
	void OnExternalUIChange ( unsigned long bIsOpening );
	void ClearLinkStatusChangeDelegate ( struct FScriptDelegate LinkStatusDelegate );
	void AddLinkStatusChangeDelegate ( struct FScriptDelegate LinkStatusDelegate );
	void OnLinkStatusChange ( unsigned long bIsConnected );
	bool HasLinkConnection ( );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
};

// Class SFXOnlineFoundation.SFXOnlineComponentVoiceInterface
// 0x0060 (0x00F4 - 0x0094)
class USFXOnlineComponentVoiceInterface : public USFXOnlineComponent
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponent;                     		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct TArray<struct FSFXOnlineRemoteTalker>       RemoteTalkers;                                    		// 0x009C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FScriptDelegate>              TalkingDelegates;                                 		// 0x00AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnPlayerTalkingStateChange__Delegate;           		// 0x00BC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRecognitionComplete__Delegate;                		// 0x00CC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPointer                                    VoiceEngine;                                      		// 0x00DC (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FLocalTalker                                LocalTalkers[ 0x4 ];                              		// 0x00E4 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void ClearPlayerTalkingDelegate ( struct FScriptDelegate TalkerDelegate );
	void AddPlayerTalkingDelegate ( struct FScriptDelegate TalkerDelegate );
	void OnTick ( class USFXOnlineEvent* oEvent );
	void ResetVoiceSystem ( );
	void ApplyOptions ( );
	void SetVoiceMode ( int voiceMode );
	void PushToTalkEnd ( );
	void PushToTalkStart ( );
	bool SetOutputDevice ( int outputDeviceId );
	bool SetInputDevice ( int inputDeviceId );
	int GetDefaultOutputDevice ( );
	int GetDefaultInputDevice ( );
	bool EnumerateOutputDevices ( struct TArray<struct FString>* OutputDevices );
	bool EnumerateInputDevices ( struct TArray<struct FString>* InputDevices );
	bool SetVolume ( float Volume );
	bool UnmuteAll ( unsigned char LocalUserNum );
	bool MuteAll ( unsigned char LocalUserNum, unsigned long bAllowFriends );
	bool SetSpeechRecognitionObject ( unsigned char LocalUserNum, class USpeechRecognition* SpeechRecogObj );
	bool SelectVocabulary ( unsigned char LocalUserNum, int VocabularyId );
	void ClearRecognitionCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate RecognitionDelegate );
	void AddRecognitionCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate RecognitionDelegate );
	bool GetRecognitionResults ( unsigned char LocalUserNum, struct TArray<struct FSpeechRecognizedWord>* Words );
	bool StopSpeechRecognition ( unsigned char LocalUserNum );
	bool StartSpeechRecognition ( unsigned char LocalUserNum );
	void StopNetworkedVoice ( unsigned char LocalUserNum );
	void StartNetworkedVoice ( unsigned char LocalUserNum );
	bool IsRemoteTalkerMuted ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	bool UnmuteRemoteTalker ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	bool MuteRemoteTalker ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	bool SetRemoteTalkerPriority ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID, int Priority );
	bool IsHeadsetPresent ( unsigned char LocalUserNum );
	int GetRemotePlayerStatus ( struct FUniqueNetId PlayerID );
	bool IsRemotePlayerTalking ( struct FUniqueNetId PlayerID );
	bool IsLocalPlayerTalking ( unsigned char LocalUserNum );
	bool UnregisterRemoteTalker ( struct FUniqueNetId PlayerID );
	bool RegisterRemoteTalker ( struct FUniqueNetId PlayerID );
	bool UnregisterLocalTalker ( unsigned char LocalUserNum );
	bool RegisterLocalTalker ( unsigned char LocalUserNum );
	void OnRecognitionComplete ( );
	void OnPlayerTalkingStateChange ( struct FUniqueNetId Player, unsigned long bIsTalking );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
};

// Class SFXOnlineFoundation.SFXOnlineComponentXMLParser
// 0x0010 (0x00A4 - 0x0094)
class USFXOnlineComponentXMLParser : public USFXOnlineComponent
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponent;                     		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    mXmlSource;                                       		// 0x009C (0x0008) [0x0000000000001000]              ( CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
	bool GetXMLAttribInteger ( struct FString Element, struct FString attrib, int skipcount, int* intOut );
	bool GetXMLAttribString ( struct FString Element, struct FString attrib, int skipcount, struct FString* stringOut );
	bool GetXMLInteger ( struct FString Element, int skipcount, int* intOut );
	bool GetXMLString ( struct FString Element, int skipcount, struct FString* stringOut );
	void StartParsing ( struct FString xmlInput );
};

// Class SFXOnlineFoundation.SFXOnlineComponentCoordinator
// 0x0028 (0x0088 - 0x0060)
class USFXOnlineComponentCoordinator : public UObject
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponent;                     		// 0x0060 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FScriptDelegate                             __OnEvent__Delegate;                              		// 0x0068 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USFXOnlineEventList*                         EventList;                                        		// 0x0078 (0x0008) [0x0000000000000000]              
	class USFXOnlineEventNotifier*                     EventNotifier;                                    		// 0x0080 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
	void StopWaitingForAllWork ( class UObject* oCallbackTarget );
	void WaitingForWorkSetObject ( struct TArray<class USFXOnlineEvent*> aEventObjects, struct FScriptDelegate fnWorkComplete );
	void WaitingForWorkSetType ( struct TArray<unsigned char> aEventTypes, struct FScriptDelegate fnWorkComplete, struct TArray<int> aWorkEventIds );
	void WaitingForWorkBlocking ( unsigned char eEventType, int nEventID );
	void WaitingForWorkObject ( class USFXOnlineEvent* oEvent, struct FScriptDelegate fnWorkComplete );
	void WaitingForWorkType ( unsigned char eEventType, struct FScriptDelegate fnWorkComplete, int nEventID );
	bool GetAllPendingEvents ( unsigned char EventType, struct TArray<class USFXOnlineEvent*>* PendingEvents );
	bool IsAnyEventPending ( unsigned char EventType );
	bool IsEventPending ( unsigned char eEventType, int nEventID );
	class USFXOnlineEvent* GetEvent ( unsigned char eEventType, int nEventID );
	void UnsubscribeFromAllEvents ( class UObject* oCallbackTarget );
	void UnsubscribeFromEvent ( unsigned char eEventType, struct FScriptDelegate fnEventCallback );
	void SubscribeToEvent ( unsigned char eEventType, struct FScriptDelegate fnEventCallback );
	void NotifyWorkFinishedObject ( class USFXOnlineEvent* oEvent, unsigned char eStatusFinished );
	void NotifyWorkFinishedType ( unsigned char eEventType, unsigned char eStatusFinished, int nEventID );
	void NotifyWorkStartedObject ( class USFXOnlineEvent* oEvent, unsigned char eEventType, int EventId, float TimeOut );
	void NotifyWorkStartedType ( unsigned char eEventType, int nEventID, float fTimeOut );
	void NotifyEventObject ( class USFXOnlineEvent* oEvent );
	void NotifyEventType ( unsigned char eEventType, unsigned char eStatus, unsigned char eOutcome );
	void OnTick ( class USFXOnlineEvent* oEvent );
	void OnEvent ( class USFXOnlineEvent* oEvent );
};

// Class SFXOnlineFoundation.SFXOnlineEventNotifier
// 0x0394 (0x03F4 - 0x0060)
class USFXOnlineEventNotifier : public UObject
{
public:
	struct FSFXOnlineEventNotify                       OnlineEventNotifyTable[ 0x1B ];                   		// 0x0060 (0x0360) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FSFXOnlineNotifyQueueInfo>    EventNotifyAddQueue;                              		// 0x03C0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FSFXOnlineNotifyQueueInfo>    EventNotifyRemoveQueue;                           		// 0x03D0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnEvent__Delegate;                              		// 0x03E0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bQueuingEnabled : 1;                              		// 0x03F0 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void NotifyCallbacks ( struct TArray<struct FScriptDelegate> NotifyArray, class USFXOnlineEvent* Event );
	void NotifyWaiters ( class USFXOnlineEvent* Event );
	void NotifySubscribers ( class USFXOnlineEvent* Event );
	void RemoveAllWaiters ( class UObject* CallbackTarget );
	void AddWaiter ( unsigned char EventType, struct FScriptDelegate EventCallback );
	void RemoveAllSubscribers ( class UObject* CallbackTarget );
	void RemoveSubscriber ( unsigned char EventType, struct FScriptDelegate EventCallback, int RemoveIndex );
	void AddSubscriber ( unsigned char EventType, struct FScriptDelegate EventCallback );
	bool IsSubscribed ( unsigned char EventType, struct FScriptDelegate EventCallback );
	void OnEvent ( class USFXOnlineEvent* Event );
};

// Class SFXOnlineFoundation.SFXOnlineHTTPRequest
// 0x007D (0x00DD - 0x0060)
class USFXOnlineHTTPRequest : public UObject
{
public:
	struct FString                                     mURL;                                             		// 0x0060 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     mConnectionString;                                		// 0x0070 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     mResultBody;                                      		// 0x0080 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<unsigned char>                       mResultBinary;                                    		// 0x0090 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     mResultHeader;                                    		// 0x00A0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FHTTPParameter>               mParameters;                                      		// 0x00B0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FHTTPParameter>               mHeaderParameters;                                		// 0x00C0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                mResultSize;                                      		// 0x00D0 (0x0004) [0x0000000000000000]              
	int                                                mResultResponseCode;                              		// 0x00D4 (0x0004) [0x0000000000000000]              
	unsigned long                                      mPost : 1;                                        		// 0x00D8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mBinary : 1;                                      		// 0x00D8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mResultSuccess : 1;                               		// 0x00D8 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      mComplete : 1;                                    		// 0x00D8 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      mInProgress : 1;                                  		// 0x00D8 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned char                                      mRequestType;                                     		// 0x00DC (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	struct FString eventGenerateParametersString ( );
	struct FString eventGenerateHeaderParametersString ( );
	void eventFillDefaultParameters ( );
	void eventReset ( );
	void eventClearParams ( );
	void eventAddSubURL ( struct FString subUrl );
	void eventSetBaseURL ( struct FString URL );
	void SetPost ( unsigned long post );
	void AddHeaderParameter ( struct FString Key, struct FString Value );
	void eventAddParameter ( struct FString Key, struct FString Value );
	struct FString AddHeaderTerminator ( struct FString InputString );
	struct FString URLEncodeString ( struct FString InputString );
};

// Class SFXOnlineFoundation.SFXOnlineSubsystem
// 0x028C (0x03D0 - 0x0144)
class USFXOnlineSubsystem : public UOnlineSubsystem
{
public:
	struct FString                                     GameProtocolVersion;                              		// 0x0144 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_IsolatedMatchMakingCode;                        		// 0x0154 (0x0010) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	struct TArray<struct FSFXOnlineComponentDescription> ComponentClassList;                               		// 0x0164 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     OnlineUIClass;                                    		// 0x0174 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     OnlineBotClass;                                   		// 0x0184 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     OnlineGameEntryFlowClass;                         		// 0x0194 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     FontPackageName;                                  		// 0x01A4 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class UISFXOnlineComponent*                        OnlineComponentList[ 0x21 ];                      		// 0x01B4 (0x0210) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x108 ];                           		// 0x02BC (0x0108) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class USFXOnlineEvent_Tick*                        TickEvent;                                        		// 0x03C4 (0x0008) [0x0000000000000000]              
	int                                                IniVersionId;                                     		// 0x03CC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	unsigned char GetEnvironment ( );
	void eventExit ( );
	bool ShowConsoleRoutedKeyboardUI ( unsigned char eLocalUserNum, struct FString sTitleText, struct FString sDescriptionText, unsigned long bIsPassword, unsigned long bShouldValidate, struct FString sDefaultText, int nMaxResultLength );
	bool ShowKeyboardUI ( unsigned char eLocalUserNum, struct FString sTitleText, struct FString sDescriptionText, unsigned long bIsPassword, unsigned long bShouldValidate, struct FString sDefaultText, int nMaxResultLength );
	int GetBioDynamicBuildVersion ( );
	bool IsCerberusMember ( );
	struct FString GetProjectID ( );
	struct FString GetCDKey ( );
	struct FString GetLanguage ( );
	struct FName GetPlatform ( );
	void eventShutDown ( );
	bool NativeInit ( );
	void NativeInitOnlineComponent ( int componentIdx, struct FString componentClassName );
	struct FString GetGameProtocolVersion ( );
	class USFXOnlineComponentAvatarAwardXenon* GetComponentAvatarAwardXenon ( );
	class USFXOnlineComponentImageManager* GetComponentImageManager ( );
	class USFXOnlineComponentXMLParser* GetComponentXMLParser ( );
	class USFXOnlineComponentHTTPManager* GetComponentHTTPManager ( );
	class USFXOnlineComponentXenonLiveParty* GetComponentXenonLiveParty ( );
	class USFXOnlineComponentJobQueue* GetComponentJobQueue ( );
	class USFXOnlineComponentOrigin* GetComponentOrigin ( );
	class USFXOnlineComponentVoiceInterface* GetComponentVoiceInterface ( );
	class USFXOnlineComponentUnrealPlayerEx* GetComponentUnrealPlayerEx ( );
	class USFXOnlineComponentUnrealPlayer* GetComponentUnrealPlayer ( );
	class USFXOnlineComponentUnrealSystem* GetComponentUnrealSystem ( );
	class USFXOnlineComponentCoordinator* GetCoordinator ( );
	class UISFXOnlineComponentCommerce* GetComponentCommerce ( );
	class UISFXOnlineComponentGalaxyAtWar* GetComponentGalaxyAtWar ( );
	class UISFXOnlineComponentTelemetry* GetComponentTelemetry ( );
	class UISFXOnlineComponentGameEntryFlow* GetComponentGameEntryFlow ( );
	class UISFXOnlineComponentMessaging* GetComponentMessaging ( );
	class UISFXOnlineComponentLeaderboard* GetComponentLeaderboard ( );
	class UISFXOnlineComponentMatchMakingBot* GetComponentMatchMakingBot ( );
	class UISFXOnlineComponentStats* GetComponentStats ( );
	class UISFXOnlineComponentNotification* GetComponentNotification ( );
	class UISFXOnlineComponentUserInterface* GetComponentUserInterface ( );
	class UISFXOnlineComponentLogin* GetComponentLogin ( );
	class UISFXOnlineComponentGameFlow* GetComponentGameFlow ( );
	class UISFXOnlineComponentGame* GetComponentGame ( );
	class UISFXOnlineComponentAPI* GetComponentAPI ( );
	class UISFXOnlineComponentAchievement* GetComponentAchievement ( );
	class UISFXOnlineComponentPlatform* GetComponentPlatform ( );
	class USFXOnlineSubsystem* GetOnlineSubsystem ( );
	struct FString eventGetURL ( );
	void SetUnrealInterfaces ( );
	void CreateComponents ( );
	void eventUpdateGameProtocolVersion ( int runTimeVersioning );
	void InitGameProtocolVersion ( );
	bool eventInit ( );
};

// Class SFXOnlineFoundation.SFXOnlineComponentAchievementPC
// 0x0050 (0x00E4 - 0x0094)
class USFXOnlineComponentAchievementPC : public USFXOnlineComponent
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponentAchievement;          		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FMap_Mirror                                 AchievementMap;                                   		// 0x009C (0x0048) [0x0000000000003000]              ( CPF_Native | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int GetTitleAchievementID ( int Index, int* SetIndex );
	int GetPlatformAchievementID ( int Index, int* SetIndex );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
	bool IsGranted ( unsigned char LocalUserNum, int AchievementId );
	void Grant ( unsigned char LocalUserNum, int AchievementId );
};

// Class SFXOnlineFoundation.SFXOnlineComponentOrigin
// 0x0175 (0x0209 - 0x0094)
class USFXOnlineComponentOrigin : public USFXOnlineComponent
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponent;                     		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FQWord                                      mUserId;                                          		// 0x009C (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FString                                     mPresenceString;                                  		// 0x00A4 (0x0010) [0x0000000000001000]              ( CPF_Native )
	struct FString                                     mGamePresenceString;                              		// 0x00B4 (0x0010) [0x0000000000001000]              ( CPF_Native )
	struct FString                                     mSessionPresenceString;                           		// 0x00C4 (0x0010) [0x0000000000001000]              ( CPF_Native )
	struct FString                                     mDisplayName;                                     		// 0x00D4 (0x0010) [0x0000000000001000]              ( CPF_Native )
	struct TArray<struct FPCFriend>                    mFriendsListCache;                                		// 0x00E4 (0x0010) [0x0000000000001000]              ( CPF_Native )
	struct TArray<struct FPCFriend>                    mBlockListCache;                                  		// 0x00F4 (0x0010) [0x0000000000001000]              ( CPF_Native )
	struct TArray<struct FSFXOnlineEntitlementLookupInfo> mEntitlementCache;                                		// 0x0104 (0x0010) [0x0000000000001000]              ( CPF_Native )
	struct FString                                     mOriginVersion;                                   		// 0x0114 (0x0010) [0x0000000000001000]              ( CPF_Native )
	struct FString                                     mInviteInfo;                                      		// 0x0124 (0x0010) [0x0000000000001000]              ( CPF_Native )
	struct TArray<struct FScriptDelegate>              mOriginClosedDelegates;                           		// 0x0134 (0x0010) [0x0000000000001000]              ( CPF_Native )
	struct TArray<struct FScriptDelegate>              mOriginAuthKeyDelegates;                          		// 0x0144 (0x0010) [0x0000000000001000]              ( CPF_Native )
	struct TArray<struct FScriptDelegate>              mWalletBalanceDelegates;                          		// 0x0154 (0x0010) [0x0000000000001000]              ( CPF_Native )
	struct FString                                     mContentId;                                       		// 0x0164 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     mMultiplayerId;                                   		// 0x0174 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     mCurrencyId;                                      		// 0x0184 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     mOfferGroup;                                      		// 0x0194 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     mAccessEntitlement;                               		// 0x01A4 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnOriginClosedDelegate__Delegate;               		// 0x01B4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnOriginAuthKey__Delegate;                      		// 0x01C4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnWalletBalanceAvailable__Delegate;             		// 0x01D4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                mTitleStringRef;                                  		// 0x01E4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              mTimeBetweenOnlineChecks;                         		// 0x01E8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                mCheckoutTimeout;                                 		// 0x01EC (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                mFriendQueryTimeout;                              		// 0x01F0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                mEntitlementQueryTimeout;                         		// 0x01F4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                mQueryAchievementsTimeOut;                        		// 0x01F8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                mGrantAchievementsTimeOut;                        		// 0x01FC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              mTimeSinceLastOnlineCheck;                        		// 0x0200 (0x0004) [0x0000000000001000]              ( CPF_Native )
	unsigned long                                      mDisableOrigin : 1;                               		// 0x0204 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	unsigned long                                      mServiceStarted : 1;                              		// 0x0204 (0x0004) [0x0000000000001000] [0x00000002] ( CPF_Native )
	unsigned long                                      mIsLoggedIn : 1;                                  		// 0x0204 (0x0004) [0x0000000000001000] [0x00000004] ( CPF_Native )
	unsigned long                                      mIsOriginDisabled : 1;                            		// 0x0204 (0x0004) [0x0000000000001000] [0x00000008] ( CPF_Native )
	unsigned long                                      mIsEntitlementCacheAvailable : 1;                 		// 0x0204 (0x0004) [0x0000000000001000] [0x00000010] ( CPF_Native )
	unsigned long                                      mIsPendingConnection : 1;                         		// 0x0204 (0x0004) [0x0000000000001000] [0x00000020] ( CPF_Native )
	unsigned long                                      mIsOverlayUp : 1;                                 		// 0x0204 (0x0004) [0x0000000000001000] [0x00000040] ( CPF_Native )
	unsigned long                                      mIsOverlayEnabled : 1;                            		// 0x0204 (0x0004) [0x0000000000001000] [0x00000080] ( CPF_Native )
	unsigned long                                      mOldClient : 1;                                   		// 0x0204 (0x0004) [0x0000000000001000] [0x00000100] ( CPF_Native )
	unsigned long                                      mFriendsListUpToDate : 1;                         		// 0x0204 (0x0004) [0x0000000000001000] [0x00000200] ( CPF_Native )
	unsigned long                                      mIsOnline : 1;                                    		// 0x0204 (0x0004) [0x0000000000001000] [0x00000400] ( CPF_Native )
	unsigned long                                      mPendingInviteJoin : 1;                           		// 0x0204 (0x0004) [0x0000000000001000] [0x00000800] ( CPF_Native )
	unsigned char                                      mPresenceState;                                   		// 0x0208 (0x0001) [0x0000000000001000]              ( CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool IsAchievementGranted ( int AchievementId );
	bool GrantAchievement ( int AchievementId );
	bool IsMuted ( struct FString* personaName );
	void OnOriginGoesOffline ( );
	void OnOriginClosed ( );
	void OnTick ( class USFXOnlineEvent* oEvent );
	void RequestWalletBalance ( );
	void RequestBlockList ( );
	void RequestEntitlementCache ( );
	void ProcessIGODisplayEvent ( unsigned long isOpening );
	void OnBlazeSignedIn ( class USFXOnlineEvent* oEvent );
	bool CheckEntitlementCache ( );
	bool EnsureSignedIn ( );
	bool CheckSignedIn ( );
	bool QueryIgoEnabled ( );
	bool QueryOnline ( );
	bool CheckOnline ( );
	void JoinPendingGameInvite ( );
	bool SetPresenceState ( unsigned char presence );
	bool SetRichPresence ( struct FString presence, struct FString gamePresence );
	bool ClearSessionPresence ( );
	bool SetSessionPresence ( struct FString SessionId );
	bool RequestFriendsList ( );
	bool Checkout ( struct FString offerId );
	bool ShowCheckoutOverlay ( struct FString offerId );
	bool ShowStoreOverlay ( struct FString categoryId );
	bool ShowInviteOverlay ( );
	bool ShowFriendsOverlay ( );
	void RequestAuthToken ( );
	void RequestProfileInfo ( );
	bool RegisterCallbacks ( );
	bool StopService ( );
	bool StartService ( );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
	void eventTriggerWalletBalanceAvailableDelegates ( unsigned long Success, int balance );
	void eventClearWalletBalanceAvailableDelegate ( struct FScriptDelegate walletBalanceDelegate );
	void eventAddWalletBalanceAvailableDelegate ( struct FScriptDelegate walletBalanceDelegate );
	void eventTriggerOriginAuthKeyDelegates ( unsigned long Success, struct FString authKey );
	void eventClearOriginAuthKeyDelegate ( struct FScriptDelegate authKeyDelegate );
	void eventAddOriginAuthKeyDelegate ( struct FScriptDelegate authKeyDelegate );
	void eventTriggerOriginClosedDelegates ( );
	void eventClearOriginClosedDelegate ( struct FScriptDelegate originClosedDelegate );
	void eventAddOriginClosedDelegate ( struct FScriptDelegate originClosedDelegate );
	void OnWalletBalanceAvailable ( unsigned long Success, int walletBalance );
	void OnOriginAuthKey ( unsigned long Success, struct FString authKey );
	void OnOriginClosedDelegate ( );
};

// Class SFXOnlineFoundation.SFXOnlineComponentPlatformPC
// 0x0018 (0x00AC - 0x0094)
class USFXOnlineComponentPlatformPC : public USFXOnlineComponent
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponentPlatform;             		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct TArray<struct FOnlineFriend>                CachedFriendListPC;                               		// 0x009C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool ShowInbox ( );
	bool ShowVoiceCommandTunerUI ( );
	int GetMinimumAgeForOnlinePlay ( );
	unsigned char GetFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt, struct TArray<struct FOnlineFriend>* Friends );
	bool ReadFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt );
	bool ShowStoreUI ( );
	bool GetOnlineXuid ( int nUserIndex, struct FUniqueNetId* oPlayerXuid );
	bool GetOfflineXuid ( int nUserIndex, struct FUniqueNetId* oPlayerXuid );
	bool ShowKeyboardUI ( unsigned char LocalUserNum, struct FString sTitleText, struct FString sDescriptionText, unsigned char nKeyboardType, unsigned long bShouldValidate, unsigned long bRouteThroughConsole, struct FString sDefaultText, int nMaxResultLength );
	bool ShowInviteUI ( unsigned char LocalUserNum, struct FString InviteText );
	bool ShowFriendsInviteUI ( unsigned char eLocalUserNum, struct FUniqueNetId oPlayerXuid );
	bool ShowFriendsUI ( unsigned char eLocalUserNum );
	bool ShowAchievementsUI ( unsigned char byLocalUserNum );
	bool ShowFeedbackUI ( unsigned char eLocalUserNum, struct FUniqueNetId oPlayerId );
	bool ShowGamerCardUI ( unsigned char eLocalUserNum, struct FUniqueNetId oPlayerId );
	unsigned char CanShowPresenceInformation ( unsigned char eLocalUserNum );
	unsigned char CanViewPlayerProfiles ( unsigned char eLocalUserNum );
	unsigned char CanPurchaseContent ( unsigned char eLocalUserNum );
	unsigned char CanDownloadUserContent ( unsigned char eLocalUserNum );
	unsigned char CanCommunicate ( unsigned char eLocalUserNum );
	unsigned char CanPlayOnline ( unsigned char eLocalUserNum );
	void SetRichPresence ( unsigned char eLocalUserNum, int nPresenceMode, struct TArray<struct FLocalizedStringSetting>* aLocalizedStringSettings, struct TArray<struct FSettingsProperty>* aProperties );
	bool ShowLoginUI ( unsigned long bShowOnlineOnly );
	unsigned char GetLoginStatus ( unsigned char eLocalUserNum );
	bool AddRecentPlayer ( struct FUniqueNetId oPlayerId, struct FString sDescription );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
};

// Class SFXOnlineFoundation.SFXOnlineComponentAchievementXenon
// 0x0008 (0x009C - 0x0094)
class USFXOnlineComponentAchievementXenon : public USFXOnlineComponent
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponentAchievement;          		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int GetTitleAchievementID ( int Index, int* SetIndex );
	int GetPlatformAchievementID ( int Index, int* SetIndex );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
	bool IsGranted ( unsigned char LocalUserNum, int AchievementId );
	void Grant ( unsigned char LocalUserNum, int AchievementId );
};

// Class SFXOnlineFoundation.SFXOnlineComponentAvatarAwardXenon
// 0x0008 (0x009C - 0x0094)
class USFXOnlineComponentAvatarAwardXenon : public USFXOnlineComponent
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponent;                     		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
	void Grant ( unsigned char LocalUserNum, int AvatarAwardId );
};

// Class SFXOnlineFoundation.SFXOnlineComponentPlatformXenon
// 0x009D (0x0131 - 0x0094)
class USFXOnlineComponentPlatformXenon : public USFXOnlineComponent
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponentPlatform;             		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FCachedLoginState                           LastLoginState[ 0x4 ];                            		// 0x009C (0x0050) [0x0000000000000002]              ( CPF_Const )
	struct TArray<struct FPointer>                     OverlappedTasks;                                  		// 0x00EC (0x0010) [0x0000000000001000]              ( CPF_Native )
	struct TArray<struct FOnlineFriend>                CachedFriendList;                                 		// 0x00FC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPointer                                    NotificationHandle;                               		// 0x010C (0x0008) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	int                                                NumLogins;                                        		// 0x0114 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                MaxNumFriends;                                    		// 0x0118 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                LastInputDeviceConnectedMask;                     		// 0x011C (0x0004) [0x0000000000000000]              
	float                                              SigninCountDownCounter;                           		// 0x0120 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              SigninCountDownDelay;                             		// 0x0124 (0x0004) [0x0000000000000000]              
	int                                                NumPartyMembers;                                  		// 0x0128 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsInSignInUI : 1;                                		// 0x012C (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      bIsCountingDownSigninNotification : 1;            		// 0x012C (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned char                                      CachedLocalUserNumForAsyncRequest;                		// 0x0130 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool ShowInbox ( );
	bool ShowVoiceCommandTunerUI ( );
	int GetMinimumAgeForOnlinePlay ( );
	unsigned char GetFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt, struct TArray<struct FOnlineFriend>* Friends );
	bool ReadFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt );
	bool ShowStoreUI ( );
	bool GetOnlineXuid ( int nUserIndex, struct FUniqueNetId* oPlayerXuid );
	bool GetOfflineXuid ( int nUserIndex, struct FUniqueNetId* oPlayerXuid );
	bool ShowKeyboardUI ( unsigned char LocalUserNum, struct FString sTitleText, struct FString sDescriptionText, unsigned char nKeyboardType, unsigned long bShouldValidate, unsigned long bRouteThroughConsole, struct FString sDefaultText, int nMaxResultLength );
	bool ShowInviteUI ( unsigned char LocalUserNum, struct FString InviteText );
	bool ShowFriendsInviteUI ( unsigned char eLocalUserNum, struct FUniqueNetId oPlayerXuid );
	bool ShowFriendsUI ( unsigned char eLocalUserNum );
	bool ShowAchievementsUI ( unsigned char byLocalUserNum );
	bool ShowFeedbackUI ( unsigned char eLocalUserNum, struct FUniqueNetId oPlayerXuid );
	bool ShowGamerCardUI ( unsigned char eLocalUserNum, struct FUniqueNetId oUniqueNetId );
	unsigned char CanShowPresenceInformation ( unsigned char eLocalUserNum );
	unsigned char CanViewPlayerProfiles ( unsigned char eLocalUserNum );
	unsigned char CanPurchaseContent ( unsigned char eLocalUserNum );
	unsigned char CanDownloadUserContent ( unsigned char eLocalUserNum );
	unsigned char CanCommunicate ( unsigned char eLocalUserNum );
	unsigned char CanPlayOnline ( unsigned char eLocalUserNum );
	void SetRichPresence ( unsigned char eLocalUserNum, int nPresenceMode, struct TArray<struct FLocalizedStringSetting>* aLocalizedStringSettings, struct TArray<struct FSettingsProperty>* aProperties );
	bool ShowLoginUI ( unsigned long bShowOnlineOnly );
	unsigned char GetLoginStatus ( unsigned char eLocalUserNum );
	void TickAsyncTasks ( );
	void OnTick ( class USFXOnlineEvent* oEvent );
	bool eventIsPlayerInActiveParty ( );
	bool eventIsPlayerInParty ( );
	bool AddRecentPlayer ( struct FUniqueNetId oPlayerId, struct FString sDescription );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
};

// Class SFXOnlineFoundation.SFXOnlineComponentXenonLiveParty
// 0x0078 (0x010C - 0x0094)
class USFXOnlineComponentXenonLiveParty : public USFXOnlineComponent
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponent;                     		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FQWord                                      TotalBandwidthUsed;                               		// 0x009C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FPartyGameInviteDelegates                   PartyChatGameInviteDelegates[ 0x4 ];              		// 0x00A4 (0x0040) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FPointer>                     AsyncTasks;                                       		// 0x00E4 (0x0010) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FScriptDelegate                             __OnSendPartyGameInvitesComplete__Delegate;       		// 0x00F4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                BandwidthUsed;                                    		// 0x0104 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ElapsedTime;                                      		// 0x0108 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnTick ( class USFXOnlineEvent* oEvent );
	void TickBandwidthTracking ( float DeltaTime );
	bool ShowCommunitySessionsUI ( unsigned char LocalUserNum );
	bool ShowVoiceChannelUI ( unsigned char LocalUserNum );
	bool ShowPartyUI ( unsigned char LocalUserNum );
	int GetPartyBandwidth ( );
	bool SetPartyMemberCustomData ( unsigned char LocalUserNum, struct FQWord Data1, struct FQWord Data2 );
	bool GetPartyMemberInformation ( struct TArray<struct FOnlinePartyMember>* PartyMembers );
	void ClearSendPartyGameInvitesCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate SendPartyGameInvitesCompleteDelegate );
	void AddSendPartyGameInvitesCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate SendPartyGameInvitesCompleteDelegate );
	void OnSendPartyGameInvitesComplete ( unsigned long bWasSuccessful );
	bool SendPartyGameInvites ( unsigned char LocalUserNum );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
};

// Class SFXOnlineFoundation.SFXOnlineComponentAchievementPS3
// 0x0008 (0x009C - 0x0094)
class USFXOnlineComponentAchievementPS3 : public USFXOnlineComponent
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponentAchievement;          		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int GetTitleAchievementID ( int Index, int* SetIndex );
	int GetPlatformAchievementID ( int Index, int* SetIndex );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
	bool IsGranted ( unsigned char LocalUserNum, int AchievementId );
	void Grant ( unsigned char LocalUserNum, int AchievementId );
};

// Class SFXOnlineFoundation.SFXOnlineComponentPlatformPS3
// 0x0054 (0x00E8 - 0x0094)
class USFXOnlineComponentPlatformPS3 : public USFXOnlineComponent
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponentPlatform;             		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FUniqueNetId                                mInviterId;                                       		// 0x009C (0x0008) [0x0000000000000000]              
	struct TArray<struct FSFXPS3_MinimumAgeData>       MinimumAgeByCountry;                              		// 0x00A4 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct TArray<struct FUniqueNetId>                 PendingRecentPlayers;                             		// 0x00B4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnSignInComplete__Delegate;                     		// 0x00C4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                srInviteFriend;                                   		// 0x00D4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                mAttachmentDataId;                                		// 0x00D8 (0x0004) [0x0000000000000000]              
	int                                                CachedFriendsListVersion;                         		// 0x00DC (0x0004) [0x0000000000000000]              
	int                                                LastInputDeviceConnectedMask;                     		// 0x00E0 (0x0004) [0x0000000000000000]              
	unsigned long                                      mDispatchInviteOnNextTick : 1;                    		// 0x00E4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bLaunchedSignInUI : 1;                          		// 0x00E4 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool ShowInbox ( );
	void StartInviteFlow ( int attachmentDataId );
	bool GetInviterUniqueNetId ( struct FUniqueNetId* InviterUniqueNetId );
	bool ShowVoiceCommandTunerUI ( );
	int GetMinimumAgeForOnlinePlay ( );
	unsigned char GetFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt, struct TArray<struct FOnlineFriend>* Friends );
	bool ReadFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt );
	bool ShowStoreUI ( );
	bool GetOnlineXuid ( int nUserIndex, struct FUniqueNetId* oPlayerXuid );
	bool GetOfflineXuid ( int nUserIndex, struct FUniqueNetId* oPlayerXuid );
	bool ShowKeyboardUI ( unsigned char LocalUserNum, struct FString sTitleText, struct FString sDescriptionText, unsigned char nKeyboardType, unsigned long bShouldValidate, unsigned long bRouteThroughConsole, struct FString sDefaultText, int nMaxResultLength );
	bool ShowInviteUI ( unsigned char LocalUserNum, struct FString InviteText );
	bool ShowFriendsInviteUI ( unsigned char eLocalUserNum, struct FUniqueNetId oPlayerXuid );
	bool ShowFriendsUI ( unsigned char eLocalUserNum );
	bool ShowAchievementsUI ( unsigned char byLocalUserNum );
	bool ShowFeedbackUI ( unsigned char eLocalUserNum, struct FUniqueNetId oPlayerId );
	bool ShowGamerCardUI ( unsigned char eLocalUserNum, struct FUniqueNetId oPlayerId );
	unsigned char CanShowPresenceInformation ( unsigned char eLocalUserNum );
	unsigned char CanViewPlayerProfiles ( unsigned char eLocalUserNum );
	unsigned char CanPurchaseContent ( unsigned char eLocalUserNum );
	unsigned char CanDownloadUserContent ( unsigned char eLocalUserNum );
	unsigned char CanCommunicate ( unsigned char eLocalUserNum );
	unsigned char CanPlayOnline ( unsigned char eLocalUserNum );
	void SetRichPresence ( unsigned char eLocalUserNum, int nPresenceMode, struct TArray<struct FLocalizedStringSetting>* aLocalizedStringSettings, struct TArray<struct FSettingsProperty>* aProperties );
	bool ShowLoginUIEx ( struct FScriptDelegate funcSignInComplete );
	void OnSignInComplete ( unsigned long bSignedIn );
	bool ShowLoginUI ( unsigned long bShowOnlineOnly );
	unsigned char GetLoginStatus ( unsigned char eLocalUserNum );
	bool AddRecentPlayer ( struct FUniqueNetId oPlayerId, struct FString sDescription );
	void DispatchInviteEvent ( );
	void OnPlayerSeen ( class USFXOnlineEvent* oEvent );
	void OnKeyboardUI ( class USFXOnlineEvent* oEvent );
	void OnTick ( class USFXOnlineEvent* oEvent );
	struct FName GetAPIName ( );
	void RegisterPS3CustomMenuActions ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
};

// Class SFXOnlineFoundation.SFXOnlineComponentAchievementDingo
// 0x0050 (0x00E4 - 0x0094)
class USFXOnlineComponentAchievementDingo : public USFXOnlineComponent
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponentAchievement;          		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FMap_Mirror                                 AchievementMap;                                   		// 0x009C (0x0048) [0x0000000000003000]              ( CPF_Native | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int GetTitleAchievementID ( int Index, int* SetIndex );
	int GetPlatformAchievementID ( int Index, int* SetIndex );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
	bool IsGranted ( unsigned char LocalUserNum, int AchievementId );
	void Grant ( unsigned char LocalUserNum, int AchievementId );
};

// Class SFXOnlineFoundation.SFXOnlineComponentPlatformDingo
// 0x0008 (0x009C - 0x0094)
class USFXOnlineComponentPlatformDingo : public USFXOnlineComponent
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponentPlatform;             		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnTick ( class USFXOnlineEvent* oEvent );
	void OnKeyboardUIClosed ( unsigned long Success, struct FString InputBuffer );
	bool ShowInbox ( );
	bool ShowVoiceCommandTunerUI ( );
	int GetMinimumAgeForOnlinePlay ( );
	unsigned char GetFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt, struct TArray<struct FOnlineFriend>* Friends );
	bool ReadFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt );
	bool ShowStoreUI ( );
	bool GetOnlineXuid ( int nUserIndex, struct FUniqueNetId* oUserXuid );
	bool GetOfflineXuid ( int nUserIndex, struct FUniqueNetId* oUserXuid );
	bool AddRecentPlayer ( struct FUniqueNetId oPlayerId, struct FString sDescription );
	bool ShowKeyboardUI ( unsigned char byLocalUserNum, struct FString sTitleText, struct FString sDescriptionText, unsigned char nKeyboardType, unsigned long bShouldValidate, unsigned long bRouteThroughConsole, struct FString sDefaultText, int nMaxResultLength );
	bool ShowAchievementsUI ( unsigned char byLocalUserNum );
	bool ShowFeedbackUI ( unsigned char byLocalUserNum, struct FUniqueNetId oPlayerId );
	bool ShowGamerCardUI ( unsigned char byLocalUserNum, struct FUniqueNetId oPlayerId );
	bool ShowInviteUI ( unsigned char LocalUserNum, struct FString InviteText );
	bool ShowFriendsInviteUI ( unsigned char byLocalUserNum, struct FUniqueNetId oPlayerId );
	bool ShowFriendsUI ( unsigned char byLocalUserNum );
	unsigned char CanShowPresenceInformation ( unsigned char byLocalUserNum );
	unsigned char CanViewPlayerProfiles ( unsigned char byLocalUserNum );
	unsigned char CanPurchaseContent ( unsigned char byLocalUserNum );
	unsigned char CanDownloadUserContent ( unsigned char byLocalUserNum );
	unsigned char CanCommunicate ( unsigned char byLocalUserNum );
	unsigned char CanPlayOnline ( unsigned char byLocalUserNum );
	void SetRichPresence ( unsigned char byLocalUserNum, int nPresenceMode, struct TArray<struct FLocalizedStringSetting>* aLocalizedStringSettings, struct TArray<struct FSettingsProperty>* aProperties );
	bool ShowLoginUI ( unsigned long bShowOnlineOnly );
	unsigned char GetLoginStatus ( unsigned char byLocalUserNum );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
};

// Class SFXOnlineFoundation.SFXOnlineComponentAchievementOrbis
// 0x0098 (0x012C - 0x0094)
class USFXOnlineComponentAchievementOrbis : public USFXOnlineComponent
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponentAchievement;          		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FMap_Mirror                                 AchievementMap;                                   		// 0x009C (0x0048) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	struct FMap_Mirror                                 TrophyPackMap;                                    		// 0x00E4 (0x0048) [0x0000000000003000]              ( CPF_Native | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int GetTitleAchievementID ( int Index, int* SetIndex );
	int GetPlatformAchievementID ( int Index, int* SetIndex );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
	bool IsGranted ( unsigned char LocalUserNum, int AchievementId );
	void Grant ( unsigned char LocalUserNum, int AchievementId );
};

// Class SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis
// 0x0008 (0x009C - 0x0094)
class USFXOnlineComponentPlatformOrbis : public USFXOnlineComponent
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponentPlatform;             		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnKeyboardUIClosed ( unsigned long Success, struct FString InputBuffer );
	bool ShowInbox ( );
	bool ShowVoiceCommandTunerUI ( );
	int GetMinimumAgeForOnlinePlay ( );
	unsigned char GetFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt, struct TArray<struct FOnlineFriend>* Friends );
	bool ReadFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt );
	bool ShowStoreUI ( );
	bool GetOnlineXuid ( int nUserIndex, struct FUniqueNetId* oUserXuid );
	bool GetOfflineXuid ( int nUserIndex, struct FUniqueNetId* oUserXuid );
	bool AddRecentPlayer ( struct FUniqueNetId oPlayerId, struct FString sDescription );
	bool ShowKeyboardUI ( unsigned char byLocalUserNum, struct FString sTitleText, struct FString sDescriptionText, unsigned char nKeyboardType, unsigned long bShouldValidate, unsigned long bRouteThroughConsole, struct FString sDefaultText, int nMaxResultLength );
	bool ShowAchievementsUI ( unsigned char byLocalUserNum );
	bool ShowFeedbackUI ( unsigned char byLocalUserNum, struct FUniqueNetId oPlayerId );
	bool ShowGamerCardUI ( unsigned char byLocalUserNum, struct FUniqueNetId oPlayerId );
	bool ShowInviteUI ( unsigned char LocalUserNum, struct FString InviteText );
	bool ShowFriendsInviteUI ( unsigned char byLocalUserNum, struct FUniqueNetId oPlayerId );
	bool ShowFriendsUI ( unsigned char byLocalUserNum );
	unsigned char CanShowPresenceInformation ( unsigned char byLocalUserNum );
	unsigned char CanViewPlayerProfiles ( unsigned char byLocalUserNum );
	unsigned char CanPurchaseContent ( unsigned char byLocalUserNum );
	unsigned char CanDownloadUserContent ( unsigned char byLocalUserNum );
	unsigned char CanCommunicate ( unsigned char byLocalUserNum );
	unsigned char CanPlayOnline ( unsigned char byLocalUserNum );
	void SetRichPresence ( unsigned char byLocalUserNum, int nPresenceMode, struct TArray<struct FLocalizedStringSetting>* aLocalizedStringSettings, struct TArray<struct FSettingsProperty>* aProperties );
	bool ShowLoginUI ( unsigned long bShowOnlineOnly );
	unsigned char GetLoginStatus ( unsigned char byLocalUserNum );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
};

// Class SFXOnlineFoundation.SFXOnlineBlazeJobUtilities
// 0x0000 (0x0060 - 0x0060)
class USFXOnlineBlazeJobUtilities : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXOnlineFoundation.SFXOnlineComponentBlaze
// 0x0000 (0x0094 - 0x0094)
class USFXOnlineComponentBlaze : public USFXOnlineComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	struct FName GetAPIName ( );
};

// Class SFXOnlineFoundation.SFXOnlineComponentBlazeGame
// 0x0280 (0x0314 - 0x0094)
class USFXOnlineComponentBlazeGame : public USFXOnlineComponentBlaze
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponentGame;                 		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_Blaze__BlazeStateEventHandler;            		// 0x009C (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_Blaze__GameManager__GameManagerAPIListener;		// 0x00A4 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_Blaze__GameManager__GameListener;         		// 0x00AC (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FUniqueNetId                                m_InviterId;                                      		// 0x00B4 (0x0008) [0x0000000000000000]              
	struct FDouble                                     m_HostMigrationStartTime;                         		// 0x00BC (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FInviteData                                 InviteCache[ 0x4 ];                               		// 0x00C4 (0x0040) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<int>                                 ValidHostingNatTypes;                             		// 0x0104 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     m_DLC_Protocol;                                   		// 0x0114 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FScriptDelegate>              EndOnlineGameCompleteDelegates;                   		// 0x0124 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FScriptDelegate>              FindOnlineGamesCompleteDelegates;                 		// 0x0134 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FScriptDelegate>              CreateOnlineGameCompleteDelegates;                		// 0x0144 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FScriptDelegate>              QuickMatchCompleteDelegates;                      		// 0x0154 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FScriptDelegate>              JoinOnlineGameCompleteDelegates;                  		// 0x0164 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FScriptDelegate>              UpdateOnlineGameCompleteDelegates;                		// 0x0174 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FScriptDelegate>              DestroyOnlineGameCompleteDelegates;               		// 0x0184 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FMPDLCInfo>                   m_MPDLCInfo;                                      		// 0x0194 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FMPDLCInfo>                   m_MissingDLCsInvitee;                             		// 0x01A4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FMPDLCInfo>                   m_MissingDLCsInviter;                             		// 0x01B4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnQuickMatchComplete__Delegate;                 		// 0x01C4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCreateOnlineGameComplete__Delegate;           		// 0x01D4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUpdateOnlineGameComplete__Delegate;           		// 0x01E4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFindOnlineGamesComplete__Delegate;            		// 0x01F4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCancelFindOnlineGamesComplete__Delegate;      		// 0x0204 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDestroyOnlineGameComplete__Delegate;          		// 0x0214 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnJoinOnlineGameComplete__Delegate;             		// 0x0224 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRegisterPlayerComplete__Delegate;             		// 0x0234 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUnregisterPlayerComplete__Delegate;           		// 0x0244 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnStartOnlineGameComplete__Delegate;            		// 0x0254 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnEndOnlineGameComplete__Delegate;              		// 0x0264 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnArbitrationRegistrationComplete__Delegate;    		// 0x0274 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGameInviteAccepted__Delegate;                 		// 0x0284 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPointer                                    m_pNetAdapter;                                    		// 0x0294 (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    m_MatchMakingJobId;                               		// 0x029C (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    m_AcceptingInviteJobId;                           		// 0x02A4 (0x0008) [0x0000000000001000]              ( CPF_Native )
	class USFXOnlineGameSettings*                      GameSettings;                                     		// 0x02AC (0x0008) [0x0000000000000000]              
	class USFXOnlineGameSearch*                        GameSearch;                                       		// 0x02B4 (0x0008) [0x0000000000000000]              
	class UOnlineGameSettings*                         m_PendingGameSettings;                            		// 0x02BC (0x0008) [0x0000000000000000]              
	class UOnlineGameSettings*                         m_UpdatedGameSettings;                            		// 0x02C4 (0x0008) [0x0000000000000000]              
	struct FName                                       m_HostMigrationMsgBoxName;                        		// 0x02CC (0x0008) [0x0000000000000002]              ( CPF_Const )
	class USFXOnlineEvent_Invite*                      m_DelayedInvite;                                  		// 0x02D4 (0x0008) [0x0000000000000000]              
	float                                              m_HostMigrationTimeout;                           		// 0x02DC (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	float                                              m_HostMigrationMessageMinTime;                    		// 0x02E0 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	int                                                m_MatchMakingSessionDurationMs;                   		// 0x02E4 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	int                                                m_MinPlayerCount;                                 		// 0x02E8 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	int                                                m_DesiredPlayerCount;                             		// 0x02EC (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	int                                                srHostMigrationInGame;                            		// 0x02F0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                srHostMigrationInLobby;                           		// 0x02F4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                srInviteLocalPlayerError;                         		// 0x02F8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                srPopupOk;                                        		// 0x02FC (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                m_MultiplayerTargetVersion;                       		// 0x0300 (0x0004) [0x0000000000000000]              
	int                                                m_MultiplayerProtocolVersion;                     		// 0x0304 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	int                                                m_ServerMatchMakingRulesVersion;                  		// 0x0308 (0x0004) [0x0000000000000000]              
	int                                                m_RunningUpdateRequestCount;                      		// 0x030C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_IgnoreBlazeServerDisconnect : 1;                		// 0x0310 (0x0004) [0x0000000000004002] [0x00000001] ( CPF_Const | CPF_Config )
	unsigned long                                      m_AssertOnMatchMakingErrors : 1;                  		// 0x0310 (0x0004) [0x0000000000004002] [0x00000002] ( CPF_Const | CPF_Config )
	unsigned long                                      m_HostMigrationEnabled : 1;                       		// 0x0310 (0x0004) [0x0000000000004002] [0x00000004] ( CPF_Const | CPF_Config )
	unsigned long                                      m_KickedPlayerAlsoBanned : 1;                     		// 0x0310 (0x0004) [0x0000000000004002] [0x00000008] ( CPF_Const | CPF_Config )
	unsigned long                                      m_HostViabilityEnabled : 1;                       		// 0x0310 (0x0004) [0x0000000000004000] [0x00000010] ( CPF_Config )
	unsigned long                                      bAllowMatchmaking : 1;                            		// 0x0310 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      m_ResolveHostAddressInProgress : 1;               		// 0x0310 (0x0004) [0x0000000000002000] [0x00000040] ( CPF_Transient )
	unsigned long                                      m_HostMigrationInProgress : 1;                    		// 0x0310 (0x0004) [0x0000000000002000] [0x00000080] ( CPF_Transient )
	unsigned long                                      m_HostMigrationCompleted : 1;                     		// 0x0310 (0x0004) [0x0000000000002000] [0x00000100] ( CPF_Transient )
	unsigned long                                      m_HostMigrationFailed : 1;                        		// 0x0310 (0x0004) [0x0000000000002000] [0x00000200] ( CPF_Transient )
	unsigned long                                      m_HostMigrationHostAddressResolved : 1;           		// 0x0310 (0x0004) [0x0000000000002000] [0x00000400] ( CPF_Transient )
	unsigned long                                      m_HostMigrationEndedFromBlaze : 1;                		// 0x0310 (0x0004) [0x0000000000002000] [0x00000800] ( CPF_Transient )
	unsigned long                                      m_LocalPlayerWasKicked : 1;                       		// 0x0310 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      m_LeaveGamePending : 1;                           		// 0x0310 (0x0004) [0x0000000000000000] [0x00002000] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void SetKickedOutOfGame ( unsigned long wasKicked );
	bool RecalculateSkillRating ( struct FName SessionName, struct TArray<struct FUniqueNetId>* Players );
	struct TArray<struct FOnlineArbitrationRegistrant> GetArbitratedPlayers ( struct FName SessionName );
	void ClearArbitrationRegistrationCompleteDelegate ( struct FScriptDelegate ArbitrationRegistrationCompleteDelegate );
	void AddArbitrationRegistrationCompleteDelegate ( struct FScriptDelegate ArbitrationRegistrationCompleteDelegate );
	bool RegisterForArbitration ( struct FName SessionName );
	void ClearStartOnlineGameCompleteDelegate ( struct FScriptDelegate StartOnlineGameCompleteDelegate );
	void AddStartOnlineGameCompleteDelegate ( struct FScriptDelegate StartOnlineGameCompleteDelegate );
	void ClearUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate );
	void AddUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate );
	void ClearRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate );
	void AddRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate );
	bool QueryNonAdvertisedData ( int StartAt, int NumberToQuery );
	bool FreeSearchResults ( class UOnlineGameSearch* Search );
	bool BindPlatformSpecificSessionToSearch ( unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings, unsigned char* PlatformSpecificInfo );
	bool ReadPlatformSpecificSessionInfoBySessionName ( struct FName SessionName, unsigned char* PlatformSpecificInfo );
	bool ReadPlatformSpecificSessionInfo ( struct FOnlineGameSearchResult* DesiredGame, unsigned char* PlatformSpecificInfo );
	void ClearCancelFindOnlineGamesCompleteDelegate ( struct FScriptDelegate CancelFindOnlineGamesCompleteDelegate );
	void AddCancelFindOnlineGamesCompleteDelegate ( struct FScriptDelegate CancelFindOnlineGamesCompleteDelegate );
	void ClearEndOnlineGameCompleteDelegate ( struct FScriptDelegate EndOnlineGameCompleteDelegate );
	void AddEndOnlineGameCompleteDelegate ( struct FScriptDelegate EndOnlineGameCompleteDelegate );
	void ClearDestroyOnlineGameCompleteDelegate ( struct FScriptDelegate DestroyOnlineGameCompleteDelegate );
	void AddDestroyOnlineGameCompleteDelegate ( struct FScriptDelegate DestroyOnlineGameCompleteDelegate );
	void ClearUpdateOnlineGameCompleteDelegate ( struct FScriptDelegate UpdateOnlineGameCompleteDelegate );
	void AddUpdateOnlineGameCompleteDelegate ( struct FScriptDelegate UpdateOnlineGameCompleteDelegate );
	void ClearJoinOnlineGameCompleteDelegate ( struct FScriptDelegate JoinOnlineGameCompleteDelegate );
	void AddJoinOnlineGameCompleteDelegate ( struct FScriptDelegate JoinOnlineGameCompleteDelegate );
	void ClearGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate );
	bool eventCanShowErrorMessage ( );
	void NotifyGameInviteAcceptedDelegates ( struct FOnlineGameSearchResult* InviteResult );
	void AddGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate );
	void ClearQuickMatchCompleteDelegate ( struct FScriptDelegate QuickMatchCompleteDelegate );
	void AddQuickMatchCompleteDelegate ( struct FScriptDelegate QuickMatchCompleteDelegate );
	void ClearCreateOnlineGameCompleteDelegate ( struct FScriptDelegate CreateOnlineGameCompleteDelegate );
	void AddCreateOnlineGameCompleteDelegate ( struct FScriptDelegate CreateOnlineGameCompleteDelegate );
	void ClearFindOnlineGamesCompleteDelegate ( struct FScriptDelegate FindOnlineGamesCompleteDelegate );
	void AddFindOnlineGamesCompleteDelegate ( struct FScriptDelegate FindOnlineGamesCompleteDelegate );
	bool CancelFindOnlineGames ( );
	class UOnlineGameSearch* GetGameSearch ( );
	class UOnlineGameSettings* GetGameSettings ( struct FName SessionName );
	bool OnConnectionError ( );
	void eventOnInviteAccepted ( class USFXOnlineEvent* oEvent );
	void ShowPopup ( int bodyStr, unsigned long bShowOkBtn, unsigned long bModal, unsigned long bPauseGameplay );
	void eventGM_OnDisconnect ( class USFXOnlineEvent* disconnectEvent );
	void SetPlatformPresence ( unsigned long presencePrivate );
	bool PerformCallRestrictedFunction ( );
	void SetCallRestrictedFunctionMode ( unsigned long bEnable );
	class USFXOnlineGameSettings* eventCreateDefaultQuickMatchSettings ( );
	bool CanStartMPMatch ( class UOnlineGameSettings* NewGameSettings );
	bool QuickMatch ( class UOnlineGameSettings* quickMatchSettings );
	void LeaveGame ( );
	bool IsPlaying ( );
	void Tick ( class USFXOnlineEvent* Event );
	void OnMPGameStatusChange ( class USFXOnlineEvent* Event );
	void OnTick ( class USFXOnlineEvent* Event );
	bool KickPlayer ( struct FUniqueNetId PlayerID );
	int GetPlayerCount ( );
	void HideHostMigrationMsgBox ( );
	void ShowHostMigrationMsgBox ( unsigned long bIsInLobby );
	void FailHostMigration ( struct FString Reason );
	void CancelHostMigration ( );
	void CompleteHostMigration ( unsigned long bLocalPlayerIsHost, unsigned long bIsInLobby );
	bool IsHostMigrationInProgress ( );
	bool IsReadyForConnections ( );
	bool ForceCleanUp ( );
	bool OnHostAddressResolved ( );
	bool GetResolvedConnectString ( struct FName SessionName, struct FString* ConnectInfo );
	bool AcceptGameInvite ( unsigned char LocalUserNum, struct FName SessionName );
	bool UpdateOnlineGame ( struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData );
	bool DestroyOnlineGame ( struct FName SessionName );
	bool UnregisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID );
	bool RegisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasInvited );
	bool EndOnlineGame ( struct FName SessionName );
	bool StartOnlineGame ( struct FName SessionName );
	bool JoinOnlineGame ( unsigned char PlayerNum, struct FName SessionName, struct FOnlineGameSearchResult* DesiredGame );
	bool FindOnlineGames ( unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings );
	bool CreateOnlineGame ( unsigned char HostingPlayerNum, struct FName SessionName, class UOnlineGameSettings* NewGameSettings );
	void GetMultiplayer_MissingDLCs ( unsigned long bInvitee, struct TArray<struct FMPDLCInfo>* missingDLCs );
	bool IsInvalidHost ( );
	void eventSetMPDLCInfo ( struct TArray<struct FMPDLCInfo>* allAvailableDLCs );
	struct FString ValidateDLCMasterList ( );
	bool eventIsTargetVersionRetrieved ( );
	bool IsOnLatestMultiplayerVersion ( );
	void UpdateGameProtocolVersion ( );
	void eventSetServerMatchMakingRulesVersion ( int serverRulesVersion );
	void eventSetMultiplayerTargetVersion ( int protocolVersion );
	class USFXOnlineGameSettings* eventGetSFXGameSettings ( );
	bool WasKickedOutOfGame ( );
	void SetHostViabilityEnabled ( unsigned long Enabled );
	bool IsLocalPlayer ( struct FUniqueNetId PlayerID );
	void HostMigrationMsgBoxCallback ( unsigned long bAPressed, int Context );
	bool CanMigrate ( );
	void CancelJoinOnlineGame ( );
	bool IsPlayerInGame ( struct FUniqueNetId PlayerID );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
	void AllowMatchmaking ( unsigned long bAllow, unsigned long bUpdateServer );
	void OnGameInviteAccepted ( struct FOnlineGameSearchResult* InviteResult );
	void OnArbitrationRegistrationComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	void OnEndOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	void OnStartOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	void OnUnregisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful );
	void OnRegisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful );
	void OnJoinOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	void OnDestroyOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	void OnCancelFindOnlineGamesComplete ( unsigned long bWasSuccessful );
	void OnFindOnlineGamesComplete ( unsigned long bWasSuccessful );
	void OnUpdateOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	void OnCreateOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	void OnQuickMatchComplete ( unsigned char Result );
};

// Class SFXOnlineFoundation.SFXOnlineComponentBlazeGameXenon
// 0x0014 (0x0328 - 0x0314)
class USFXOnlineComponentBlazeGameXenon : public USFXOnlineComponentBlazeGame
{
public:
	struct FPointer                                    VfTable_Blaze__PlatformManagerXb360Listener;      		// 0x0314 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	float                                              m_CallRestrictedFunctionPeriod;                   		// 0x031C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              m_NextAllowedRestrictedFunctionCallTime;          		// 0x0320 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_CallRestrictedFunctionMode : 1;                 		// 0x0324 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void SetPlatformPresence ( unsigned long presencePrivate );
	bool PerformCallRestrictedFunction ( );
	void SetCallRestrictedFunctionMode ( unsigned long bEnable );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
};

// Class SFXOnlineFoundation.SFXOnlineComponentBlazeHub
// 0x0049 (0x00DD - 0x0094)
class USFXOnlineComponentBlazeHub : public USFXOnlineComponentBlaze
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponentAPI;                  		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FString                                     BlazeServiceName;                                 		// 0x009C (0x0010) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     BlazeClientName;                                  		// 0x00AC (0x0010) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	struct FPointer                                    CurrentBlazeHub;                                  		// 0x00BC (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    BlazeNetworkAdapter;                              		// 0x00C4 (0x0008) [0x0000000000001000]              ( CPF_Native )
	int                                                DirtySockTimeOutMs;                               		// 0x00CC (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	int                                                DirtySockSessionTimeOutMs;                        		// 0x00D0 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	int                                                DirtySockConnectionTimeOutMs;                     		// 0x00D4 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	unsigned long                                      m_bLock : 1;                                      		// 0x00D8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      ForceDisableSecureMode : 1;                       		// 0x00D8 (0x0004) [0x0000000000004002] [0x00000002] ( CPF_Const | CPF_Config )
	unsigned char                                      BlazeEnv;                                         		// 0x00DC (0x0001) [0x0000000000004002]              ( CPF_Const | CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnTick ( class USFXOnlineEvent* oEvent );
	bool Idle ( );
	void ResetLocale ( );
	int GetCurrentTime ( );
	struct FName GetAPIName ( );
	bool ConnectDirtySock ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
};

// Class SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard
// 0x0174 (0x0208 - 0x0094)
class USFXOnlineComponentBlazeLeaderboard : public USFXOnlineComponentBlaze
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponentLeaderboard;          		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_Blaze__BlazeStateEventHandler;            		// 0x009C (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FRankChangeNotificationRawData              RankChangeData_N7;                                		// 0x00A4 (0x002C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FRankChangeNotificationRawData              RankChangeData_ChallengePoints;                   		// 0x00D0 (0x002C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct TArray<struct FLeaderboardDefinition>       mLeaderboardDefinitions;                          		// 0x00FC (0x0010) [0x0000000000001000]              ( CPF_Native )
	struct TArray<struct FPatchLeaderboardDefinitionExtra> mLeaderboardDefExtra;                             		// 0x010C (0x0010) [0x0000000000001000]              ( CPF_Native )
	struct TArray<struct FLeaderboardId>               mLeaderboardIDs;                                  		// 0x011C (0x0010) [0x0000000000001000]              ( CPF_Native )
	struct TArray<struct FBlazeRequest>                mBlazeDataRequests;                               		// 0x012C (0x0010) [0x0000000000001000]              ( CPF_Native )
	struct TArray<struct FLeaderboardNameFormula>      mLeaderboardNames;                                		// 0x013C (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct TArray<struct FScriptDelegate>              RankNotificationCallbacks;                        		// 0x014C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FRankBypassNotification>      RankBypassNotifications;                          		// 0x015C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     nN7Global_LeaderboardName;                        		// 0x016C (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     ChallengePointsGlobal_LeaderboardName;            		// 0x017C (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnResultsRetrieved__Delegate;                   		// 0x018C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadLbListCompleted__Delegate;                		// 0x019C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetRankNotificationsCompleted__Delegate;      		// 0x01AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPointer                                    mLeaderboardAPI;                                  		// 0x01BC (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    mCurrentLeaderboard;                              		// 0x01C4 (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    mGlobalLeaderboardView;                           		// 0x01CC (0x0008) [0x0000000000001000]              ( CPF_Native )
	int                                                srRankColumnHeader;                               		// 0x01D4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                srUserColumnHeader;                               		// 0x01D8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                srReplacementGlobalMapName;                       		// 0x01DC (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                srFriendsDuplicateSuffix;                         		// 0x01E0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                srFriendBeatMe;                                   		// 0x01E4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                srFriendBeatByMe;                                 		// 0x01E8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                srFriendBeatMe_ChallengePoints;                   		// 0x01EC (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                srFriendBeatByMe_ChallengePoints;                 		// 0x01F0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                mLbInfoRetrievedCount;                            		// 0x01F4 (0x0004) [0x0000000000000000]              
	int                                                mGlobalLbEntityCount;                             		// 0x01F8 (0x0004) [0x0000000000000000]              
	int                                                nN7Global_LeaderboardDefinitionIndex;             		// 0x01FC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                ChallengePointsGlobal_LeaderboardDefinitionIndex; 		// 0x0200 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bCacheFriendRankHistory : 1;                      		// 0x0204 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void eventTriggerEmptyCallback ( unsigned char nErrorCode );
	class USFXOnlineJobGetLeaderboardList* eventCreateJobGetLeaderboardList ( );
	class USFXOnlineJobGetLeaderboardData* eventCreateJobGetStatsData ( struct FLeaderboardStatScope oScope, int nRankRange, struct FScriptDelegate funcResultsRetrieved, struct FPointer pExternalData );
	class USFXOnlineJobGetLeaderboardData* eventCreateJobGetFriendLeaderboardData ( int nLBID, struct FScriptDelegate funcResultsRetrieved, struct FPointer pExternalData );
	class USFXOnlineJobGetLeaderboardData* eventCreateJobGetLeaderboardCenteredData ( int nLBID, struct FUniqueNetId nPlayerId, int nRankRange, struct FScriptDelegate funcResultsRetrieved, struct FPointer pExternalData );
	class USFXOnlineJobGetLeaderboardData* eventCreateJobGetLeaderboardData ( int nLBID, int nRankStart, int nRankRange, struct FScriptDelegate funcResultsRetrieved, struct FPointer pExternalData );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
	int GetLeaderboard ( int pLbId, int nRecordsStartRank, int nRecordsRange, unsigned long bCenteredData, unsigned long bFriendData, struct FUniqueNetId pPlayerId, struct FPointer pExternalData );
	void RefreshLeaderboardTitles ( );
	int ShowGamerCardForRecord ( unsigned char LocalUserNum, struct FLeaderboardRecord* Record );
	void ReadLeaderboardList ( struct FScriptDelegate funcReadLbListCompleted, struct TArray<int>* jobIds );
	int GetFriendLeaderboardData ( int pLbId, struct FScriptDelegate funcResultsRetrieved, struct FPointer pExternalData );
	int GetLeaderboardCenteredData ( int pLbId, struct FUniqueNetId nPlayerId, int nRankRange, struct FScriptDelegate funcResultsRetrieved, struct FPointer pExternalData );
	int GetLeaderboardData ( int pLbId, int nRankStart, int nRankRange, struct FScriptDelegate funcResultsRetrieved, struct FPointer pExternalData );
	bool HasNotificationsAvailable ( );
	struct TArray<struct FRankBypassNotification> GetCurrentRankNotificationsArray ( );
	void eventRemoveRankNotificationCallback ( struct FScriptDelegate Callback );
	void eventAddRankNotificationCallback ( struct FScriptDelegate Callback );
	void OnDisconnect ( class USFXOnlineEvent* OnlineEvent );
	void CancelLeaderboardRequests ( );
	void RequestReadLeaderboardList ( );
	bool GenerateHistoricalFriendData ( struct TArray<struct FLeaderboardRecord> aResults, int* nPreviousLocalUserRank, struct FString* friendsBlob );
	void ProcessHistoricalFriendData ( int nPreviousLocalUserRank, struct FString friendsBlob, int srIBeatMyFriend, int srIWasBeatByFriend, struct TArray<struct FLeaderboardRecord> aResults );
	void GenerateHistoricalFriendDataRecords ( );
	void RankNotification_ChallengePointLeaderboardCb ( struct TArray<struct FLeaderboardColumn> aColumInfo, struct TArray<struct FLeaderboardRecord> aResults, int iTotalRanks, struct FUniqueNetId uidEntity, unsigned char nErrorCode, struct FPointer pExternalData );
	void RankNotification_N7RatingLeaderboardCb ( struct TArray<struct FLeaderboardColumn> aColumInfo, struct TArray<struct FLeaderboardRecord> aResults, int iTotalRanks, struct FUniqueNetId uidEntity, unsigned char nErrorCode, struct FPointer pExternalData );
	void RequestFriendLeaderboardData ( struct FLeaderboardDefinition LeaderboardDef, struct FScriptDelegate funcResultsRetrieved, struct FPointer pExternalData );
	void GetRankNotifications ( );
	void RequestLeaderboardCenteredData ( struct FLeaderboardDefinition LeaderboardDef, struct FUniqueNetId nPlayerId, int nRankRange, struct FScriptDelegate funcResultsRetrieved, struct FPointer pExternalData );
	void RequestLeaderboardData ( struct FLeaderboardDefinition LeaderboardDef, int nRankStart, int nRankRange, struct FScriptDelegate funcResultsRetrieved, struct FPointer pExternalData );
	bool GetLeaderboardDefinitionTable ( struct TArray<struct FLeaderboardMapGroup>* aLBDefTableRows );
	bool GetLeaderboardDefinitions ( struct TArray<struct FLeaderboardDefinition>* aLBDefinitions );
	void OnGetRankNotificationsCompleted ( struct TArray<struct FRankBypassNotification> RankBypassNotificationArray );
	void OnReadLbListCompleted ( unsigned char errorCode );
	void OnResultsRetrieved ( struct TArray<struct FLeaderboardColumn> aColumnInfo, struct TArray<struct FLeaderboardRecord> aResults, int iTotalRanks, struct FUniqueNetId uidEntity, unsigned char nErrorCode, struct FPointer pExternalData );
};

// Class SFXOnlineFoundation.SFXOnlineComponentBlazeLogin
// 0x0135 (0x01C9 - 0x0094)
class USFXOnlineComponentBlazeLogin : public USFXOnlineComponentBlaze
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponentLogin;                		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_Blaze__BlazeStateEventHandler;            		// 0x009C (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_Blaze__LoginManager__LoginManagerListener;		// 0x00A4 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct TArray<struct FString>                      m_asEntitlements;                                 		// 0x00AC (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct TArray<struct FString>                      m_asGrantedEntitlements;                          		// 0x00BC (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct TArray<struct FAutoConnectAccount>          m_AutoConnectAccounts;                            		// 0x00CC (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     PendingConnectEmail;                              		// 0x00DC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PendingConnectPassword;                           		// 0x00EC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PendingConnectCountryCode;                        		// 0x00FC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PendingConnectLanguageCode;                       		// 0x010C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PendingConnectParentalEmail;                      		// 0x011C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<unsigned char>                       PendingConnectLoginInfo;                          		// 0x012C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<unsigned char>                       PendingConnectPersonaID;                          		// 0x013C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FSFXOfferDescriptor>          PendingBuyOffers;                                 		// 0x014C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnAuthTokenRetrieved__Delegate;                 		// 0x015C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadFriendsComplete__Delegate;                		// 0x016C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnImportFriendListToBlazeCompleted__Delegate;   		// 0x017C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPointer                                    ConnectionMgr;                                    		// 0x018C (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    LoginMgr;                                         		// 0x0194 (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    m_pAuthComponent;                                 		// 0x019C (0x0008) [0x0000000000001000]              ( CPF_Native )
	int                                                m_SuspendUserPingPeriodMicroSec;                  		// 0x01A4 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	int                                                m_SuspendUserPingIdleCalls;                       		// 0x01A8 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	int                                                m_MinTimeOut;                                     		// 0x01AC (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	int                                                PendingConnectBirthDay;                           		// 0x01B0 (0x0004) [0x0000000000000000]              
	int                                                PendingConnectBirthMonth;                         		// 0x01B4 (0x0004) [0x0000000000000000]              
	int                                                PendingConnectBirthYear;                          		// 0x01B8 (0x0004) [0x0000000000000000]              
	int                                                PendingConnectError;                              		// 0x01BC (0x0004) [0x0000000000000000]              
	int                                                PendingConnectBlazeError;                         		// 0x01C0 (0x0004) [0x0000000000000000]              
	unsigned long                                      PendingConnectSilent : 1;                         		// 0x01C4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      PendingConnectInProgress : 1;                     		// 0x01C4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      AutoLoginFromIni : 1;                             		// 0x01C4 (0x0004) [0x0000000000004002] [0x00000004] ( CPF_Const | CPF_Config )
	unsigned long                                      m_DebugDisableBlazeTimeOut : 1;                   		// 0x01C4 (0x0004) [0x0000000000004002] [0x00000008] ( CPF_Const | CPF_Config )
	unsigned long                                      PendingConnectNucleusRefused : 1;                 		// 0x01C4 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      PendingConnectCerberusRefused : 1;                		// 0x01C4 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      PendingConnectNucleusSuccessful : 1;              		// 0x01C4 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      PendingConnectProfileChanged : 1;                 		// 0x01C4 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      PendingConnectAutoLoginAllowed : 1;               		// 0x01C4 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      PendingConnectAccountCreation : 1;                		// 0x01C4 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      PendingConnectEAProducts : 1;                     		// 0x01C4 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      PendingConnectThirdParty : 1;                     		// 0x01C4 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      PendingConnectSubscribeBWNewsLetter : 1;          		// 0x01C4 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      PendingConnectCanSubmitNucleusWelcomeMessage : 1; 		// 0x01C4 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      WaitingForSubmitNucleusWelcomeMessage : 1;        		// 0x01C4 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned char                                      PendingConnectMode;                               		// 0x01C8 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void SetExternalDRMDataLoaded ( unsigned long bValue );
	void OnTick ( class USFXOnlineEvent* oEvent );
	void OnOriginAuthKeyAvailableCallback ( unsigned long Success, struct FString authKey );
	void OnPromptRedeemCodeResult ( int nResult );
	void SuspendUserPing ( unsigned long suspend );
	bool GetDefaultBiowareEmailAllowed ( );
	unsigned char GetConnectMode ( );
	void AddFriendsCompleteCb ( unsigned long bWasSuccessful );
	void PostImportFriendListToBlaze ( );
	bool ImportFriendListToBlaze ( struct FScriptDelegate funcImportFriendListToBlazeCompleted );
	void OnImportFriendListToBlazeCompleted ( unsigned char errorCode );
	void RequestImportFriendListToBlaze ( unsigned long callPostImportFriendListToBlaze );
	class USFXOnlineJobImportFriendListToBlaze* eventCreateJobImportFriendListToBlaze ( unsigned long callPostImportFriendListToBlaze );
	unsigned char CanShowPresenceInformation ( int nUserIndex );
	unsigned char CanViewPlayerProfiles ( int nUserIndex );
	unsigned char CanPurchaseContent ( int nUserIndex );
	unsigned char CanDownloadUserContent ( int nUserIndex );
	unsigned char CanCommunicate ( int nUserIndex );
	unsigned char CanPlayOnline ( int nUserIndex );
	void OnDownloadOffersUICompleted ( );
	void OnDLCInfoLoaded ( );
	void OpenCerberusUI ( );
	void EnterCDKey ( struct FString sKey );
	void Buy ( unsigned char nPurchaseSource );
	void CompleteBuildEntitlementListUponRedeption ( int nResult );
	void CompleteBuildEntitlementListUponLogin ( int nResult );
	bool BuildEntitlementList ( unsigned long bFirstCallUponLogin, int nPage );
	bool IsCerberusMember ( );
	void DisablePersona ( struct FString sPersonaNonGrata );
	void CreatePersona ( struct FString sPersonaName );
	void SelectPersona ( struct FString sPersonaName );
	void AcceptTOS ( unsigned long bAccepted );
	void Disconnect ( unsigned long bShowError );
	void On1stPartyServiceLoginResult ( unsigned long loggedIn );
	bool eventShow1stPartyServiceLogin ( );
	bool Show1stPartyServiceLoginImp ( );
	void CompleteLoginProcess ( );
	void StartCerberusLogin ( );
	void SubmitStore ( struct TArray<int> aiChosen );
	void SubmitCreateNucleusAccountEx ( struct FString sEmail, struct FString sPassword, unsigned long bEAProducts, unsigned long bThirdParty, unsigned long bBioWareProducts, struct FString i_sCountryCode, int BirthDay, int BirthMonth, int BirthYear, struct FString i_sLanguageCode, unsigned long bSubmit );
	void SubmitEmailPasswordMismatch ( struct FString email, struct FString Password, int eReturnCode );
	void SubmitMessageBox ( int eReturnCode );
	void SubmitRedeemCode ( unsigned long bContinue, struct FString i_sCode );
	void SubmitCerberusWelcomeMessage ( );
	void SubmitCerberusIntro ( int eReturnCode );
	void SubmitNucleusWelcomeMessageEx ( );
	void SubmitNucleusWelcomeMessage ( );
	void SubmitCreateNucleusAccount ( struct FString sEmail, struct FString sPassword, unsigned long bEAProducts, unsigned long bThirdParty, unsigned long bBioWareProducts, unsigned long bSubmit );
	void SubmitParentEmail ( unsigned long bContinue, struct FString ParentEmail );
	void SubmitNucleusLogin ( struct FString email, struct FString Password, unsigned char eReturnCode );
	void SubmitIntroPage ( unsigned long bContinue, unsigned long bSimulated );
	void Connect ( unsigned char connectMode );
	void AutoLogin ( struct FString sEmail, struct FString sPassword );
	void AutoLoginWithAccountIndex ( int configAccountIndex );
	bool CheckAutoLoginFromIni ( );
	void GoBackInUI ( );
	void Cancel ( );
	struct FUniqueNetId GetUserId ( );
	struct FString GetPersonaName ( );
	bool HasInternetConnection ( );
	bool IsConnectedTo1stPartyOnlineService ( );
	bool IsSignedIn ( );
	bool IsConnected ( );
	bool IsActiveUser ( struct FUniqueNetId userId );
	void SwitchActiveUserIndex ( int nNewIndex );
	int GetActiveUserIndex ( );
	unsigned char GetLoginStatus ( );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
	int GetAuthToken ( struct FScriptDelegate funcAuthTokenRetrieved );
	class USFXOnlineJobGetAuthToken* eventCreateJobGetAuthToken ( struct FScriptDelegate funcAuthTokenRetrieved );
	void eventClearReadFriendsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate );
	void eventAddReadFriendsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate );
	void OnReadFriendsComplete ( unsigned long bWasSuccessful );
	void OnAuthTokenRetrieved ( struct FString token );
};

// Class SFXOnlineFoundation.SFXOnlineComponentBlazeLoginPC
// 0x0003 (0x01CC - 0x01C9)
class USFXOnlineComponentBlazeLoginPC : public USFXOnlineComponentBlazeLogin
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnOriginGoesOffline ( );
	void OnOriginClosed ( );
	bool HasInternetConnection ( );
};

// Class SFXOnlineFoundation.SFXOnlineComponentBlazeLoginPS3
// 0x0003 (0x01CC - 0x01C9)
class USFXOnlineComponentBlazeLoginPS3 : public USFXOnlineComponentBlazeLogin
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool Show1stPartyServiceLoginImp ( );
	bool HasInternetConnection ( );
	bool GetDefaultBiowareEmailAllowed ( );
};

// Class SFXOnlineFoundation.SFXOnlineComponentBlazeLoginXenon
// 0x0013 (0x01DC - 0x01C9)
class USFXOnlineComponentBlazeLoginXenon : public USFXOnlineComponentBlazeLogin
{
public:
	struct FScriptDelegate                             __OnExternalUIChange__Delegate;                   		// 0x01CC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void XenonLoginResult ( unsigned long isOpening );
	bool Show1stPartyServiceLoginImp ( );
	void OnExternalUIChange ( unsigned long bIsOpening );
	bool HasInternetConnection ( );
};

// Class SFXOnlineFoundation.SFXOnlineComponentBlazeMessaging
// 0x002C (0x00C0 - 0x0094)
class USFXOnlineComponentBlazeMessaging : public USFXOnlineComponentBlaze
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponentMessaging;            		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_Blaze__BlazeStateEventHandler;            		// 0x009C (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct TArray<struct FBlazeMsgRequest>             mBlazeMsgRequests;                                		// 0x00A4 (0x0010) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    mMessagingAPI;                                    		// 0x00B4 (0x0008) [0x0000000000001000]              ( CPF_Native )
	int                                                mAchievementMsgStrRef;                            		// 0x00BC (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	class USFXOnlineJobPurgeMessages* eventCreatePurgeMessagesJob ( int InMapId );
	class USFXOnlineJobPurgeMessages* eventCreatePurgeAllMessagesJob ( );
	class USFXOnlineJobReceiveMessage* eventCreateReceiveAllMessagesJob ( );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
	void PurgeAllMessagesViaJob ( );
	void FetchAllMessagesViaJob ( );
	void PurgeAllMessages ( );
	void SendMessage ( struct TArray<struct FString> sendToPersonaNames, unsigned char msgType, struct TArray<struct FString> Params );
	void FetchAllMessages ( );
};

// Class SFXOnlineFoundation.SFXOnlineComponentBlazeNotification
// 0x0071 (0x0105 - 0x0094)
class USFXOnlineComponentBlazeNotification : public USFXOnlineComponentBlaze
{
public:
	struct FPointer                                    VfTable_FCallbackEventDevice;                     		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_IISFXOnlineComponentNotification;         		// 0x009C (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct TArray<struct FSFXOnlineMOTDInfo>           m_aMOTDInfo;                                      		// 0x00A4 (0x0010) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	struct FString                                     StoreCatalogId;                                   		// 0x00B4 (0x0010) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	struct TArray<struct FSFXOnlineEntitlementLookupInfo> m_aEntitlementInfo;                               		// 0x00C4 (0x0010) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	struct FString                                     m_sDimeConfig;                                    		// 0x00D4 (0x0010) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	struct FPointer                                    m_pBlazeUtil;                                     		// 0x00E4 (0x0008) [0x0000000000001000]              ( CPF_Native )
	int                                                m_PendingLiveBINIVersion;                         		// 0x00EC (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	int                                                m_LiveBINIVersion;                                		// 0x00F0 (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	int                                                CerberusOfferId;                                  		// 0x00F4 (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	int                                                PRCMessageTitle;                                  		// 0x00F8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                AllianceNewsItemMessageTitle;                     		// 0x00FC (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      m_LiveBINIUpdated : 1;                            		// 0x0100 (0x0004) [0x0000000000003000] [0x00000001] ( CPF_Native | CPF_Transient )
	unsigned long                                      m_FetchingLiveBINIData : 1;                       		// 0x0100 (0x0004) [0x0000000000003000] [0x00000002] ( CPF_Native | CPF_Transient )
	unsigned long                                      m_DisableLiveBINI : 1;                            		// 0x0100 (0x0004) [0x0000000000004000] [0x00000004] ( CPF_Config )
	unsigned long                                      bSkipLiveINIUpdateOnLogin : 1;                    		// 0x0100 (0x0004) [0x0000000000004000] [0x00000008] ( CPF_Config )
	unsigned char                                      m_CurrentDownloadStep;                            		// 0x0104 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void GetGalaxyAtWarRatingsCompleted ( struct TArray<int> updatedSecurityRatings, struct TArray<int> updatedWarAssets, int Level, int errorCode );
	struct FString eventGetStoreCatalogId ( );
	void eventRequestGalaxyAtWarLevel ( );
	void PostGetLeaderboardList ( );
	void ReadPlayerStorageCallback ( unsigned long bWasSuccessful );
	void FetchOfflineEntitlementStoreMappings ( );
	bool IsLiveINIOutOfDate ( );
	bool IsFetchingLiveBinaryINIData ( );
	void RequestBinaryLiveINIData ( unsigned long bMainMenu );
	int GetLiveBinaryINIVersion ( );
	void UpdateMOTDGUI ( );
	struct FSFXOnlineMOTDInfo GetMOTDInfo ( unsigned char Type );
	bool CheckMessageAgainstDR ( int i );
	void RequestLiveTlkTable ( unsigned long bMainMenu );
	int GetTargetOfferId ( unsigned char nSource );
	struct FString GetDimeInfo ( );
	struct TArray<struct FSFXOnlineEntitlementLookupInfo> GetEntitlementInfo ( );
	void LoadDimeCallback ( );
	void LoadDimeInfo ( );
	void RequestDimeInfo ( );
	void RequestEntitlementsInfo ( );
	void RequestServerInfo ( );
	void AdvanceToNextRequest ( );
	void RequestData ( );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
	void OnTick ( class USFXOnlineEvent* oEvent );
};

// Class SFXOnlineFoundation.SFXOnlineComponentBlazeStats
// 0x00B8 (0x014C - 0x0094)
class USFXOnlineComponentBlazeStats : public USFXOnlineComponentBlaze
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponentStats;                		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_Blaze__BlazeStateEventHandler;            		// 0x009C (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct TArray<struct FString>                      mStatsGroupNames;                                 		// 0x00A4 (0x0010) [0x0000000000001000]              ( CPF_Native )
	struct TArray<struct FBlazeStatsRequest>           mBlazeStatsRequests;                              		// 0x00B4 (0x0010) [0x0000000000001000]              ( CPF_Native )
	struct TArray<struct FScriptDelegate>              FlushOnlineStatsCompleteDelegates;                		// 0x00C4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnResultsRetrieved__Delegate;                   		// 0x00D4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadStatsGroupListCompleted__Delegate;        		// 0x00E4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetRankNotifications__Delegate;               		// 0x00F4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFlushOnlineStatsComplete__Delegate;           		// 0x0104 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadOnlineStatsComplete__Delegate;            		// 0x0114 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRegisterHostStatGuidComplete__Delegate;       		// 0x0124 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPointer                                    mStatsAPI;                                        		// 0x0134 (0x0008) [0x0000000000001000]              ( CPF_Native )
	class USFXOnlineJobGameReporting*                  mGameReportingJob;                                		// 0x013C (0x0008) [0x0000000000000000]              
	int                                                srRankColumnHeader;                               		// 0x0144 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                srUserColumnHeader;                               		// 0x0148 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void GameReportingCallback ( unsigned char eError, int nJob );
	class USFXOnlineJobGetStatsGroupList* eventCreateJobGetStatsGroupList ( );
	class USFXOnlineJobGameReporting* eventCreateJobGameReporting ( class UOnlineStatsWrite* StatsWrite );
	bool RegisterStatGuid ( struct FUniqueNetId PlayerID, struct FString* ClientStatGuid );
	struct FString GetClientStatGuid ( );
	void ClearRegisterHostStatGuidCompleteDelegateDelegate ( struct FScriptDelegate RegisterHostStatGuidCompleteDelegate );
	void AddRegisterHostStatGuidCompleteDelegate ( struct FScriptDelegate RegisterHostStatGuidCompleteDelegate );
	bool RegisterHostStatGuid ( struct FString* HostStatGuid );
	struct FString GetHostStatGuid ( );
	bool WriteOnlinePlayerScores ( struct FName SessionName, int LeaderboardId, struct TArray<struct FOnlinePlayerScore>* PlayerScores );
	void FreeStats ( class UOnlineStatsRead* StatsRead );
	void ClearReadOnlineStatsCompleteDelegate ( struct FScriptDelegate ReadOnlineStatsCompleteDelegate );
	void AddReadOnlineStatsCompleteDelegate ( struct FScriptDelegate ReadOnlineStatsCompleteDelegate );
	bool ReadOnlineStatsByRankAroundPlayer ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int NumRows );
	bool ReadOnlineStatsByRank ( class UOnlineStatsRead* StatsRead, int StartIndex, int NumToRead );
	bool ReadOnlineStatsForFriends ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead );
	bool ReadOnlineStats ( class UOnlineStatsRead* StatsRead, struct TArray<struct FUniqueNetId>* Players );
	void ClearFlushOnlineStatsCompleteDelegate ( struct FScriptDelegate FlushOnlineStatsCompleteDelegate );
	void AddFlushOnlineStatsCompleteDelegate ( struct FScriptDelegate FlushOnlineStatsCompleteDelegate );
	int ReadStatsGroupList ( struct FScriptDelegate funcReadStatsGroupListCompleted );
	void RequestReadStatsGroupList ( );
	int GetFriendsStatsData ( int nRankRange, struct FScriptDelegate funcResultsRetrieved, struct FPointer pExternalData, struct FLeaderboardStatScope* oScope );
	bool GetStatsGroupNames ( struct TArray<struct FString>* aStatsGroupNames );
	bool FlushOnlineStats ( struct FName SessionName );
	bool WriteOnlineStats ( struct FName SessionName, struct FUniqueNetId Player, class UOnlineStatsWrite* StatsWrite );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
	void OnRegisterHostStatGuidComplete ( unsigned long bWasSuccessful );
	void OnReadOnlineStatsComplete ( unsigned long bWasSuccessful );
	void OnFlushOnlineStatsComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	void OnGetRankNotifications ( unsigned char errorCode );
	void OnReadStatsGroupListCompleted ( unsigned char errorCode );
	void OnResultsRetrieved ( struct TArray<struct FLeaderboardColumn> aColumnInfo, struct TArray<struct FLeaderboardRecord> aResults, unsigned char nErrorCode, struct FPointer pExternalData );
};

// Class SFXOnlineFoundation.SFXOnlineComponentGalaxyAtWar
// 0x00C4 (0x0158 - 0x0094)
class USFXOnlineComponentGalaxyAtWar : public USFXOnlineComponentBlaze
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponentGalaxyAtWar;          		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FString                                     PersonaId;                                        		// 0x009C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     BaseUrl;                                          		// 0x00AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SessionKey;                                       		// 0x00BC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<int>                                 m_CachedSecurityRatings;                          		// 0x00CC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<int>                                 m_CachedWarAssets;                                		// 0x00DC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __AuthenticateCompleted__Delegate;                		// 0x00EC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetRatingsComplete__Delegate;                 		// 0x00FC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnIncreaseRatingsComplete__Delegate;            		// 0x010C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnSendMessageComplete__Delegate;                		// 0x011C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetMessagesComplete__Delegate;                		// 0x012C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnTouchMessagesComplete__Delegate;              		// 0x013C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                LevelChangeStrRef;                                		// 0x014C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                m_CachedLevel;                                    		// 0x0150 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_CachedRatingsValid : 1;                         		// 0x0154 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_CachedWarAssetsValid : 1;                       		// 0x0154 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void TestGetRatingsCallback ( struct TArray<int> updatedSecurityRatings, struct TArray<int> updatedWarAssets, int Level, int errorCode );
	void TestTouchMessagesCallback ( int Count, int errorCode );
	void TestGetMessagesCallback ( struct TArray<struct FMessageEntry> Messages, int errorCode );
	void TestSendMessageCallback ( int messageId, struct TArray<int> messageIds, int errorCode );
	void eventParseTouchMessagesResult ( class USFXOnlineHTTPRequest* request, int* numMsgs, int* errorCode );
	void eventParseGetMessagesResult ( class USFXOnlineHTTPRequest* request, struct TArray<struct FMessageEntry>* messageEntries, int* errorCode );
	void eventParseSendMessageResult ( class USFXOnlineHTTPRequest* request, int* messageId, struct TArray<int>* messageIds, int* errorCode );
	void eventParseHTTPRatingsAssetsLevel ( class USFXOnlineHTTPRequest* request, struct TArray<int>* updatedSecurityRatings, struct TArray<int>* updatedWarAssets, int* Level, int* errorCode );
	int eventParseAuthenticationResult ( class USFXOnlineHTTPRequest* request );
	void eventInvalidateSession ( );
	bool eventIsSessionValid ( );
	class USFXOnlineJobGaWHTTPTouchMessages* eventCreateJobGaWTouchMessages ( int msgType, struct FScriptDelegate funcOnRequestComplete );
	class USFXOnlineJobGaWHTTPGetMessages* eventCreateJobGaWGetMessages ( int msgType, struct FScriptDelegate funcOnRequestComplete );
	class USFXOnlineJobGaWHTTPSendMessage* eventCreateJobGaWSendMessage ( int msgType, struct FString sendMsgParam1, struct FString sendMsgParam2, struct FString sendMsgParam3, struct FScriptDelegate funcOnRequestComplete );
	class USFXOnlineJobGaWHTTPIncreaseRatings* eventCreateJobGaWIncreaseRatings ( int defaultRatingIncrease, struct TArray<struct FMapEntry> securityRatingIncrease, struct TArray<struct FMapEntry> warAssetIncrease, struct FScriptDelegate funcOnRequestComplete );
	class USFXOnlineJobGaWHTTPGetRatings* eventCreateJobGaWGetRatings ( unsigned long getWarAssets, struct FScriptDelegate funcOnRequestComplete );
	void eventSetBaseURL ( struct FString sURL );
	void Cleanup ( );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
	int GetFirstBlazeAttrId ( );
	void GetTouchMessagesHTTPRequest ( int msgType, class USFXOnlineHTTPRequest** pSFXOnlineHTTPRequest );
	void GetGetMessagesHTTPRequest ( int msgType, class USFXOnlineHTTPRequest** pSFXOnlineHTTPRequest );
	void GetSendMessageHTTPRequest ( int msgType, struct FString param1, struct FString param2, struct FString param3, class USFXOnlineHTTPRequest** pSFXOnlineHTTPRequest );
	void GetIncreaseRatingsHTTPRequest ( int defaultRatingIncrease, struct TArray<struct FMapEntry> securityRatingsIncrease, struct TArray<struct FMapEntry> warAssetsIncrease, class USFXOnlineHTTPRequest** pSFXOnlineHTTPRequest );
	void GetRatingsHTTPRequest ( unsigned long getAssets, class USFXOnlineHTTPRequest** pSFXOnlineHTTPRequest );
	void GetAuthenticationHTTPRequest ( struct FString token, int tokenType, class USFXOnlineHTTPRequest** pSFXOnlineHTTPRequest );
	void TouchMessages ( int msgType, struct FScriptDelegate funcOnRequestComplete );
	void GetMessages ( int msgType, struct FScriptDelegate funcOnRequestComplete );
	void SendMessage ( int msgType, struct FString sendMsgParam1, unsigned char ParamType, struct FString sendMsgParam3, struct FScriptDelegate OnSendMessageComplete );
	void IncreaseRatings ( int defaultRatingIncrease, struct TArray<struct FMapEntry> securityRatingIncrease, struct TArray<struct FMapEntry> warAssetIncrease, struct FScriptDelegate funcOnRequestComplete );
	void GetRatings ( unsigned long getWarAssets, unsigned long bCached, struct FScriptDelegate funcOnRequestComplete );
	void OnTouchMessagesComplete ( int Count, int errorCode );
	void OnGetMessagesComplete ( struct TArray<struct FMessageEntry> Messages, int errorCode );
	void OnSendMessageComplete ( int messageId, struct TArray<int> messageIds, int errorCode );
	void OnIncreaseRatingsComplete ( struct TArray<int> updatedSecurityRatings, struct TArray<int> updatedWarAssets, int Level, int errorCode );
	void OnGetRatingsComplete ( struct TArray<int> updatedSecurityRatings, struct TArray<int> updatedWarAssets, int Level, int errorCode );
	void AuthenticateCompleted ( int errorCode );
};

// Class SFXOnlineFoundation.SFXOnlineComponentJobQueue
// 0x0078 (0x010C - 0x0094)
class USFXOnlineComponentJobQueue : public USFXOnlineComponent
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponent;                     		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct TArray<class USFXOnlineJob*>                PendingJobs;                                      		// 0x009C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<class USFXOnlineJob*>                ProcessingJobs;                                   		// 0x00AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __JobPredicate__Delegate;                         		// 0x00BC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                JobThrottlesMS[ 0x7 ];                            		// 0x00CC (0x001C) [0x0000000000004000]              ( CPF_Config )
	int                                                ThrottleValuesMS[ 0x7 ];                          		// 0x00E8 (0x001C) [0x0000000000000000]              
	int                                                NextJobId;                                        		// 0x0104 (0x0004) [0x0000000000000000]              
	unsigned long                                      SkipJobProcessing : 1;                            		// 0x0108 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnTick ( class USFXOnlineEvent* OnlineEvent );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* OnlineSub );
	struct FName GetAPIName ( );
	bool eventCancelJob ( int JobId );
	int eventCancelJobs ( unsigned char JobType );
	bool eventCheckForJob ( unsigned char JobType, struct FScriptDelegate Predicate );
	bool eventCheckForPendingJob ( unsigned char JobType, struct FScriptDelegate Predicate );
	bool eventCheckForProcessingJob ( unsigned char JobType, struct FScriptDelegate Predicate );
	bool CheckForJobInArray ( unsigned char JobType, struct FScriptDelegate Predicate, struct TArray<class USFXOnlineJob*>* JobArray );
	bool JobPredicate ( class USFXOnlineJob** Job );
	int eventProcessJobs ( float TimeDelta, int JobsToProcess );
	class USFXOnlineJob* GetFirstPendingJob ( unsigned char JobType );
	class USFXOnlineJob* GetProcessingJob ( int JobId );
	class USFXOnlineJob* GetPendingJob ( int JobId );
	int eventAddJob ( class USFXOnlineJob* Job );
	void UpdateTime ( int TimeDeltaMS );
	void SetJobThrottle ( unsigned char Category, int valueMS );
};

// Class SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer
// 0x0458 (0x04EC - 0x0094)
class USFXOnlineComponentUnrealPlayer : public USFXOnlineComponent
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponent;                     		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FSFXProfileSettingsCache                    ProfileCache[ 0x4 ];                              		// 0x009C (0x0140) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FBioPerUserDelegateLists                    PerUserDelegates[ 0x4 ];                          		// 0x01DC (0x0080) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FLoginStatusDelegates                       PlayerLoginStatusDelegates[ 0x4 ];                		// 0x025C (0x0040) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FSFXCachedAchievements>       CachedAchievementList;                            		// 0x029C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FScriptDelegate>              LocalPlayerStorageReadDelegates;                  		// 0x02AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FScriptDelegate>              LocalPlayerStorageWriteDelegates;                 		// 0x02BC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FScriptDelegate>              RemotePlayerStorageReadDelegates;                 		// 0x02CC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FScriptDelegate>              ReadFriendsDelegates;                             		// 0x02DC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FScriptDelegate>              LoginCancelledDelegates;                          		// 0x02EC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FScriptDelegate>              LoginFailedDelegates;                             		// 0x02FC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FScriptDelegate>              LogoutCompletedDelegates;                         		// 0x030C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FScriptDelegate>              LoginChangeDelegates;                             		// 0x031C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ProfileDataDirectory;                             		// 0x032C (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     ProfileDataDirectoryInstalled;                    		// 0x033C (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     ProfileDataExtension;                             		// 0x034C (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     LoggedInPlayerName;                               		// 0x035C (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnProfileDataChanged__Delegate;                 		// 0x036C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginChange__Delegate;                        		// 0x037C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginCancelled__Delegate;                     		// 0x038C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnMutingChange__Delegate;                       		// 0x039C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFriendsChange__Delegate;                      		// 0x03AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginFailed__Delegate;                        		// 0x03BC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLogoutCompleted__Delegate;                    		// 0x03CC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginStatusChange__Delegate;                  		// 0x03DC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadProfileSettingsComplete__Delegate;        		// 0x03EC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnWriteProfileSettingsComplete__Delegate;       		// 0x03FC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadPlayerStorageComplete__Delegate;          		// 0x040C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadPlayerStorageForNetIdComplete__Delegate;  		// 0x041C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnWritePlayerStorageComplete__Delegate;         		// 0x042C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadFriendsComplete__Delegate;                		// 0x043C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnKeyboardInputComplete__Delegate;              		// 0x044C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnAddFriendByNameComplete__Delegate;            		// 0x045C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFriendInviteReceived__Delegate;               		// 0x046C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReceivedGameInvite__Delegate;                 		// 0x047C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnJoinFriendGameComplete__Delegate;             		// 0x048C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFriendMessageReceived__Delegate;              		// 0x049C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadAchievementsComplete__Delegate;           		// 0x04AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUnlockAchievementComplete__Delegate;          		// 0x04BC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UOnlinePlayerStorage*                        PlayerStorageCache[ 0x4 ];                        		// 0x04CC (0x0020) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void ClearOnlineProfileCaches ( );
	void eventTriggerProfileReadDelegate ( unsigned char UserNum, unsigned long bWasSuccesful );
	void LoadSettingsCallback ( unsigned char eError, int nJob, int UserNum, struct TArray<struct FSettingsPair>* SettingsPairs );
	void SaveSettingsCallback ( unsigned char eError, int nJob, int UserNum );
	class USFXOnlineJobLoadSettings* eventCreateJobLoadSettings ( int Arg );
	class USFXOnlineJobSaveSettings* eventCreateJobSaveSettings ( int Arg );
	void ClearAsyncState ( int UserNum );
	void ClearUnlockAchievementCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate );
	void AddUnlockAchievementCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate );
	void OnUnlockAchievementComplete ( unsigned long bWasSuccessful );
	bool UnlockAchievement ( unsigned char LocalUserNum, int AchievementId );
	unsigned char GetAchievements ( unsigned char LocalUserNum, int TitleId, int SetIndex, struct TArray<struct FAchievementDetails>* Achievements );
	void ClearReadAchievementsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate );
	void AddReadAchievementsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate );
	void OnReadAchievementsComplete ( int TitleId );
	bool ReadAchievements ( unsigned char LocalUserNum, int TitleId, unsigned long bShouldReadText, unsigned long bShouldReadImages );
	bool DeleteMessage ( unsigned char LocalUserNum, int MessageIndex );
	void ClearFriendMessageReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate );
	void AddFriendMessageReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate );
	void OnFriendMessageReceived ( unsigned char LocalUserNum, struct FUniqueNetId SendingPlayer, struct FString SendingNick, struct FString Message );
	void GetFriendMessages ( unsigned char LocalUserNum, struct TArray<struct FOnlineFriendMessage>* FriendMessages );
	void ClearJoinFriendGameCompleteDelegate ( struct FScriptDelegate JoinFriendGameCompleteDelegate );
	void AddJoinFriendGameCompleteDelegate ( struct FScriptDelegate JoinFriendGameCompleteDelegate );
	void OnJoinFriendGameComplete ( unsigned long bWasSuccessful );
	bool JoinFriendGame ( unsigned char LocalUserNum, struct FUniqueNetId Friend );
	void ClearReceivedGameInviteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate );
	void AddReceivedGameInviteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate );
	void OnReceivedGameInvite ( unsigned char LocalUserNum, struct FString InviterName );
	bool SendGameInviteToFriends ( unsigned char LocalUserNum, struct TArray<struct FUniqueNetId> Friends, struct FString Text );
	bool SendGameInviteToFriend ( unsigned char LocalUserNum, struct FUniqueNetId Friend, struct FString Text );
	bool SendMessageToFriend ( unsigned char LocalUserNum, struct FUniqueNetId Friend, struct FString Message );
	void ClearFriendInviteReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate );
	void AddFriendInviteReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate );
	void OnFriendInviteReceived ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer, struct FString RequestingNick, struct FString Message );
	bool RemoveFriend ( unsigned char LocalUserNum, struct FUniqueNetId FormerFriend );
	bool DenyFriendInvite ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer );
	bool AcceptFriendInvite ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer );
	void ClearAddFriendByNameCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate );
	void AddAddFriendByNameCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate );
	void OnAddFriendByNameComplete ( unsigned long bWasSuccessful );
	bool AddFriendByName ( unsigned char LocalUserNum, struct FString FriendName, struct FString Message );
	bool AddFriend ( unsigned char LocalUserNum, struct FUniqueNetId NewFriend, struct FString Message );
	struct FString GetKeyboardInputResults ( unsigned char* bWasCanceled );
	void ClearKeyboardInputDoneDelegate ( struct FScriptDelegate InputDelegate );
	void AddKeyboardInputDoneDelegate ( struct FScriptDelegate InputDelegate );
	void OnKeyboardInputComplete ( unsigned long bWasSuccessful );
	bool ShowKeyboardUI ( unsigned char LocalUserNum, struct FString TitleText, struct FString DescriptionText, unsigned long bIsPassword, unsigned long bShouldValidate, struct FString DefaultText, int MaxResultLength );
	void SetOnlineStatus ( unsigned char LocalUserNum, int StatusId, struct TArray<struct FLocalizedStringSetting>* LocalizedStringSettings, struct TArray<struct FSettingsProperty>* Properties );
	unsigned char GetFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt, struct TArray<struct FOnlineFriend>* Friends );
	void ClearReadFriendsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate );
	void AddReadFriendsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate );
	void OnReadFriendsComplete ( unsigned long bWasSuccessful );
	bool ReadFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt );
	void ClearWritePlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate );
	void AddWritePlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate );
	void OnWritePlayerStorageComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	bool WritePlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage );
	class UOnlinePlayerStorage* GetPlayerStorage ( unsigned char LocalUserNum );
	void ClearReadPlayerStorageForNetIdCompleteDelegate ( struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate );
	void AddReadPlayerStorageForNetIdCompleteDelegate ( struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate );
	void OnReadPlayerStorageForNetIdComplete ( struct FUniqueNetId NetId, unsigned long bWasSuccessful );
	bool ReadPlayerStorageForNetId ( struct FUniqueNetId NetId, class UOnlinePlayerStorage* PlayerStorage );
	void ClearReadPlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate );
	void AddReadPlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate );
	void OnReadPlayerStorageComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	bool ReadPlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage );
	void ClearWriteProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate );
	void AddWriteProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate );
	void OnWriteProfileSettingsComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	bool WriteProfileSettings ( unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings, unsigned long bIsTrilogyProfile );
	class UOnlineProfileSettings* GetProfileSettings ( unsigned char LocalUserNum );
	void ClearReadProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate );
	void AddReadProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate );
	void OnReadProfileSettingsComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	bool ReadProfileSettings ( unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings, unsigned long bIsTrilogyProfile );
	void ClearFriendsChangeDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendsDelegate );
	void AddFriendsChangeDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendsDelegate );
	void ClearMutingChangeDelegate ( struct FScriptDelegate MutingDelegate );
	void AddMutingChangeDelegate ( struct FScriptDelegate MutingDelegate );
	void ClearLoginCancelledDelegate ( struct FScriptDelegate CancelledDelegate );
	void AddLoginCancelledDelegate ( struct FScriptDelegate CancelledDelegate );
	void ClearLoginStatusChangeDelegate ( struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum );
	void AddLoginStatusChangeDelegate ( struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum );
	void OnLoginStatusChange ( unsigned char NewStatus, struct FUniqueNetId NewId );
	void ClearLoginChangeDelegate ( struct FScriptDelegate LoginDelegate );
	void AddLoginChangeDelegate ( struct FScriptDelegate LoginDelegate );
	bool ShowFriendsUI ( unsigned char LocalUserNum );
	bool IsMuted ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	bool AreAnyFriends ( unsigned char LocalUserNum, struct TArray<struct FFriendsQuery>* Query );
	bool IsFriend ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	unsigned char CanShowPresenceInformation ( unsigned char LocalUserNum );
	unsigned char CanViewPlayerProfiles ( unsigned char LocalUserNum );
	unsigned char CanPurchaseContent ( unsigned char LocalUserNum );
	unsigned char CanDownloadUserContent ( unsigned char LocalUserNum );
	unsigned char CanCommunicate ( unsigned char LocalUserNum );
	unsigned char CanPlayOnline ( unsigned char LocalUserNum );
	bool IsLocalLogin ( unsigned char LocalUserNum );
	bool IsGuestLogin ( unsigned char LocalUserNum );
	struct FString GetPlayerNickname ( unsigned char LocalUserNum );
	bool GetUniquePlayerId ( unsigned char LocalUserNum, struct FUniqueNetId* PlayerID );
	bool GetOfflinePlayerId ( unsigned char LocalUserNum, struct FUniqueNetId* PlayerID );
	unsigned char GetLoginStatus ( unsigned char LocalUserNum );
	void ClearLogoutCompletedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate );
	void AddLogoutCompletedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate );
	void OnLogoutCompleted ( unsigned long bWasSuccessful );
	bool Logout ( unsigned char LocalUserNum );
	void ClearLoginFailedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LoginDelegate );
	void AddLoginFailedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LoginDelegate );
	void OnLoginFailed ( unsigned char LocalUserNum, unsigned char errorCode );
	bool AutoLogin ( );
	bool Login ( unsigned char LocalUserNum, struct FString LoginName, struct FString Password, unsigned long bWantsLocalOnly );
	bool ShowLoginUI ( unsigned long bShowOnlineOnly );
	void ClearProfileCaches ( );
	void OnFriendsChange ( );
	void OnMutingChange ( );
	void OnLoginCancelled ( );
	void OnLoginChange ( unsigned char LocalUserNum );
	void OnProfileDataChanged ( );
	void CachePlayerNickname ( );
	struct FString CreateProfileName ( unsigned long bIsTrilogyProfile );
	bool DoesProfileExist ( unsigned long bIsTrilogyProfile );
	void OnTick ( class USFXOnlineEvent* oEvent );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
};

// Class SFXOnlineFoundation.SFXOnlineGameSearch
// 0x0000 (0x0164 - 0x0164)
class USFXOnlineGameSearch : public UOnlineGameSearch
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXOnlineFoundation.SFXOnlineGameSettings
// 0x00B1 (0x01B2 - 0x0101)
class USFXOnlineGameSettings : public UOnlineGameSettings
{
public:
	struct FUniqueNetId                                invitedUserId;                                    		// 0x0104 (0x0008) [0x0000000000000000]              
	struct TArray<struct FMPMapInfo>                   MasterMapList;                                    		// 0x010C (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct TArray<struct FString>                      AvailableMaps;                                    		// 0x011C (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct TArray<struct FMPPrivacyInfo>               PrivacyTypes;                                     		// 0x012C (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct TArray<struct FMPEnemyInfo>                 EnemyTypes;                                       		// 0x013C (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct TArray<struct FMPChallengeInfo>             ChallengeTypes;                                   		// 0x014C (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     AnyMapImage;                                      		// 0x015C (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     AnyEnemyImage;                                    		// 0x016C (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     AnyChallengeImage;                                		// 0x017C (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     mME3MapName;                                      		// 0x018C (0x0010) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	int                                                srAnyMap;                                         		// 0x019C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                srAnyEnemy;                                       		// 0x01A0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                srAnyChallenge;                                   		// 0x01A4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                EnemyType;                                        		// 0x01A8 (0x0004) [0x0000000000000000]              
	unsigned long                                      mMapIsRequired : 1;                               		// 0x01AC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mCreateNewMatch : 1;                              		// 0x01AC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mFromGalaxyMap : 1;                               		// 0x01AC (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned char                                      Difficulty;                                       		// 0x01B0 (0x0001) [0x0000000000000000]              
	unsigned char                                      mPrivacySetting;                                  		// 0x01B1 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	struct FString ToString ( );
	class USFXOnlineGameSettings* eventCopy ( );
	void EnsureMatchSettingsAreValid ( unsigned char eType, int* PrivacySetting, int* MapSetting, int* EnemySetting, int* ChallengeSetting );
	bool ValidateMapName ( struct FString MapName );
	struct FMPMapInfo eventGetMapByServerMapID ( struct FString serverMapID );
	struct FMPMapInfo GetMapByID ( int MapId );
	struct FMPMapInfo GetMapByPackageName ( struct FString PackageName );
	int eventGetMasterMapID ( struct FString PackageName );
	void eventSetPrivacy ( unsigned char privacy );
	unsigned char eventGetPrivacy ( );
};

// Class SFXOnlineFoundation.SFXOnlineJob
// 0x0023 (0x0083 - 0x0060)
class USFXOnlineJob : public UObject
{
public:
	struct TArray<struct FPointer>                     BlazeJobIds;                                      		// 0x0060 (0x0010) [0x0000000000001000]              ( CPF_Native )
	int                                                JobId;                                            		// 0x0070 (0x0004) [0x0000000000000000]              
	int                                                SchedulingsLeft;                                  		// 0x0074 (0x0004) [0x0000000000000000]              
	int                                                RescheduleCount;                                  		// 0x0078 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      JobIsCanceled : 1;                                		// 0x007C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsProcessing : 1;                                 		// 0x007C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      RunningError;                                     		// 0x0080 (0x0001) [0x0000000000000000]              
	unsigned char                                      JobCategory;                                      		// 0x0081 (0x0001) [0x0000000000004000]              ( CPF_Config )
	unsigned char                                      JobType;                                          		// 0x0082 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int GetSchedulingsLeft ( );
	void eventSetId ( int NewJobId );
	bool eventIsCanceled ( );
	void eventCancel ( unsigned char WithError );
	void DeleteBlazeJobs ( );
	void CancelBlazeJobs ( );
	bool eventInProgress ( );
	unsigned char GetJobCategory ( );
	unsigned char eventGetJobType ( );
	int eventGetId ( );
	bool eventShouldReschedule ( );
	void Tick ( );
	bool IsBlocking ( );
	bool DoExecute ( );
	void OnRelease ( );
	void eventEndProcessing ( unsigned char WithError );
	void Execute ( );
};

// Class SFXOnlineFoundation.SFXOnlineJobGameReporting
// 0x0029 (0x00AC - 0x0083)
class USFXOnlineJobGameReporting : public USFXOnlineJob
{
public:
	struct FString                                     ReportName;                                       		// 0x0084 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FScriptDelegate                             __GameReportingCallback__Delegate;                		// 0x0094 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPointer                                    mGameReport;                                      		// 0x00A4 (0x0008) [0x0000000000001000]              ( CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	class USFXOnlineJobGameReporting* eventCreateJob ( struct FScriptDelegate InCallback, class UOnlineStatsWrite* StatsWrite );
	void OnReleaseImpl ( );
	void OnRelease ( );
	void BuildReport ( class UOnlineStatsWrite* StatsWrite );
	bool DoExecute ( );
	void GameReportingCallback ( unsigned char errorCode, int InJobId );
};

// Class SFXOnlineFoundation.SFXOnlineJobGaWHTTPRequest
// 0x0019 (0x009C - 0x0083)
class USFXOnlineJobGaWHTTPRequest : public USFXOnlineJob
{
public:
	class USFXOnlineHTTPRequest*                       mAuthHTTPRequest;                                 		// 0x0084 (0x0008) [0x0000000000000000]              
	class USFXOnlineHTTPRequest*                       mSecondHTTPRequest;                               		// 0x008C (0x0008) [0x0000000000000000]              
	int                                                mBlazeErrorCode;                                  		// 0x0094 (0x0004) [0x0000000000000000]              
	unsigned long                                      bKickedOffAuthRequest : 1;                        		// 0x0098 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bKickedOffSecondRequest : 1;                      		// 0x0098 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventAuthorizationFailed ( );
	bool eventShouldReschedule ( );
	void OnRelease ( );
	void Tick ( );
	void eventAuthenticateHTTP ( struct FString token, int tokenType );
	void AuthenticateHTTPResult ( );
	void JobFailedHandler ( unsigned char errorCode );
	void TickInternal ( );
	void GetAuthToken ( );
	bool DoExecute ( );
	void eventQueueSecondHTTPRequest ( );
	void HandleSecondHTTPResult ( );
};

// Class SFXOnlineFoundation.SFXOnlineJobGaWHTTPGetMessages
// 0x0014 (0x00B0 - 0x009C)
class USFXOnlineJobGaWHTTPGetMessages : public USFXOnlineJobGaWHTTPRequest
{
public:
	struct FScriptDelegate                             __OnGetMessagesComplete__Delegate;                		// 0x009C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                mMsgType;                                         		// 0x00AC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRelease ( );
	void eventQueueSecondHTTPRequest ( );
	class USFXOnlineJobGaWHTTPGetMessages* eventCreateGaWGetMessagesJob ( int msgType, struct FScriptDelegate RequestCompleteDelegate );
	void JobFailedHandler ( unsigned char errorCode );
	void HandleSecondHTTPResult ( );
	void OnGetMessagesComplete ( struct TArray<struct FMessageEntry> Messages, int errorCode );
};

// Class SFXOnlineFoundation.SFXOnlineJobGaWHTTPGetRatings
// 0x0018 (0x00B4 - 0x009C)
class USFXOnlineJobGaWHTTPGetRatings : public USFXOnlineJobGaWHTTPRequest
{
public:
	struct FScriptDelegate                             __OnGetRatingsComplete__Delegate;                 		// 0x009C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MaxSecurityRating;                                		// 0x00AC (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      getWarAssets : 1;                                 		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRelease ( );
	void eventQueueSecondHTTPRequest ( );
	class USFXOnlineJobGaWHTTPGetRatings* eventCreateGaWGetRatingsJob ( unsigned long includeWarAssets, struct FScriptDelegate RequestCompleteDelegate );
	void JobFailedHandler ( unsigned char errorCode );
	void HandleSecondHTTPResult ( );
	void OnGetRatingsComplete ( struct TArray<int> updatedSecurityRatings, struct TArray<int> updatedWarAssets, int Level, int errorCode );
};

// Class SFXOnlineFoundation.SFXOnlineJobGaWHTTPIncreaseRatings
// 0x0034 (0x00D0 - 0x009C)
class USFXOnlineJobGaWHTTPIncreaseRatings : public USFXOnlineJobGaWHTTPRequest
{
public:
	struct TArray<struct FMapEntry>                    securityRatingIncrease;                           		// 0x009C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FMapEntry>                    warAssetIncrease;                                 		// 0x00AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnIncreaseRatingsComplete__Delegate;            		// 0x00BC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                defaultRatingIncrease;                            		// 0x00CC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRelease ( );
	void eventQueueSecondHTTPRequest ( );
	class USFXOnlineJobGaWHTTPIncreaseRatings* eventCreateGaWIncreaseRatingsJob ( int inDefaultRatingIncrease, struct TArray<struct FMapEntry> inSecurityRatingIncrease, struct TArray<struct FMapEntry> inWarAssetIncrease, struct FScriptDelegate RequestCompleteDelegate );
	void JobFailedHandler ( unsigned char errorCode );
	void HandleSecondHTTPResult ( );
	void OnIncreaseRatingsComplete ( struct TArray<int> updatedSecurityRatings, struct TArray<int> updatedWarAssets, int Level, int errorCode );
};

// Class SFXOnlineFoundation.SFXOnlineJobGaWHTTPSendMessage
// 0x0044 (0x00E0 - 0x009C)
class USFXOnlineJobGaWHTTPSendMessage : public USFXOnlineJobGaWHTTPRequest
{
public:
	struct FString                                     mSendMsgParam1;                                   		// 0x009C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     mSendMsgParam2;                                   		// 0x00AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     mSendMsgParam3;                                   		// 0x00BC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnSendMessageComplete__Delegate;                		// 0x00CC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                mMsgType;                                         		// 0x00DC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRelease ( );
	void eventQueueSecondHTTPRequest ( );
	class USFXOnlineJobGaWHTTPSendMessage* eventCreateGaWSendMessageJob ( int msgType, struct FString sendMsgParam1, struct FString sendMsgParam2, struct FString sendMsgParam3, struct FScriptDelegate RequestCompleteDelegate );
	void JobFailedHandler ( unsigned char errorCode );
	void HandleSecondHTTPResult ( );
	void OnSendMessageComplete ( int messageId, struct TArray<int> messageIds, int errorCode );
};

// Class SFXOnlineFoundation.SFXOnlineJobGaWHTTPTouchMessages
// 0x0014 (0x00B0 - 0x009C)
class USFXOnlineJobGaWHTTPTouchMessages : public USFXOnlineJobGaWHTTPRequest
{
public:
	struct FScriptDelegate                             __OnTouchMessagesComplete__Delegate;              		// 0x009C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                mMsgType;                                         		// 0x00AC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRelease ( );
	void eventQueueSecondHTTPRequest ( );
	class USFXOnlineJobGaWHTTPTouchMessages* eventCreateGaWTouchMessagesJob ( int msgType, struct FScriptDelegate RequestCompleteDelegate );
	void JobFailedHandler ( unsigned char errorCode );
	void HandleSecondHTTPResult ( );
	void OnTouchMessagesComplete ( int Count, int errorCode );
};

// Class SFXOnlineFoundation.SFXOnlineJobGetAuthToken
// 0x0011 (0x0094 - 0x0083)
class USFXOnlineJobGetAuthToken : public USFXOnlineJob
{
public:
	struct FScriptDelegate                             __OnAuthTokenRetrieved__Delegate;                 		// 0x0084 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	class USFXOnlineJobGetAuthToken* eventCreateGetAuthTokenJob ( struct FScriptDelegate AuthTokenRetrievedDelegate );
	void OnAuthTokenRetrieved ( struct FString token );
	bool DoExecute ( );
};

// Class SFXOnlineFoundation.SFXOnlineJobGetLeaderboardData
// 0x0051 (0x00D4 - 0x0083)
class USFXOnlineJobGetLeaderboardData : public USFXOnlineJob
{
public:
	struct FUniqueNetId                                mPlayerId;                                        		// 0x0084 (0x0008) [0x0000000000000000]              
	struct FLeaderboardStatScope                       Scope;                                            		// 0x008C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnJobCompletion__Delegate;                      		// 0x009C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnResultsRetrieved__Delegate;                   		// 0x00AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPointer                                    ExternalData;                                     		// 0x00BC (0x0008) [0x0000000000001000]              ( CPF_Native )
	int                                                nLeaderboardId;                                   		// 0x00C4 (0x0004) [0x0000000000000000]              
	int                                                nRankStart;                                       		// 0x00C8 (0x0004) [0x0000000000000000]              
	int                                                nRankRange;                                       		// 0x00CC (0x0004) [0x0000000000000000]              
	unsigned long                                      bCenteredLeaderboard : 1;                         		// 0x00D0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFriendLeaderboard : 1;                           		// 0x00D0 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	class USFXOnlineJobGetLeaderboardData* eventCreateFriendStatsDataJob ( struct FLeaderboardStatScope oScope, int RankRange, struct FScriptDelegate ResultsRetrievedDelegate, struct FPointer pExternalData );
	class USFXOnlineJobGetLeaderboardData* eventCreateFriendLeaderboardJob ( int LeaderboardId, struct FScriptDelegate ResultsRetrievedDelegate, struct FPointer pExternalData );
	class USFXOnlineJobGetLeaderboardData* eventCreateCenteredLeaderboardJob ( int LeaderboardId, struct FUniqueNetId PlayerID, int RankRange, struct FScriptDelegate ResultsRetrievedDelegate, struct FPointer pExternalData );
	class USFXOnlineJobGetLeaderboardData* eventCreateLeaderboardJob ( int LeaderboardId, int RankStart, int RankRange, struct FScriptDelegate ResultsRetrievedDelegate, struct FPointer pExternalData );
	void JobCompleted ( struct TArray<struct FLeaderboardColumn> aColumInfo, struct TArray<struct FLeaderboardRecord> aResults, int iTotalRanks, struct FUniqueNetId uidEntity, unsigned char nErrorCode, struct FPointer pExternalData );
	bool DoExecute ( );
	void OnResultsRetrieved ( struct TArray<struct FLeaderboardColumn> aColumInfo, struct TArray<struct FLeaderboardRecord> aResults, int iTotalRanks, struct FUniqueNetId uidEntity, unsigned char nErrorCode, struct FPointer pExternalData );
	void OnJobCompletion ( struct TArray<struct FLeaderboardColumn> aColumInfo, struct TArray<struct FLeaderboardRecord> aResults, int iTotalRanks, struct FUniqueNetId uidEntity, unsigned char nErrorCode, struct FPointer pExternalData );
};

// Class SFXOnlineFoundation.SFXOnlineJobGetLeaderboardList
// 0x0011 (0x0094 - 0x0083)
class USFXOnlineJobGetLeaderboardList : public USFXOnlineJob
{
public:
	struct FScriptDelegate                             __OnJobCompletion__Delegate;                      		// 0x0084 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventShouldReschedule ( );
	class USFXOnlineJobGetLeaderboardList* eventCreateGetLeaderboardListJob ( );
	void JobCompleted ( unsigned char errorCode );
	bool DoExecute ( );
	void OnJobCompletion ( unsigned char errorCode );
};

// Class SFXOnlineFoundation.SFXOnlineJobGetStatsGroupList
// 0x0011 (0x0094 - 0x0083)
class USFXOnlineJobGetStatsGroupList : public USFXOnlineJob
{
public:
	struct FScriptDelegate                             __OnJobCompletion__Delegate;                      		// 0x0084 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	class USFXOnlineJobGetStatsGroupList* eventCreateGetStatsGroupListJob ( );
	void JobCompleted ( unsigned char errorCode );
	bool DoExecute ( );
	void OnJobCompletion ( unsigned char errorCode );
};

// Class SFXOnlineFoundation.SFXOnlineJobHTTPRequest
// 0x0019 (0x009C - 0x0083)
class USFXOnlineJobHTTPRequest : public USFXOnlineJob
{
public:
	struct FScriptDelegate                             __OnJobComplete__Delegate;                        		// 0x0084 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USFXOnlineHTTPRequest*                       mRequest;                                         		// 0x0094 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Tick ( );
	bool DoExecute ( );
	class USFXOnlineJobHTTPRequest* eventCreateHTTPRequestJob ( );
	void OnJobComplete ( class USFXOnlineHTTPRequest* request );
};

// Class SFXOnlineFoundation.SFXOnlineJobImageRequest
// 0x0035 (0x00B8 - 0x0083)
class USFXOnlineJobImageRequest : public USFXOnlineJob
{
public:
	struct FSFXOnlineImageRequest                      mRequest;                                         		// 0x0084 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnJobComplete__Delegate;                        		// 0x00A8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void MoveToBackOfQueue ( );
	void Tick ( );
	bool DoExecute ( );
	class USFXOnlineJobImageRequest* eventCreateImageRequestJob ( );
	void OnJobComplete ( struct FSFXOnlineImageRequest request );
};

// Class SFXOnlineFoundation.SFXOnlineJobImportFriendListToBlaze
// 0x0015 (0x0098 - 0x0083)
class USFXOnlineJobImportFriendListToBlaze : public USFXOnlineJob
{
public:
	struct FScriptDelegate                             __OnJobCompletion__Delegate;                      		// 0x0084 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bCallPostImportFriendListToBlaze : 1;             		// 0x0094 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventShouldReschedule ( );
	class USFXOnlineJobImportFriendListToBlaze* eventCreateImportFriendListToBlazeJob ( unsigned long callPostImportFriendListToBlaze );
	void JobCompleted ( unsigned char errorCode );
	bool DoExecute ( );
	void OnJobCompletion ( unsigned char errorCode );
};

// Class SFXOnlineFoundation.SFXOnlineJobLoadSettings
// 0x0026 (0x00A9 - 0x0083)
class USFXOnlineJobLoadSettings : public USFXOnlineJob
{
public:
	struct TArray<struct FSettingsPair>                Settings;                                         		// 0x0084 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __LoadSettingsCallback__Delegate;                 		// 0x0094 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CallbackArg;                                      		// 0x00A4 (0x0004) [0x0000000000000000]              
	unsigned char                                      RunningErrorCode;                                 		// 0x00A8 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventShouldReschedule ( );
	class USFXOnlineJobLoadSettings* eventCreateJob ( struct FScriptDelegate InCallback, int InCallbackArg );
	bool DoExecute ( );
	void LoadSettingsCallback ( unsigned char errorCode, int InJobId, struct TArray<struct FSettingsPair> InSettings, int InCallbackArg );
};

// Class SFXOnlineFoundation.SFXOnlineJobPurgeMessages
// 0x0009 (0x008C - 0x0083)
class USFXOnlineJobPurgeMessages : public USFXOnlineJob
{
public:
	int                                                MapId;                                            		// 0x0084 (0x0004) [0x0000000000000000]              
	unsigned long                                      PurgeAllMessages : 1;                             		// 0x0088 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	class USFXOnlineJobPurgeMessages* eventCreatePurgeMessagesJob ( int InMapId );
	class USFXOnlineJobPurgeMessages* eventCreatePurgeAllMessagesJob ( );
	bool DoExecute ( );
};

// Class SFXOnlineFoundation.SFXOnlineJobReceiveMessage
// 0x0005 (0x0088 - 0x0083)
class USFXOnlineJobReceiveMessage : public USFXOnlineJob
{
public:
	int                                                nMapId;                                           		// 0x0084 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	class USFXOnlineJobReceiveMessage* eventCreateReceiveAllMessagesJob ( );
	bool DoExecute ( );
};

// Class SFXOnlineFoundation.SFXOnlineJobSaveSettings
// 0x0041 (0x00C4 - 0x0083)
class USFXOnlineJobSaveSettings : public USFXOnlineJob
{
public:
	struct TArray<struct FSettingsPair>                Settings;                                         		// 0x0084 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FScriptDelegate>              JobCompleteDelegates;                             		// 0x0094 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             __SaveSettingsCallback__Delegate;                 		// 0x00A4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_Save_RPC_TimeOut;                               		// 0x00B4 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	int                                                CallbackArg;                                      		// 0x00B8 (0x0004) [0x0000000000000000]              
	int                                                OutstandingSubJobs;                               		// 0x00BC (0x0004) [0x0000000000000000]              
	unsigned long                                      CallbackHasRun : 1;                               		// 0x00C0 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	class USFXOnlineJobSaveSettings* eventCreateJob ( struct FScriptDelegate InCallback, int InCallbackArg );
	bool DoExecute ( );
	void eventCallCompletionDelegates ( unsigned long Success );
	void eventAddCompletionDelegate ( struct FScriptDelegate JobCompleteDelegate );
	void eventAddSetting ( struct FString* InKey, struct FString* InValue );
	void SaveSettingsCallback ( unsigned char errorCode, int InJobId, int InCallbackArg );
};

// Class SFXOnlineFoundation.SFXOnlineJobSendMessage
// 0x0022 (0x00A5 - 0x0083)
class USFXOnlineJobSendMessage : public USFXOnlineJob
{
public:
	struct TArray<struct FString>                      sendToPersonaNames;                               		// 0x0084 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FString>                      sParams;                                          		// 0x0094 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      MessageType;                                      		// 0x00A4 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool GetFriendsList ( struct TArray<struct FString>* friendsPersonaNames );
	class USFXOnlineJobSendMessage* eventCreateSendMessageToAllFriendsJob ( unsigned char InMessageType, struct TArray<struct FString> Params );
	class USFXOnlineJobSendMessage* eventCreateSendMessageJob ( struct TArray<struct FString> InSendToPersonaNames, unsigned char InMessageType, struct TArray<struct FString> Params );
	bool DoExecute ( );
};

// Class SFXOnlineFoundation.SFXOnlineComponentTelemetrySystem
// 0x00A4 (0x0138 - 0x0094)
class USFXOnlineComponentTelemetrySystem : public USFXOnlineComponent
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponentTelemetry;            		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FString                                     InitTestServerAddressOverride;                    		// 0x009C (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     InitProdServerAddressOverride;                    		// 0x00AC (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     InitDomain;                                       		// 0x00BC (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     InitTitleMode;                                    		// 0x00CC (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     InitDisabledCountryList;                          		// 0x00DC (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FScriptDelegate                             __CanCollect__Delegate;                           		// 0x00EC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnAuthenticate__Delegate;                       		// 0x00FC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDisconnect__Delegate;                         		// 0x010C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                bConnectedToChannel[ 0x2 ];                       		// 0x011C (0x0008) [0x0000000000000000]              
	int                                                InitServerPortOverride;                           		// 0x0124 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                InitTitleProjectId;                               		// 0x0128 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                InitSendPercent;                                  		// 0x012C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                InitSendTimeout;                                  		// 0x0130 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      bForceAnonymousChannel : 1;                       		// 0x0134 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	unsigned long                                      bEnableSpam : 1;                                  		// 0x0134 (0x0004) [0x0000000000004000] [0x00000002] ( CPF_Config )
	unsigned long                                      bInitWithEngineConfig : 1;                        		// 0x0134 (0x0004) [0x0000000000004000] [0x00000004] ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnTick ( class USFXOnlineEvent* oEvent );
	void Flush ( unsigned char Channel );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
	void RegisterConnectionDelegates ( struct FScriptDelegate CollectDelegate, struct FScriptDelegate AuthenticateDelegate, struct FScriptDelegate DisconnectDelegate );
	void OnDisconnect ( int Error, struct FString SessionId );
	void OnAuthenticate ( );
	bool CanCollect ( );
};

// Class SFXOnlineFoundation.SFXOnlineNetConnection
// 0x002C (0x6098 - 0x606C)
class USFXOnlineNetConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData00[ 0x2C ];                            		// 0x606C (0x002C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXOnlineFoundation.SFXOnlineNetDriver
// 0x0010 (0x01EC - 0x01DC)
class USFXOnlineNetDriver : public UNetDriver
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x01DC (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXOnlineFoundation.SFXOnlineComponentCommerce
// 0x0140 (0x01D4 - 0x0094)
class USFXOnlineComponentCommerce : public USFXOnlineComponent
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponentCommerce;             		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_Blaze__BlazeStateEventHandler;            		// 0x009C (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_DIME__DimeStrategy;                       		// 0x00A4 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct TArray<struct FSFXOnlineEntitlementLookupInfo> aServerEntitlementGrantIds;                       		// 0x00AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<int>                                 aServerEntitlementRevokeIds;                      		// 0x00BC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FSFXOnlineEntitlementLookupInfo> aNamEntitlements;                                 		// 0x00CC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FBWEntitlementInfo>           aCachedEntitlements;                              		// 0x00DC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FBWEntitlementInfo>           aCachedDIMEEntitlements;                          		// 0x00EC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FBWOfferInfo>                 aCachedOffers;                                    		// 0x00FC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FBWConsumableInfo>            aCachedConsumables;                               		// 0x010C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sWalletBalance;                                   		// 0x011C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FBWOfferId>                   aFetchDetailsIDList;                              		// 0x012C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FSFXOnlineEntitlementLookupInfo> aDLCEntitlementInfo;                              		// 0x013C (0x0010) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRefreshDigitalRightsResult__Delegate;         		// 0x014C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnConsumeResult__Delegate;                      		// 0x015C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGrantEntitlementResult__Delegate;             		// 0x016C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnProcessAutoGrantsComplete__Delegate;          		// 0x017C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnPromptRedeemCodeResult__Delegate;             		// 0x018C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnPurchaseOfferIdResult__Delegate;              		// 0x019C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFetchOfferDetailsComplete__Delegate;          		// 0x01AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDimeConfigLoaded__Delegate;                   		// 0x01BC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CurrentDimeState;                                 		// 0x01CC (0x0004) [0x0000000000000000]              
	unsigned long                                      bAwaitingDimeForRefresh : 1;                      		// 0x01D0 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void METR_UpdateDLCEntitlements ( );
	struct FString DecryptOfflineEntitlementInfo ( );
	bool StoreOfflineEntitlementInfo ( struct FString a_sEncryptedContent );
	void DumpTestData ( );
	void NucleusEntitlementsRefreshOffline ( );
	void LoadDimeConfig ( struct FString sConfig, struct FScriptDelegate dCallback );
	void OnDimeConfigLoaded ( );
	struct FString GetWalletBalance ( );
	void FetchOfferDetails ( struct TArray<struct FBWOfferId> aOffers, struct FScriptDelegate dCallback );
	void OnFetchOfferDetailsComplete ( );
	void eventGetOffersList ( struct TArray<struct FBWOfferId> aOfferFilter, struct TArray<struct FBWOfferInfo>* aOffers );
	void Display1stPartyStore ( );
	void PurchaseOfferId ( struct FBWOfferId Id, struct FScriptDelegate dCallback );
	void OnPurchaseOfferIdResult ( int nResult );
	void OnCodeRedeemed ( unsigned char nResult );
	void SubmitRedeemCode ( unsigned long bContinue, struct FString strCode );
	void PromptRedeemCode ( struct FScriptDelegate dCallback );
	void OnPromptRedeemCodeResult ( int nResult );
	void CompleteProcessAutoGrant ( );
	void ProcessNextAutoGrant ( struct FBWEntitlementId Id, int nResult );
	void ProcessAutoGrants ( struct FScriptDelegate dCallback );
	void OnProcessAutoGrantsComplete ( );
	bool GrantEntitlementId ( struct FBWEntitlementId Id, struct FScriptDelegate dCallback, unsigned long bUseNucleusCheck );
	void OnGrantEntitlementResult ( struct FBWEntitlementId Id, int nResult );
	bool ConsumeId ( struct FBWConsumableId Id, int nCopies, struct FScriptDelegate dCallback );
	void OnConsumeResult ( struct FBWConsumableId Id, int nCopies, int nResult );
	bool eventGetConsumableInfo ( struct FBWConsumableId Id, struct FBWConsumableInfo* oConsumable );
	bool eventGetConsumablesList ( struct TArray<struct FBWConsumableInfo>* aConsumables );
	bool eventGetEntitlementInfo ( struct FBWEntitlementId Id, struct FBWEntitlementInfo* oEntitlement );
	bool eventGetEntitlementsList ( struct TArray<struct FBWEntitlementInfo>* aEntitlements );
	void RefreshDigitalRights ( struct FScriptDelegate dCallback );
	void OnRefreshDigitalRightsResult ( int nResult );
	void OnTick ( class USFXOnlineEvent* oEvent );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
};

// Class SFXOnlineFoundation.SFXOnlineStatsWrite
// 0x0000 (0x00C4 - 0x00C4)
class USFXOnlineStatsWrite : public UOnlineStatsWrite
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif