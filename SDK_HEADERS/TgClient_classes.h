/*
#############################################################################################
# Smite (v3.24.3804.2) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: TgClient_classes.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Constants
# ========================================================================================= #
*/

#define CONST_DCCLAN_MAX_MEMBERS                                 1000
#define CONST_PROCESS_MESSAGE_SECS                               2.0f
#define CONST_NUM_UI_DEVICES                                     25
#define CONST_MAX_UI_EFFECTS                                     16
#define CONST_DCTEAM_MAX_MEMBERS                                 5
#define CONST_DCTEAM_MAX_TOWERS                                  9
#define CONST_VENDOR_MENU_LOOT_TABLE_ID                          474
#define CONST_MAX_DAMAGE_CLIPS                                   5
#define CONST_TAG_HIDE_DURATION                                  5
#define CONST_QUEUED_DAMAGE_INFO_DELAY                           0.1
#define CONST_TG_UPDATE_QUEUE_STATS_SECS                         10.0f
#define CONST_TG_CHECK_MATCH_LIST_SECS                           60.0f
#define CONST_TG_SHOP_VENDOR_GODS                                475
#define CONST_TG_SHOP_VENDOR_SKINS                               476
#define CONST_TG_SHOP_VENDOR_WEB_STORE                           477
#define CONST_TG_SHOP_VENDOR_NAME_CHANGE                         488
#define CONST_TG_SHOP_VENDOR_BUNDLES                             489
#define CONST_TG_SHOP_VENDOR_BANNED_GODS                         495
#define CONST_TG_SHOP_VENDOR_MISC                                496
#define CONST_TG_SHOP_VENDOR_GOD_RENTAL                          497
#define CONST_TG_SHOP_VENDOR_ITEM_SHOP                           474
#define CONST_TG_SHOP_VENDOR_GOD_ROTATION                        500
#define CONST_TG_SHOP_VENDOR_REFER_A_FRIEND                      501
#define CONST_TG_SHOP_VENDOR_VOICE_PACK                          508
#define CONST_TG_SHOP_VENDOR_ARAM_NO_NO_ITEMS                    509
#define CONST_TG_SHOP_VENDOR_SIEGE_NO_NO_ITEMS                   533
#define CONST_TG_SHOP_VENDOR_JOUST_NO_NO_ITEMS                   733
#define CONST_TG_SHOP_VENDOR_HALLOWEEN_ONLY_ITEMS                986
#define CONST_TG_SHOP_VENDOR_AVATARS                             526
#define CONST_TG_SHOP_VENDOR_WARD_SKINS                          532
#define CONST_TG_SHOP_VENDOR_SOCIAL_EMOTES                       560
#define CONST_TG_SHOP_VENDOR_LOADING_FRAMES                      581
#define CONST_TG_SHOP_VENDOR_ANNOUNCER_PACK                      599
#define CONST_TG_SHOP_VENDOR_GOD_RENTAL_EXT                      554
#define CONST_TG_SHOP_VENDOR_SKIN_RENTAL_EXT                     732
#define CONST_TG_SHOP_VENDOR_TREASURE_BOXES                      602
#define CONST_TG_SHOP_VENDOR_PEDESTAL                            668
#define CONST_TG_SHOP_VENDOR_CLAN_QUEST_MEMBER_REWARDS           766
#define CONST_TG_SHOP_VENDOR_CLAN_QUEST_REWARDS                  770
#define CONST_TG_SHOP_VENDOR_GLOBAL_EMOTES                       859
#define CONST_TG_SHOP_VENDOR_EVENTS                              938
#define CONST_TG_SHOP_VENDOR_BONUS_CHESTS                        976
#define CONST_TG_SHOP_VENDOR_MUSIC_THEMES                        1052
#define CONST_TG_SHOP_VENDOR_CLAN_ICON_EXCLUSION                 1114
#define CONST_TG_SHOP_VENDOR_ITEM_SHOP_NEW                       1418
#define CONST_TG_SHOP_VENDOR_TRAINING_QUEST                      1153
#define CONST_TG_SHOP_VENDOR_COUPONS                             1258
#define CONST_TG_SHOP_VENDOR_PVE_NO_NO_ITEMS                     1294
#define CONST_TG_SHOP_VENDOR_ARENA_NO_NO_ITEMS                   1296
#define CONST_TG_SHOP_VENDOR_HUD_THEMES                          1367
#define CONST_TG_SHOP_VENDOR_RECALL_SKIN                         1368
#define CONST_PROCESS_ITEM_ALERT_SECS                            4.5f
#define CONST_PROCESS_SKILL_ALERT_SECS                           4.5f
#define CONST_TG_LOGIN_INFO_ACCOUNT_NAME                         0
#define CONST_TG_LOGIN_INFO_ACCOUNT_PASS                         1
#define CONST_GOAL_JOUST_GOD_1ST_WIN                             47
#define CONST_GOAL_ARENA_GOD_1ST_WIN                             48
#define CONST_MAX_BROWSER_TEXTURES                               12
#define CONST_CURRENT_SEASON                                     3
#define CONST_GOD_TARGETER_FLAG_DISABLE_MOVEMENT                 0x00000040
#define CONST_WAIT_TIME_FOR_SHOP_VENDORS                         300.f
#define CONST_GOD_TARGETER_FLAG_PREVENT_TARGETTING_DEAD_GODS     0x00000020
#define CONST_GOD_TARGETER_FLAG_HIDE_OWN_GOD                     0x00000010
#define CONST_GOD_TARGETER_FLAG_HIDE_SELF                        0x00000008
#define CONST_GOD_TARGETER_FLAG_MAKE_CLOSEABLE                   0x00000004
#define CONST_GOD_TARGETER_FLAG_SHOW_BOTH_TEAMS                  0x00000002
#define CONST_GOD_TARGETER_FLAG_SHOW_OWN_TEAM                    0x00000001
#define CONST_MA_AI_NONE                                         0
#define CONST_MA_AI_PROMOTION                                    1
#define CONST_MA_AI_GOD                                          2
#define CONST_MA_AI_BOOST                                        3
#define CONST_MA_AI_GEMS                                         4
#define CONST_MA_AI_BUNDLE                                       5
#define CONST_MA_AI_XP                                           6
#define CONST_MA_AI_SKIN                                         7
#define CONST_MA_AI_LEVEL                                        8
#define CONST_MA_AI_FWOTD                                        9
#define CONST_MA_AI_GOD_RANK_MASTER                              13
#define CONST_MA_AI_GOD_RANK_MASTER01                            14
#define CONST_MA_AI_GOD_RANK_MASTER02                            15
#define CONST_MA_AI_GOD_RANK_MASTER03                            16
#define CONST_MA_AI_GOD_RANK_MASTER04                            17
#define CONST_MA_AI_GOD_RANK_MASTER05                            18
#define CONST_MA_AI_GOD_RANK_MASTER06                            19
#define CONST_MA_AI_GOD_RANK_MASTER07                            20
#define CONST_MA_AI_GOD_RANK_MASTER08                            21
#define CONST_MA_AI_GOD_RANK_LEGENDARY                           22
#define CONST_MA_AI_PLAYER_ICON                                  109
#define CONST_MA_AI_TREASURE_CHEST                               110
#define CONST_MA_AI_VOICE_PACK                                   111
#define CONST_MA_AI_SOCIAL_EMOTE                                 112
#define CONST_MA_AI_LOADING_FRAME                                113
#define CONST_MA_AI_ANNOUNCER_PACK                               115
#define CONST_MA_AI_FAVOR                                        116
#define CONST_MA_AI_PEDESTAL                                     117
#define CONST_MA_AI_FANTASY_POINTS                               170
#define CONST_MA_AI_CLAN_POINTS                                  171
#define CONST_MA_AI_CLAN_QUEST                                   172
#define CONST_MA_AI_MUSIC_THEME                                  173
#define CONST_MA_AI_PROMOTIONAL_CODE                             174
#define CONST_MA_AI_COUPON                                       227
#define CONST_SERVER_HEADERS                                     5
#define CONST_NUM_SERVERS                                        17
#define CONST_UPDATE_SERVER_SECS                                 10
#define CONST_MAX_PLAYERS_IN_GAME                                10
#define CONST_NUM_PLAYERS_SLOTS_TEAM                             6
#define CONST_NUM_TEAMS                                          2
#define CONST_NUM_INVITE_ROWS                                    9
#define CONST_MATCH_COUNT                                        6
#define CONST_STORE_HEAD_COUNT                                   4
#define CONST_STORE_LIST_COUNT                                   12
#define CONST_STORE_GRID_COUNT                                   16
#define CONST_STORE_ITEMS_PER_LINE_MAX                           4
#define CONST_NUM_ITEM_TIERS                                     3
#define CONST_NUM_ITEMS_IN_BUILD                                 6
#define CONST_NUM_ACTIVES_IN_BUILD                               2
#define CONST_NUM_CONSUMABLES_IN_BUILD                           2
#define CONST_NUM_ABILITIES                                      5
#define CONST_NUM_UPGRADEABLE_ABILITIES                          4
#define CONST_NUM_BUILDER_TABS                                   2
#define CONST_MAX_ABILITIES_PER_LEVEL                            2
#define CONST_NUM_ABILITY_ROWS                                   20
#define CONST_MAX_ABILITY_LEVEL                                  5
#define CONST_BITS_PER_ABILITY_LEVEL                             5
#define CONST_MAX_CACHE                                          3
#define CONST_MAX_ITEMS                                          32
#define CONST_NUM_STAR_RATINGS                                   5
#define CONST_ITEM_COUNT                                         56
#define CONST_SKIN_COUNT                                         6
#define CONST_GOD_CARD_COUNT                                     16
#define CONST_QUEUE_TYPE_ALL                                     0
#define CONST_INVALID_GOD_ID                                     -1
#define CONST_CHAT_COUNT                                         8
#define CONST_CHAT_TAB_COUNT                                     2
#define CONST_HUD_ITEM_COUNT                                     6
#define CONST_ICON_COUNT                                         5
#define CONST_LOADOUT_CHOICE_COUNT                               48
#define CONST_NUM_PLAYER_INVITE_ROWS                             5
#define CONST_NUM_BUDDY_ROWS                                     7
#define CONST_MAX_INVITES_AT_ONCE                                10
#define CONST_MATCH_INVITE_UPDATE                                0.9f
#define CONST_NUM_NOTIFICATIONS                                  5
#define CONST_QUICK_ADD_COUNT                                    7
#define CONST_BUTTON_COUNT                                       4
#define CONST_PLAYER_COUNT                                       5
#define CONST_PLAYERS_COUNT                                      4
#define CONST_MAX_PARTY_COUNT                                    5
#define CONST_TRAINING_QUEUE                                     -1
#define CONST_DIFFICULTY_GROUPS                                  116
#define CONST_CUSTOM_QUEUE                                       -2
#define CONST_UI_GROUPS                                          1033
#define CONST_GAME_MODE_GROUPS                                   1092
#define CONST_TAB_PRACTICE                                       10495
#define CONST_TAB_COOP                                           10748
#define CONST_TAB_NORMAL                                         10496
#define CONST_TAB_LEAGUE                                         10574
#define CONST_TAB_CUSTOM                                         10497
#define CONST_STORE_GOD_PACK_ITEM_ID                             -1
#define CONST_NAME_CHANGE_ITEM                                   8186
#define CONST_CONFIG_SET_BUILDER                                 51
#define CONST_FILTER_ALL                                         -1
#define CONST_FILTER_ACTIVE                                      0x00100000
#define CONST_FILTER_STARTER                                     0x00200000
#define CONST_FILTER_POPULAR                                     0x00000002
#define CONST_FILTER_PHY_ALL                                     0x0000007C
#define CONST_FILTER_MAG_ALL                                     0x00000C88
#define CONST_FILTER_MAG_MP5                                     0x00000200
#define CONST_FILTER_DEF_ALL                                     0x0000F000
#define CONST_FILTER_DEF_HP5                                     0x00008000
#define CONST_FILTER_PHY_CRIT                                    0x00000010
#define CONST_FILTER_MAG_MANA                                    0x00000100
#define CONST_FILTER_DEF_AURA                                    0x00010000
#define CONST_FILTER_MOVEMENT                                    0x00020000
#define CONST_FILTER_COOLDOWN                                    0x00040000
#define CONST_FILTER_UTIL_ALL                                    0x00070300
#define CONST_FILTER_MAG_POWER                                   0x00000080
#define CONST_FILTER_PHY_POWER                                   0x00000004
#define CONST_FILTER_CONSUMABLE                                  0x00080000
#define CONST_FILTER_DEF_HEALTH                                  0x00004000
#define CONST_FILTER_RECOMMENDED                                 0x00000001
#define CONST_FILTER_DEF_MAGICAL                                 0x00002000
#define CONST_FILTER_DEF_PHYSICAL                                0x00001000
#define CONST_FILTER_MAG_LIFESTEAL                               0x00000400
#define CONST_FILTER_PHY_LIFESTEAL                               0x00000020
#define CONST_FILTER_PHY_PENETRATION                             0x00000040
#define CONST_FILTER_MAG_PENETRATION                             0x00000800
#define CONST_FILTER_PHY_ATTACK_SPEED                            0x00000008
#define CONST_BASE_RELIC_ITEMID                                  12333
#define CONST_STORE_BTN_COUNT                                    2
#define CONST_STORE_TAB_COUNT                                    3
#define CONST_STORE_REC_ITEM_MAX                                 4
#define CONST_STORE_REC_HEAD_COUNT                               4
#define CONST_STORE_REC_LIST_COUNT                               12
#define CONST_STORE_REC_GRID_COUNT                               16
#define CONST_STORE_STD_LIST_COUNT                               12
#define CONST_STORE_STD_GRID_COUNT                               24
#define CONST_STORE_STAT_COUNT                                   16
#define CONST_STORE_FILTER_COUNT                                 4
#define CONST_STORE_SUBFILTER_COUNT                              19
#define CONST_STORE_TIER_ROW_COUNT                               4
#define CONST_STORE_TIER1_COUNT                                  4
#define CONST_STORE_TIER2_COUNT                                  4
#define CONST_STORE_TIER3_COUNT                                  4
#define CONST_STORE_TIER4_COUNT                                  4
#define CONST_VGS_LIST_COUNT                                     15
#define CONST_DCLOBBY_MAX_CLASSES                                100
#define CONST_DCLOBBY_MAX_TRADE_DATA                             5
#define CONST_DCTEAM_MAX_BANS                                    4
#define CONST_LOBBY_PLAYERS_PER_TEAM                             5
#define CONST_TG_MAX_TOTAL_PING                                  10
#define CONST_PT_DESC                                            1
#define CONST_PT_INPUT                                           2
#define CONST_PT_GODSWAP_INPUT                                   3
#define CONST_PT_DROP_DOWN                                       4
#define CONST_PT_BLOCKING                                        5
#define CONST_PT_DROP_DOWN_INPUT                                 6
#define CONST_FA_POPUP_SUBMIT                                    -1
#define CONST_FA_POPUP_CANCEL                                    -2
#define CONST_FA_POPUP_BUY_GEMS                                  -3
#define CONST_FA_POPUP_ERROR_OK                                  -6
#define CONST_FA_POPUP_NAME_CHANGE                               -7
#define CONST_FA_POPUP_NAME_CHANGE_CONT                          -8
#define CONST_FA_POPUP_FRIEND_MESSAGE_SUBMIT                     -9
#define CONST_FA_POPUP_ML_CLAN_QUIT                              -10
#define CONST_FA_POPUP_ML_CLAN_TRANSFER                          -11
#define CONST_FA_POPUP_ML_CLAN_TAG                               -12
#define CONST_FA_POPUP_TRADE_ACCEPT                              -13
#define CONST_FA_POPUP_TRADE_DECLINE                             -14
#define CONST_FA_POPUP_PREFERRED_SITE                            -15
#define CONST_FA_POPUP_FRIENDS_DECLINE_ALL                       -16
#define CONST_FA_POPUP_FRIENDS_ACCEPT_ALL                        -17
#define CONST_FA_POPUP_STORE_SELL_CONFIRM                        -18
#define CONST_FA_POPUP_SKIP_QUEUE_TUTORIAL                       -19
#define CONST_FA_POPUP_RETURN_TO_LOBBY                           -20
#define CONST_FA_POPUP_QUEUE_FOR_TUTORIAL                        -21
#define CONST_FA_POPUP_CHALLENGE_PASS                            -22
#define CONST_FA_POPUP_ADD_FRIEND                                -23
#define CONST_FA_POPUP_EXIT_GAME                                 -24
#define CONST_FA_POPUP_CLAN_INVITE                               -25
#define CONST_FA_POPUP_BLOCK_PLAYER                              -26
#define CONST_FA_POPUP_EDIT_PLAYER_NOTE                          -27
#define CONST_FA_POPUP_APPLY_TO_CLAN                             -28
#define CONST_FA_POPUP_ENTER_PASSWORD                            -29
#define CONST_FA_POPUP_ENTER_PASSWORD_REPLAY                     -30
#define CONST_FA_POPUP_DLC_ACCEPT                                -31
#define CONST_FA_POPUP_DLC_DECLINE                               -32
#define CONST_FA_POPUP_OPEN_SETTINGS_MENU                        -33
#define CONST_FA_POPUP_ABANDON_QUEST                             -34
#define CONST_FA_POPUP_AUTOCONFIGURE_SETTINGS                    -35
#define CONST_FA_POPUP_DISBAND_PARTY                             -36
#define CONST_FA_POPUP_CHANGE_MATCH                              -37
#define CONST_FA_POPUP_CANCEL_MATCH_CHANGE                       -38
#define CONST_FA_POPUP_REPORT_PLAYER                             -39
#define CONST_FA_POPUP_QUIT_TRAINING                             -40
#define CONST_FA_POPUP_QUEUE_ARENA_COOP                          -41
#define CONST_FA_POPUP_GOTO_COOP_QUEUES                          -42
#define CONST_FA_POPUP_OPEN_PARTY                                -43
#define CONST_FA_POPUP_CONTINUE_QUEUE_JOIN                       -44
#define CONST_FA_POPUP_SKIP_QUEST                                -45
#define CONST_FA_POPUP_PREFERRED_SITE_QUEUE                      -46

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum TgClient.TgBrowserManager.WebPageType
/*enum WebPageType
{
	WPT_Gold                                           = 0,
	WPT_CreateAccount                                  = 1,
	WPT_RecoverPassword                                = 2,
	WPT_RecoverUsername                                = 3,
	WPT_GodPack                                        = 4,
	WPT_FacebookPromo                                  = 5,
	WPT_TwitterPromo                                   = 6,
	WPT_RecruitPromo                                   = 7,
	WPT_ReferLinkup                                    = 8,
	WPT_MAX                                            = 9
};*/

// Enum TgClient.TgClanDC_Roster.TG_CLAN_ACTION
/*enum TG_CLAN_ACTION
{
	CLAN_KICK                                          = 0,
	CLAN_PROMOTE                                       = 1,
	CLAN_DEMOTE                                        = 2,
	CLAN_MAX                                           = 3
};*/

// Enum TgClient.TgClientHUD.TgClientGameStates
/*enum TgClientGameStates
{
	CGS_NONE                                           = 0,
	CGS_DISCONNECTED                                   = 1,
	CGS_LOGGED_IN                                      = 2,
	CGS_IN_PRACTICE                                    = 3,
	CGS_IN_MATCH                                       = 4,
	CGS_END_OF_MATCH                                   = 5,
	CGS_SPECTATOR                                      = 6,
	CGS_MAX                                            = 7
};*/

// Enum TgClient.TgGameDC_Chat.TG_CHAT_PRIORITY
/*enum TG_CHAT_PRIORITY
{
	CHAT_PRIORITY_THROWAWAY                            = 0,
	CHAT_PRIORITY_NORMAL                               = 1,
	CHAT_PRIORITY_HIGH                                 = 2,
	CHAT_PRIORITY_INTERRUPT                            = 3,
	CHAT_PRIORITY_MAX                                  = 4
};*/

// Enum TgClient.TgGameDC_Game.GAME_MODE_TYPE
/*enum GAME_MODE_TYPE
{
	GAME_TYPE_BATTLE                                   = 0,
	GAME_TYPE_ARENA                                    = 1,
	GAME_TYPE_DOM                                      = 2,
	GAME_TYPE_SIEGE                                    = 3,
	GAME_TYPE_ENCOUNTERS                               = 4,
	GAME_TYPE_MAX                                      = 5
};*/

// Enum TgClient.TgGameDC_Player.ETeamUpdateState
/*enum ETeamUpdateState
{
	TEAMUPDATE_NotUpdated                              = 0,
	TEAMUPDATE_Disconnected                            = 1,
	TEAMUPDATE_Connected                               = 2,
	TEAMUPDATE_MAX                                     = 3
};*/

// Enum TgClient.TgGameHUD.TgClientVisibilityMode
/*enum TgClientVisibilityMode
{
	CVM_NORMAL                                         = 0,
	CVM_ENEMY                                          = 1,
	CVM_PLAYERS                                        = 2,
	CVM_ALL                                            = 3,
	CVM_MAX                                            = 4
};*/

// Enum TgClient.TgGameMoviePlayer.EUIChangeEvent
/*enum EUIChangeEvent
{
	UICE_PlayerItems                                   = 0,
	UICE_PlayerInfo                                    = 1,
	UICE_PlayerVitals                                  = 2,
	UICE_PlayerStats                                   = 3,
	UICE_GameClock                                     = 4,
	UICE_GameScore                                     = 5,
	UICE_GameTransition                                = 6,
	UICE_DeviceStateChange                             = 7,
	UICE_PlayerSurrender                               = 8,
	UICE_ClientSettingsChange                          = 9,
	UICE_PlayerReady                                   = 10,
	UICE_InventoryChange                               = 11,
	UICE_PlayerRespawn                                 = 12,
	UICE_GameCapturePointControlA                      = 13,
	UICE_GameCapturePointControlB                      = 14,
	UICE_GameCapturePointControlC                      = 15,
	UICE_TutorialHighlighter                           = 16,
	UICE_MAX                                           = 17
};*/

// Enum TgClient.TgGameMoviePlayer.EChallengeBanOptions
/*enum EChallengeBanOptions
{
	ECBO_None                                          = 0,
	ECBO_BlindPick                                     = 1,
	ECBO_DraftPick                                     = 2,
	ECBO_Draft4Bans                                    = 3,
	ECBO_AllRandom                                     = 4,
	ECBO_Draft6Bans                                    = 5,
	ECBO_Draft8Bans                                    = 6,
	ECBO_RankedJoust                                   = 7,
	ECBO_RankedConquest                                = 8,
	ECBO_RankedDuel                                    = 9,
	ECBO_MAX                                           = 10
};*/

// Enum TgClient.TgGameMoviePlayer.EUserInterfaceEvents
/*enum EUserInterfaceEvents
{
	EUIE_None                                          = 0,
	EUIE_RCM_NewDay                                    = 1,
	EUIE_RCM_RewardsUpdated                            = 2,
	EUIE_RCM_QuestsInitialized                         = 3,
	EUIE_RCM_QuestsUpdated                             = 4,
	EUIE_RCM_SeasonTicketUpdated                       = 5,
	EUIE_RefreshTopBarCounts                           = 6,
	EUIE_UpdateNotifications                           = 7,
	EUIE_STM_ImageLoaded                               = 8,
	EUIE_LPM_ImageLoaded                               = 9,
	EUIE_OnPopupOpened                                 = 10,
	EUIE_OnPopupClosed                                 = 11,
	EUIE_UpdateStreams                                 = 12,
	EUIE_MAX                                           = 13
};*/

// Enum TgClient.TgGameMoviePlayer.ENavigationActions
/*enum ENavigationActions
{
	ENA_None                                           = 0,
	ENA_Home                                           = 1,
	ENA_Profile                                        = 2,
	ENA_Wisdom                                         = 3,
	ENA_Store                                          = 4,
	ENA_Social                                         = 5,
	ENA_Competitive                                    = 6,
	ENA_Play                                           = 7,
	ENA_Gods                                           = 8,
	ENA_Event                                          = 9,
	ENA_SeasonTicket                                   = 10,
	ENA_TreasureChest                                  = 11,
	ENA_Quests                                         = 12,
	ENA_Settings                                       = 13,
	ENA_ClaimGodPack                                   = 14,
	ENA_Reward                                         = 15,
	ENA_ReferAFriend                                   = 16,
	ENA_MAX                                            = 17
};*/

// Enum TgClient.TgGameMoviePlayer.EActiveEvents
/*enum EActiveEvents
{
	EAE_None                                           = 0,
	EAE_Seasonal                                       = 1,
	EAE_Seasonal2                                      = 2,
	EAE_MAX                                            = 3
};*/

// Enum TgClient.TgGameMoviePlayer.EFeatureType
/*enum EFeatureType
{
	EFT_Item                                           = 0,
	EFT_TopBarNavigation                               = 1,
	EFT_ExternalURL                                    = 2,
	EFT_InternalURL                                    = 3,
	EFT_OpenVideo                                      = 4,
	EFT_RunFunction                                    = 5,
	EFT_EsportsMatch                                   = 6,
	EFT_WebPanel                                       = 7,
	EFT_ExternalPurchase                               = 8,
	EFT_MAX                                            = 9
};*/

// Enum TgClient.TgGameMoviePlayer.EUIDisplayMode
/*enum EUIDisplayMode
{
	UIDM_LOGIN                                         = 0,
	UIDM_NEW_USER                                      = 1,
	UIDM_NORMAL                                        = 2,
	UIDM_EOM                                           = 3,
	UIDM_MAX                                           = 4
};*/

// Enum TgClient.TgGameMoviePlayer.EBuddyStatus
/*enum EBuddyStatus
{
	BUS_OFFLINE                                        = 0,
	BUS_INCOMING_FRIEND_REQUEST                        = 1,
	BUS_SENT_FRIEND_REQUEST                            = 2,
	BUS_DND                                            = 3,
	BUS_IN_MATCH                                       = 4,
	BUS_INVITE_PENDING                                 = 5,
	BUS_IN_PARTY                                       = 6,
	BUS_IN_QUEUE                                       = 7,
	BUS_IN_LOBBY                                       = 8,
	BUS_IN_GAME                                        = 9,
	BUS_IS_SPECTATING                                  = 10,
	BUS_MAX                                            = 11
};*/

// Enum TgClient.TgGameMoviePlayer.EActionLog
/*enum EActionLog
{
	EAL_NONE                                           = 0,
	EAL_STORE                                          = 1,
	EAL_BUYITEM                                        = 2,
	EAL_CENTERPLAY                                     = 3,
	EAL_QUICK1                                         = 4,
	EAL_QUICK2                                         = 5,
	EAL_QUICK3                                         = 6,
	EAL_QUICK4                                         = 7,
	EAL_JOINSOLO                                       = 8,
	EAL_JOINPARTY                                      = 9,
	EAL_INVITEPARTY                                    = 10,
	EAL_CANCELPARTY                                    = 11,
	EAL_LEAVEQUEUE                                     = 12,
	EAL_PLAYAGAIN                                      = 13,
	EAL_RENTITEM                                       = 14,
	EAL_JSONPANEL                                      = 15,
	EAL_MAX                                            = 16
};*/

// Enum TgClient.TgGameMoviePlayer.ELocationLog
/*enum ELocationLog
{
	ELL_NONE                                           = 0,
	ELL_STORE                                          = 1,
	ELL_GODPAGE                                        = 2,
	ELL_MATCHLOBBY                                     = 3,
	ELL_EVENT                                          = 4,
	ELL_CHEAT                                          = 5,
	ELL_SEASONTICKET                                   = 6,
	ELL_LOADOUT                                        = 7,
	ELL_HOMEPAGE                                       = 8,
	ELL_REWARDCENTER                                   = 9,
	ELL_MAX                                            = 10
};*/

// Enum TgClient.TgGameMoviePlayer.ERentalItemTypes
/*enum ERentalItemTypes
{
	ERIT_God                                           = 0,
	ERIT_Other                                         = 1,
	ERIT_MAX                                           = 2
};*/

// Enum TgClient.TgGameMoviePlayer.EPlayerFeedbackType
/*enum EPlayerFeedbackType
{
	EPFT_Matchmaking                                   = 0,
	EPFT_ServerStability                               = 1,
	EPFT_MAX                                           = 2
};*/

// Enum TgClient.TgGfxAcquisitionPopup.AcquisitionType
/*enum AcquisitionType
{
	MA_AT_NONE                                         = 0,
	MA_AT_STANDARD                                     = 1,
	MA_AT_LEAGUE                                       = 2,
	MA_AT_PROMOTION                                    = 3,
	MA_AT_DEMOTION                                     = 4,
	MA_AT_MAX                                          = 5
};*/

// Enum TgClient.TgGfxBrowser.BrowserNavigationTypes
/*enum BrowserNavigationTypes
{
	BNT_CloseBrowser                                   = 0,
	BNT_Back                                           = 1,
	BNT_Forward                                        = 2,
	BNT_MAX                                            = 3
};*/

// Enum TgClient.TgGfxChallengeList.EChallengeListActions
/*enum EChallengeListActions
{
	ECLA_None                                          = 0,
	ECLA_Server                                        = 1,
	ECLA_ServerPos                                     = 2,
	ECLA_Create                                        = 3,
	ECLA_Join                                          = 4,
	ECLA_Close                                         = 5,
	ECLA_Refresh                                       = 6,
	ECLA_FilterPrivate                                 = 7,
	ECLA_ChangeRegion                                  = 8,
	ECLA_MAX                                           = 9
};*/

// Enum TgClient.TgGfxChallengeLobby.EChallengeLobbyEventActions
/*enum EChallengeLobbyEventActions
{
	ECLEA_None                                         = 0,
	ECLEA_AddBot                                       = 1,
	ECLEA_JoinTeam                                     = 2,
	ECLEA_KickPlayer                                   = 3,
	ECLEA_InvitePlayer                                 = 4,
	ECLEA_StartMatch                                   = 5,
	ECLEA_LeaveLobby                                   = 6,
	ECLEA_InvitePos                                    = 7,
	ECLEA_Invite                                       = 8,
	ECLEA_SwapPlayer                                   = 9,
	ECLEA_ChangeBotClass                               = 10,
	ECLEA_ChangeBotDifficulty                          = 11,
	ECLEA_PromoteInviter                               = 12,
	ECLEA_FillWithBots                                 = 13,
	ECLEA_MAX                                          = 14
};*/

// Enum TgClient.TgGfxChallengeLobby.EPlayerInviteStatus
/*enum EPlayerInviteStatus
{
	EPIS_Pending                                       = 0,
	EPIS_Accepted                                      = 1,
	EPIS_Rejected                                      = 2,
	EPIS_MAX                                           = 3
};*/

// Enum TgClient.TgGfxChallengeOptions.EChallengeOptionsActions
/*enum EChallengeOptionsActions
{
	ECOA_None                                          = 0,
	ECOA_CreateGame                                    = 1,
	ECOA_Cancel                                        = 2,
	ECOA_SelectMatch                                   = 3,
	ECOA_ChangePlayerCount                             = 4,
	ECOA_MAX                                           = 5
};*/

// Enum TgClient.TgGfxCharacterBuilder.TipType
/*enum TipType
{
	ETT_GridTip                                        = 0,
	ETT_ListTip                                        = 1,
	ETT_PreviewTip                                     = 2,
	ETT_ConsumableTip                                  = 3,
	ETT_ActiveTip                                      = 4,
	ETT_AbilityTip                                     = 5,
	ETT_MAX                                            = 6
};*/

// Enum TgClient.TgGfxCharacterBuilder.CharacterBuilderActions
/*enum CharacterBuilderActions
{
	ECBA_None                                          = 0,
	ECBA_ClearItems                                    = 1,
	ECBA_SaveProfile                                   = 2,
	ECBA_SetLevel                                      = 3,
	ECBA_ListScroll                                    = 4,
	ECBA_ListItem                                      = 5,
	ECBA_GridItem                                      = 6,
	ECBA_RoleChanged                                   = 7,
	ECBA_SelectItem                                    = 8,
	ECBA_ListTip                                       = 9,
	ECBA_GridTip                                       = 10,
	ECBA_HideTip                                       = 11,
	ECBA_RemoveItem                                    = 12,
	ECBA_BuildCheckbox                                 = 13,
	ECBA_PreviewTip                                    = 14,
	ECBA_PreviewItem                                   = 15,
	ECBA_ConsumableTip                                 = 16,
	ECBA_ConsumableItem                                = 17,
	ECBA_ActiveTip                                     = 18,
	ECBA_ActiveItem                                    = 19,
	ECBA_QtyChange                                     = 20,
	ECBA_AbilityTip                                    = 21,
	ECBA_AbilityItem                                   = 22,
	ECBA_Tab                                           = 23,
	ECBA_SetAbility                                    = 24,
	ECBA_SetAbilitySlot                                = 25,
	ECBA_SetClass                                      = 26,
	ECBA_SetAbilityActive                              = 27,
	ECBA_MAX                                           = 28
};*/

// Enum TgClient.TgGfxCharacterBuilder.CharacterBuilderTabs
/*enum CharacterBuilderTabs
{
	ECBT_Items                                         = 0,
	ECBT_Abilities                                     = 1,
	ECBT_MAX                                           = 2
};*/

// Enum TgClient.TgGfxChatInput.EChatInputActions
/*enum EChatInputActions
{
	ECIA_None                                          = 0,
	ECIA_Focus                                         = 1,
	ECIA_Input                                         = 2,
	ECIA_MAX                                           = 3
};*/

// Enum TgClient.TgGfxEventLeaderboard.EEventLeaderboardTypes
/*enum EEventLeaderboardTypes
{
	EELT_NONE                                          = 0,
	EELT_XingMountain                                  = 1,
	EELT_FafMountNorm                                  = 2,
	EELT_FafMountHard                                  = 3,
	EELT_MAX                                           = 4
};*/

// Enum TgClient.TgGfxEventScene.EEventSceneActions
/*enum EEventSceneActions
{
	EESA_SelectItem                                    = 0,
	EESA_SelectReward                                  = 1,
	EESA_SelectChest                                   = 2,
	EESA_BuyItem                                       = 3,
	EESA_ProgressTooltip                               = 4,
	EESA_HideModel                                     = 5,
	EESA_TestVoicePack                                 = 6,
	EESA_SelectQuest                                   = 7,
	EESA_ViewQuest                                     = 8,
	EESA_ActivateQuest                                 = 9,
	EESA_UpdatePurchasedStatus                         = 10,
	EESA_SetScene                                      = 11,
	EESA_CenterContents                                = 12,
	EESA_Scroll                                        = 13,
	EESA_SelectTab                                     = 14,
	EESA_SelectQuestTab                                = 15,
	EESA_UpdateLoreScroll                              = 16,
	EESA_UpdateLeaderboardProgress                     = 17,
	EESA_UpdateLeaderboardQueue                        = 18,
	EESA_JoinLeaderboardQueue                          = 19,
	EESA_OpenLeaderboard                               = 20,
	EESA_UpdateQuestAvailableCount                     = 21,
	EESA_MAX                                           = 22
};*/

// Enum TgClient.TgGfxEventScene.EEventItemTypes
/*enum EEventItemTypes
{
	EEIT_Purchased                                     = 0,
	EEIT_Quest                                         = 1,
	EEIT_Reward                                        = 2,
	EEIT_MAX                                           = 3
};*/

// Enum TgClient.TgGfxEventScene.EQuestFailureTypes
/*enum EQuestFailureTypes
{
	EQFT_None                                          = 0,
	EQFT_Wait                                          = 1,
	EQFT_Multi                                         = 2,
	EQFT_InProgress                                    = 3,
	EQFT_MAX                                           = 4
};*/

// Enum TgClient.TgGfxEventScene.EQueueInactiveTypes
/*enum EQueueInactiveTypes
{
	EQIT_None                                          = 0,
	EQIT_Level                                         = 1,
	EQIT_NotActive                                     = 2,
	EQIT_MAX                                           = 3
};*/

// Enum TgClient.TgGfxFeedback.EFeedbackPopupActions
/*enum EFeedbackPopupActions
{
	EFPA_None                                          = 0,
	EFPA_Close                                         = 1,
	EFPA_SetStar                                       = 2,
	EFPA_Submit                                        = 3,
	EFPA_MAX                                           = 4
};*/

// Enum TgClient.TgGfxFriendManagement.EFriendTabs
/*enum EFriendTabs
{
	FRT_CURRENT_FRIENDS                                = 0,
	FRT_REQUESTS                                       = 1,
	FRT_RECENT                                         = 2,
	FRT_CLAN                                           = 3,
	FRT_BLOCKED                                        = 4,
	FRT_MAX                                            = 5
};*/

// Enum TgClient.TgGfxGods.EGodsViewPageActions
/*enum EGodsViewPageActions
{
	EGVPA_None                                         = 0,
	EGVPA_ItemScroll                                   = 1,
	EGVPA_ItemSelect                                   = 2,
	EGVPA_ItemToolTip                                  = 3,
	EGVPA_OnTabSelected                                = 4,
	EGVPA_SetPrice                                     = 5,
	EGVPA_Unlock                                       = 6,
	EGVPA_SkinScroll                                   = 7,
	EGVPA_SkinSelect                                   = 8,
	EGVPA_SkinToolTip                                  = 9,
	EGVPA_OnFilterchange                               = 10,
	EGVPA_UnlockItem                                   = 11,
	EGVPA_OnGodBuilder                                 = 12,
	EGVPA_GodSelect                                    = 13,
	EGVPA_GodScroll                                    = 14,
	EGVPA_SetGodOwned                                  = 15,
	EGVPA_SetSkinOwned                                 = 16,
	EGVPA_OnVoiceSkin                                  = 17,
	EGVPA_GotoChest                                    = 18,
	EGVPA_GotoAchievement                              = 19,
	EGVPA_GotoScene                                    = 20,
	EGVPA_GodGridSelect                                = 21,
	EGVPA_SwapGodView                                  = 22,
	EGVPA_GotoNavTarget                                = 23,
	EGVPA_RefreshUnlock                                = 24,
	EGVPA_MAX                                          = 25
};*/

// Enum TgClient.TgGfxGods.EGodsSkinTypeId
/*enum EGodsSkinTypeId
{
	EGSTI_Default                                      = 0,
	EGSTI_Other                                        = 1,
	EGSTI_Golden                                       = 2,
	EGSTI_Legendary                                    = 3,
	EGSTI_Diamond                                      = 4,
	EGSTI_MAX                                          = 5
};*/

// Enum TgClient.TgGfxGods.EGodsViewTabs
/*enum EGodsViewTabs
{
	EGVT_GODS                                          = 0,
	EGVT_ABOUT                                         = 1,
	EGVT_ABILITIES                                     = 2,
	EGVT_SKINS                                         = 3,
	EGVT_STATS                                         = 4,
	EGVT_ACHIEVE                                       = 5,
	EGVT_LORE                                          = 6,
	EGVT_EXTRAS                                        = 7,
	EGVT_HISTORY                                       = 8,
	EGVT_WARDS                                         = 9,
	EGVT_VOICE                                         = 10,
	EGVT_MAX                                           = 11
};*/

// Enum TgClient.TgGfxGods.EGodFilters
/*enum EGodFilters
{
	EGF_None                                           = 0,
	EGF_Owned                                          = 1,
	EGF_Assassin                                       = 2,
	EGF_Guardian                                       = 3,
	EGF_Hunter                                         = 4,
	EGF_Mage                                           = 5,
	EGF_Warrior                                        = 6,
	EGF_Mastered                                       = 7,
	EGF_Not_Mastered                                   = 8,
	EGF_Purchasable                                    = 9,
	EGF_MAX                                            = 10
};*/

// Enum TgClient.TgGfxGodTargeter.EGodTargeterActions
/*enum EGodTargeterActions
{
	EGTA_NONE                                          = 0,
	EGTA_UPDATESELECTED                                = 1,
	EGTA_CLOSE                                         = 2,
	EGTA_MAX                                           = 3
};*/

// Enum TgClient.TgGfxHomePage.EHomePageActions
/*enum EHomePageActions
{
	EHPA_None                                          = 0,
	EHPA_GotoFeature                                   = 1,
	EHPA_NextFeature                                   = 2,
	EHPA_PrevFeature                                   = 3,
	EHPA_UpdateImages                                  = 4,
	EHPA_ForwardFeature                                = 5,
	EHPA_MAX                                           = 6
};*/

// Enum TgClient.TgGfxHudChat.EChatActions
/*enum EChatActions
{
	ECA_None                                           = 0,
	ECA_Show                                           = 1,
	ECA_Scroll                                         = 2,
	ECA_Input                                          = 3,
	ECA_Fade                                           = 4,
	ECA_Tab                                            = 5,
	ECA_MAX                                            = 6
};*/

// Enum TgClient.TgGfxHudChat.EChatTabs
/*enum EChatTabs
{
	ECT_None                                           = 0,
	ECT_Chat                                           = 1,
	ECT_Combat                                         = 2,
	ECT_MAX                                            = 3
};*/

// Enum TgClient.TgGfxHudNotify.NotifyType
/*enum NotifyType
{
	NT_Alert                                           = 0,
	NT_Accolade                                        = 1,
	NT_Kill                                            = 2,
	NT_MAX                                             = 3
};*/

// Enum TgClient.TgGfxHudNotify.NotifySubTypeAccolade
/*enum NotifySubTypeAccolade
{
	NSTA_Aced                                          = 0,
	NSTA_GoldFury                                      = 1,
	NSTA_Wild_Juggernaut                               = 2,
	NSTA_Siege_Juggernaut                              = 3,
	NSTA_FireGiant                                     = 4,
	NSTA_TowerKill                                     = 5,
	NSTA_PhoenixKill                                   = 6,
	NSTA_CapturedPoint                                 = 7,
	NSTA_ObjectiveSteal                                = 8,
	NSTA_NoScope                                       = 9,
	NSTA_HoldTheLine                                   = 10,
	NSTA_TowerDive                                     = 11,
	NSTA_Revenge                                       = 12,
	NSTA_Assist                                        = 13,
	NSTA_KillStreak_Basic                              = 14,
	NSTA_KillStreak_Breaker                            = 15,
	NSTA_KillCombo                                     = 16,
	NSTA_KillStreak                                    = 17,
	NSTA_KillStreak01                                  = 18,
	NSTA_KillStreak02                                  = 19,
	NSTA_KillStreak03                                  = 20,
	NSTA_KillStreak04                                  = 21,
	NSTA_KillStreak05                                  = 22,
	NSTA_KillStreak06                                  = 23,
	NSTA_KillStreak07                                  = 24,
	NSTA_KillCombo01                                   = 25,
	NSTA_KillCombo02                                   = 26,
	NSTA_KillCombo03                                   = 27,
	NSTA_KillCombo04                                   = 28,
	NSTA_FirstBlood                                    = 29,
	NSTA_BullDemonKing                                 = 30,
	NSTA_MAX                                           = 31
};*/

// Enum TgClient.TgGfxLoadouts.ELoadoutEquipItems
/*enum ELoadoutEquipItems
{
	ELEI_Avatars                                       = 0,
	ELEI_WardSkins                                     = 1,
	ELEI_AnnouncerPack                                 = 2,
	ELEI_LoadingFrame                                  = 3,
	ELEI_Pedestal                                      = 4,
	ELEI_GlobalEmote                                   = 5,
	ELEI_MusicTheme                                    = 6,
	ELEI_RecallSkin                                    = 7,
	ELEI_HudTheme                                      = 8,
	ELEI_MAX                                           = 9
};*/

// Enum TgClient.TgGfxLoadouts.ELoadoutsActions
/*enum ELoadoutsActions
{
	ELA_None                                           = 0,
	ELA_ItemScroll                                     = 1,
	ELA_ItemSelect                                     = 2,
	ELA_ItemEquip                                      = 3,
	ELA_ItemTooltip                                    = 4,
	ELA_SelectItemType                                 = 5,
	ELA_HideStats                                      = 6,
	ELA_SetBoostTime                                   = 7,
	ELA_OnBoost                                        = 8,
	ELA_UpdateAvatarOwned                              = 9,
	ELA_OnDropdownChanged                              = 10,
	ELA_ItemGoto                                       = 11,
	ELA_UseClanIcon                                    = 12,
	ELA_OnPreview                                      = 13,
	ELA_MAX                                            = 14
};*/

// Enum TgClient.TgGfxMassInvite.EMassInviteActions
/*enum EMassInviteActions
{
	EMIA_None                                          = 0,
	EMIA_RemovePlayer                                  = 1,
	EMIA_AddPlayer                                     = 2,
	EMIA_InvitePlayers                                 = 3,
	EMIA_Close                                         = 4,
	EMIA_Search                                        = 5,
	EMIA_InvitedPlayersScroll                          = 6,
	EMIA_BuddyListScroll                               = 7,
	EMIA_Filter                                        = 8,
	EMIA_MAX                                           = 9
};*/

// Enum TgClient.TgGfxMatchLobby.EMatchLobbyActions
/*enum EMatchLobbyActions
{
	EMLA_None                                          = 0,
	EMLA_SpectateGotoMatch                             = 1,
	EMLA_SpectateCancel                                = 2,
	EMLA_MAX                                           = 3
};*/

// Enum TgClient.TgGfxMenuBar.EMenuBarActions
/*enum EMenuBarActions
{
	EMBA_None                                          = 0,
	EMBA_Minimize                                      = 1,
	EMBA_Exit                                          = 2,
	EMBA_Profile                                       = 3,
	EMBA_Wisdom                                        = 4,
	EMBA_Store                                         = 5,
	EMBA_Social                                        = 6,
	EMBA_Competitive                                   = 7,
	EMBA_Settings                                      = 8,
	EMBA_Home                                          = 9,
	EMBA_Play                                          = 10,
	EMBA_Gods                                          = 11,
	EMBA_LeaveQueue                                    = 12,
	EMBA_SetBarState                                   = 13,
	EMBA_ReturnLobby                                   = 14,
	EMBA_OnlineStats                                   = 15,
	EMBA_ReplayGame                                    = 16,
	EMBA_RateServer                                    = 17,
	EMBA_PlayAgain                                     = 18,
	EMBA_Twitter                                       = 19,
	EMBA_Facebook                                      = 20,
	EMBA_Faceit                                        = 21,
	EMBA_UpdateQueueBar                                = 22,
	EMBA_SetSelectedPage                               = 23,
	EMBA_UpdateEventButtons                            = 24,
	EMBA_SetHomeState                                  = 25,
	EMBA_SetSeasonTicketLive                           = 26,
	EMBA_SeasonTicket                                  = 27,
	EMBA_Event                                         = 28,
	EMBA_RewardCenter                                  = 29,
	EMBA_MAX                                           = 30
};*/

// Enum TgClient.TgGfxNotificationList.ENotificationListActions
/*enum ENotificationListActions
{
	ENLA_None                                          = 0,
	ENLA_Close                                         = 1,
	ENLA_Accept                                        = 2,
	ENLA_Cancel                                        = 3,
	ENLA_ListScroll                                    = 4,
	ENLA_SelectTab                                     = 5,
	ENLA_Remove                                        = 6,
	ENLA_HideAll                                       = 7,
	ENLA_Goto                                          = 8,
	ENLA_MAX                                           = 9
};*/

// Enum TgClient.TgGfxNotificationList.ENotificationOtherIconIndexs
/*enum ENotificationOtherIconIndexs
{
	ENOII_None                                         = 0,
	ENOII_Booster                                      = 1,
	ENOII_Gems                                         = 2,
	ENOII_Favor                                        = 3,
	ENOII_XP                                           = 4,
	ENOII_Fantasy_Points                               = 5,
	ENOII_Clan_Honor                                   = 6,
	ENOII_Clan_Quest                                   = 7,
	ENOII_SeasonTicketChest                            = 8,
	ENOII_SeasonTicketChest_LatAm                      = 9,
	ENOII_SeasonTicketChest_Brazil                     = 10,
	ENOII_FriendReferral                               = 11,
	ENOII_Change_Name                                  = 12,
	ENOII_Viking_Event                                 = 13,
	ENOII_Coupon                                       = 14,
	ENOII_Odyssey_Points                               = 15,
	ENOII_Odyssey_Level                                = 16,
	ENOII_MAX                                          = 17
};*/

// Enum TgClient.TgGfxParty.EPartyActions
/*enum EPartyActions
{
	EPA_None                                           = 0,
	EPA_Kick                                           = 1,
	EPA_QuickAdd                                       = 2,
	EPA_Search                                         = 3,
	EPA_Filter                                         = 4,
	EPA_Profile                                        = 5,
	EPA_Tooltip                                        = 6,
	EPA_QuickAddPos                                    = 7,
	EPA_AddFriend                                      = 8,
	EPA_AddInvite                                      = 9,
	EPA_Resize                                         = 10,
	EPA_Close                                          = 11,
	EPA_Disband                                        = 12,
	EPA_Accept                                         = 13,
	EPA_MAX                                            = 14
};*/

// Enum TgClient.TgGfxPartyManagement.EPartyManagementView
/*enum EPartyManagementView
{
	EPMV_Friends                                       = 0,
	EPMV_Clans                                         = 1,
	EPMV_RecentlyPlayed                                = 2,
	EPMV_MAX                                           = 3
};*/

// Enum TgClient.TgGfxPartyManagement.PartyManagementActions
/*enum PartyManagementActions
{
	PMA_None                                           = 0,
	PMA_SelectTab                                      = 1,
	PMA_Search                                         = 2,
	PMA_Invite                                         = 3,
	PMA_ViewProfile                                    = 4,
	PMA_PromoteLeader                                  = 5,
	PMA_PromoteInvite                                  = 6,
	PMA_Kick                                           = 7,
	PMA_Leave                                          = 8,
	PMA_UpdateInviteList                               = 9,
	PMA_InviteListToggle                               = 10,
	PMA_UpdateTab                                      = 11,
	PMA_UpdateInviteListDisabled                       = 12,
	PMA_MAX                                            = 13
};*/

// Enum TgClient.TgGfxPlayerProfile.EPlayerProfileFilter
/*enum EPlayerProfileFilter
{
	PPF_YOURSELF                                       = 0,
	PPF_FRIENDS                                        = 1,
	PPF_CLAN                                           = 2,
	PPF_RECENTLY_PLAYED                                = 3,
	PPF_MAX                                            = 4
};*/

// Enum TgClient.TgGfxPlayerProfile.EPlayerProfileTab
/*enum EPlayerProfileTab
{
	PPT_OVERVIEW                                       = 0,
	PPT_MATCHES                                        = 1,
	PPT_GODS                                           = 2,
	PPT_RECORDS                                        = 3,
	PPT_MAX                                            = 4
};*/

// Enum TgClient.TgGfxPlayNowV2.EPlayNowScreens
/*enum EPlayNowScreens
{
	EPNS_None                                          = 0,
	EPNS_PlayNow                                       = 1,
	EPNS_CustomCreate                                  = 2,
	EPNS_CustomList                                    = 3,
	EPNS_CustomRoom                                    = 4,
	EPNS_MAX                                           = 5
};*/

// Enum TgClient.TgGfxProfileWorshiper.EGodMasteryFilter
/*enum EGodMasteryFilter
{
	GMS_ALL                                            = 0,
	GMS_MASTERED                                       = 1,
	GMS_IN_PROGRESS                                    = 2,
	GMS_NOT_MASTERED                                   = 3,
	GMS_NOT_PLAYED                                     = 4,
	GMS_MAX                                            = 5
};*/

// Enum TgClient.TgGfxQuestList.EQuestListActions
/*enum EQuestListActions
{
	EQLA_None                                          = 0,
	EQLA_UpdateQuests                                  = 1,
	EQLA_OnResize                                      = 2,
	EQLA_AbandonQuest                                  = 3,
	EQLA_GotoQuest                                     = 4,
	EQLA_GotoEventQuest                                = 5,
	EQLA_MAX                                           = 6
};*/

// Enum TgClient.TgGfxQuestList.EQuestItemRenderers
/*enum EQuestItemRenderers
{
	QIR_None                                           = 0,
	QIR_Header                                         = 1,
	QIR_Message                                        = 2,
	QIR_Quest                                          = 3,
	QIR_MAX                                            = 4
};*/

// Enum TgClient.TgGfxRewardCenter.ERewardCenterActions
/*enum ERewardCenterActions
{
	ERCA_None                                          = 0,
	ERCA_UpdateTabs                                    = 1,
	ERCA_RefreshRewards                                = 2,
	ERCA_ClaimBonusChest                               = 3,
	ERCA_SelectTab                                     = 4,
	ERCA_ToggleWeb                                     = 5,
	ERCA_UnlockItem                                    = 6,
	ERCA_MAX                                           = 7
};*/

// Enum TgClient.TgGfxRewardCenter.RewardCenterTabs
/*enum RewardCenterTabs
{
	TAB_DAILY_REWARD                                   = 0,
	TAB_COUPONS                                        = 1,
	TAB_RETURNING_PLAYER                               = 2,
	TAB_PARTY_BONUSES                                  = 3,
	TAB_LEVEL_UP_BONUS                                 = 4,
	TAB_BONUS_CHEST                                    = 5,
	TAB_DYNAMIC_EVENT                                  = 6,
	TAB_PROMOTIONAL_CODE                               = 7,
	TAB_WEB_VIEW                                       = 8,
	TAB_MAX                                            = 9
};*/

// Enum TgClient.TgGfxSeasonTicket.ESeasonTicketActions
/*enum ESeasonTicketActions
{
	ESTA_None                                          = 0,
	ESTA_SelectWinner                                  = 1,
	ESTA_BuyTicket                                     = 2,
	ESTA_WatchNow                                      = 3,
	ESTA_UpdateData                                    = 4,
	ESTA_UpdateFantasyPoints                           = 5,
	ESTA_RevertChoice                                  = 6,
	ESTA_BuyPoints                                     = 7,
	ESTA_ToggleHideSpoilers                            = 8,
	ESTA_UpdateImages                                  = 9,
	ESTA_ForwardFeature                                = 10,
	ESTA_MAX                                           = 11
};*/

// Enum TgClient.TgGfxSmiteTvLive.ESmiteTvTabs
/*enum ESmiteTvTabs
{
	STTT_BASICS                                        = 0,
	STTT_ADVANCED                                      = 1,
	STTT_MAPS                                          = 2,
	STTT_GODS                                          = 3,
	STTT_ITEMS                                         = 4,
	STTT_SHOUTCASTER                                   = 5,
	STTT_MAX                                           = 6
};*/

// Enum TgClient.TgGfxStoreChest.EStoreChestActions
/*enum EStoreChestActions
{
	ESCA_None                                          = 0,
	ESCA_ItemUnlock                                    = 1,
	ESCA_RefreshItems                                  = 2,
	ESCA_ChestIndex                                    = 3,
	ESCA_MAX                                           = 4
};*/

// Enum TgClient.TgGFxStoreMain.STORE_MAIN_TAB
/*enum STORE_MAIN_TAB
{
	STORE_MAIN_TAB_FEATURED                            = 0,
	STORE_MAIN_TAB_GODS                                = 1,
	STORE_MAIN_TAB_SKINS                               = 2,
	STORE_MAIN_TAB_CHESTS                              = 3,
	STORE_MAIN_TAB_BUNDLES                             = 4,
	STORE_MAIN_TAB_ACCOUNT_NAME                        = 5,
	STORE_MAIN_TAB_ACCOUNT_BOOSTER                     = 6,
	STORE_MAIN_TAB_CODE                                = 7,
	STORE_MAIN_TAB_VOICE_PACKS                         = 8,
	STORE_MAIN_TAB_EMOTES                              = 9,
	STORE_MAIN_TAB_AVATARS                             = 10,
	STORE_MAIN_TAB_WARDS                               = 11,
	STORE_MAIN_TAB_ANNOUNCER_PACKS                     = 12,
	STORE_MAIN_TAB_LOADING_FRAMES                      = 13,
	STORE_MAIN_TAB_PEDESTALS                           = 14,
	STORE_MAIN_TAB_GLOBAL_EMOTES                       = 15,
	STORE_MAIN_TAB_MUSIC_THEMES                        = 16,
	STORE_MAIN_TAB_MAX                                 = 17
};*/

// Enum TgClient.TgGfxStoreViewer.EStoreViewerActions
/*enum EStoreViewerActions
{
	ESVA_None                                          = 0,
	ESVA_ItemUnlock                                    = 1,
	ESVA_ItemGoto                                      = 2,
	ESVA_SelectTab                                     = 3,
	ESVA_DataSetup                                     = 4,
	ESVA_MAX                                           = 5
};*/

// Enum TgClient.TgGfxVendorStore.ItemDisplayType
/*enum ItemDisplayType
{
	EIDT_LIST                                          = 0,
	EIDT_GRID                                          = 1,
	EIDT_MAX                                           = 2
};*/

// Enum TgClient.TgGfxVendorStore.StoreDisplayType
/*enum StoreDisplayType
{
	ESDT_RECOMMENDED                                   = 0,
	ESDT_STANDARD                                      = 1,
	ESDT_STATS                                         = 2,
	ESDT_MAX                                           = 3
};*/

// Enum TgClient.TgGfxVendorStore.ItemStoreActions
/*enum ItemStoreActions
{
	EISA_None                                          = 0,
	EISA_Init                                          = 1,
	EISA_Sell                                          = 2,
	EISA_Tier                                          = 3,
	EISA_Event                                         = 4,
	EISA_Filter                                        = 5,
	EISA_Update                                        = 6,
	EISA_Display                                       = 7,
	EISA_SubFilter                                     = 8,
	EISA_Select                                        = 9,
	EISA_SelectTier1                                   = 10,
	EISA_SelectTier2                                   = 11,
	EISA_SelectTier3                                   = 12,
	EISA_SelectTier4                                   = 13,
	EISA_Tier1Tip                                      = 14,
	EISA_Tier2Tip                                      = 15,
	EISA_Tier3Tip                                      = 16,
	EISA_Tier4Tip                                      = 17,
	EISA_ListTip                                       = 18,
	EISA_GridTip                                       = 19,
	EISA_ListItem                                      = 20,
	EISA_ListScroll                                    = 21,
	EISA_AutoPurchase                                  = 22,
	EISA_SellItem                                      = 23,
	EISA_PurchaseItem                                  = 24,
	EISA_GridItem                                      = 25,
	EISA_GridScroll                                    = 26,
	EISA_Tab                                           = 27,
	EISA_Role                                          = 28,
	EISA_ForceHideTip                                  = 29,
	EISA_Undo                                          = 30,
	EISA_MAX                                           = 31
};*/

// Enum TgClient.TgMiniMap.TgMapOrientation
/*enum TgMapOrientation
{
	TMO_NORMAL                                         = 0,
	TMO_ROTATE                                         = 1,
	TMO_MAX                                            = 2
};*/

// Enum TgClient.TgMiniMap.MiniMapIconLayer
/*enum MiniMapIconLayer
{
	MMap_Layer_Enemy_Deployable                        = 0,
	MMap_Layer_Friendly_Deployable                     = 1,
	MMap_Layer_Enemy_Bot                               = 2,
	MMap_Layer_Friendly_Bot                            = 3,
	MMap_Layer_Enemy_Player                            = 4,
	MMap_Layer_Friendly_Player                         = 5,
	MMap_Layer_Neutral_Factory                         = 6,
	MMap_Layer_Friendly_Factory                        = 7,
	MMap_Layer_Enemy_Factory                           = 8,
	MMap_Layer_Neutral_CapturePoint                    = 9,
	MMap_Layer_Enemy_CapturePoint                      = 10,
	MMap_Layer_Friendly_CapturePoint                   = 11,
	MMap_Layer_Targeting                               = 12,
	MMap_Layer_Local_Player_Pet                        = 13,
	MMap_Layer_Local_Player                            = 14,
	MMap_Layer_MAX                                     = 15
};*/

// Enum TgClient.TgMiniMap.MiniMapPortalLayer
/*enum MiniMapPortalLayer
{
	MMap_Portal_Layer_Enemy                            = 0,
	MMap_Portal_Layer_Friendly                         = 1,
	MMap_Portal_Layer_MAX                              = 2
};*/

// Enum TgClient.TgMiniMap.MinimapDisplayType
/*enum MinimapDisplayType
{
	MDT_Friendly                                       = 0,
	MDT_Enemy                                          = 1,
	MDT_FriendlyCB                                     = 2,
	MDT_EnemyCB                                        = 3,
	MDT_FriendlyLocal                                  = 4,
	MDT_MAX                                            = 5
};*/

// Enum TgClient.TgRewardCenterManager.QuestType
/*enum QuestType
{
	EQT_Daily                                          = 0,
	EQT_Collection                                     = 1,
	EQT_Special                                        = 2,
	EQT_Training                                       = 3,
	EQT_MAX                                            = 4
};*/

// Enum TgClient.TgStreamManager.STREAMTYPE
/*enum STREAMTYPE
{
	VST_NONE                                           = 0,
	VST_HIREZ                                          = 1,
	VST_TWITCH                                         = 2,
	VST_TRAINING                                       = 3,
	VST_COMMUNITY                                      = 4,
	VST_NEWS                                           = 5,
	VST_MAX                                            = 6
};*/

// Enum TgClient.TgSystemNotificationManager.ESystemMessageType
/*enum ESystemMessageType
{
	ESMT_Notification                                  = 0,
	ESMT_Unlock                                        = 1,
	ESMT_PartyInvite                                   = 2,
	ESMT_FriendRequest                                 = 3,
	ESMT_ClanInvite                                    = 4,
	ESMT_Achievement                                   = 5,
	ESMT_MAX                                           = 6
};*/

// Enum TgClient.TgSystemNotificationManager.ESystemMessageSubType
/*enum ESystemMessageSubType
{
	ESMST_None                                         = 0,
	ESMST_Quest                                        = 1,
	ESMST_MAX                                          = 2
};*/

// Enum TgClient.TgSystemNotificationManager.ESystemMessageState
/*enum ESystemMessageState
{
	ESMS_Active                                        = 0,
	ESMS_Expired                                       = 1,
	ESMS_Accepted                                      = 2,
	ESMS_Rejected                                      = 3,
	ESMS_MAX                                           = 4
};*/

// Enum TgClient.TgSystemNotificationManager.ENotificationType
/*enum ENotificationType
{
	ENT_Party                                          = 0,
	ENT_MESSAGE                                        = 1,
	ENT_QueueInvite                                    = 2,
	ENT_FriendInvite                                   = 3,
	ENT_ClanInvite                                     = 4,
	ENT_MAX                                            = 5
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class TgClient.TgBrowserManager
// 0x0074 (0x00B0 - 0x003C)
class UTgBrowserManager : public UObject
{
public:
	struct FString                                     URLGold;                                          		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     URLCreateAccount;                                 		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     URLRecoverPassword;                               		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     URLRecoverUsername;                               		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     URLGodPack;                                       		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     URLFacebookPromo;                                 		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     URLTwitterPromo;                                  		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     URLRecruitPromo;                                  		// 0x0090 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     URLReferLinkup;                                   		// 0x009C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTgGfxBrowser*                               m_container;                                      		// 0x00A8 (0x0004) [0x0000000000000000]              
	class UTgGameMoviePlayer*                          m_pMovie;                                         		// 0x00AC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3210 );

		return pClassPointer;
	};

	void eventOpenWebPage ( int pageType, unsigned long bExternal, unsigned long bShowNavButtons, unsigned long bAddLang );
	struct FString GetURLByPageType ( int pageType );
	void eventOpenWebPageWithTarget ( int pageType, struct FString urlTarget, unsigned long bExternal, unsigned long bShowNavButtons );
	void SetContainer ( class UTgGfxBrowser* container );
	void ResizeView ( );
	void Close ( );
	void OpenVideo ( struct FString URL );
	void OpenURL ( struct FString URL, unsigned long bShowNavButtons );
	void ExternalOpenURL ( struct FString URL, unsigned long bAddLang );
	bool IsBrowserLoaded ( );
};

UClass* UTgBrowserManager::pClassPointer = NULL;

// Class TgClient.TgChatData
// 0x007C (0x00B8 - 0x003C)
class UTgChatData : public UObject
{
public:
	int                                                m_nId;                                            		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                m_nSoundId;                                       		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                m_nChannel;                                       		// 0x0044 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bWarning : 1;                                   		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bFeedback : 1;                                  		// 0x0048 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bHideSender : 1;                                		// 0x0048 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bNew : 1;                                       		// 0x0048 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bIsVGS : 1;                                     		// 0x0048 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      m_bOnlyIfOpen : 1;                                		// 0x0048 (0x0004) [0x0000000000000000] [0x00000020] 
	struct FString                                     m_sSender;                                        		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sMessage;                                       		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sTimestamp;                                     		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sSenderColor;                                   		// 0x0070 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sSenderClass;                                   		// 0x007C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sMessageColor;                                  		// 0x0088 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_ColorVGS;                                       		// 0x0094 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_ColorWarn;                                      		// 0x00A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sWarningToken;                                  		// 0x00AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3211 );

		return pClassPointer;
	};

	struct FString eventTokenReplace ( struct FString Message, struct FString Token, struct FString sValue );
	bool eventCheckWarning ( struct FString Message );
};

UClass* UTgChatData::pClassPointer = NULL;

// Class TgClient.TgClientHUD
// 0x002C (0x04A8 - 0x047C)
class ATgClientHUD : public ATgHUD
{
public:
	struct FPointer                                    m_pTgCallbackDevice;                              		// 0x047C (0x0004) [0x0000000000001000]              ( CPF_Native )
	TArray< class UTgMoviePlayer* >                    m_MoviePlayers;                                   		// 0x0480 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class UTgGameMoviePlayer*                          m_GameMP;                                         		// 0x048C (0x0004) [0x0000000000100000]              
	struct FString                                     m_BulletToken;                                    		// 0x0490 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __DelegateOnMarshalEvent__Delegate;               		// 0x049C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3212 );

		return pClassPointer;
	};

	struct FString eventGetBulletPoint ( int Index, struct FString Message );
	int eventGetGameState ( );
	void OnEscapePressed ( );
	void ToggleScene ( struct FString SceneName );
	void UnloadScene ( struct FString SceneName );
	void LoadScene ( struct FString SceneName );
	void eventTick ( float DeltaTime );
	void PostBeginPlay ( );
	void ToggleHUDScene ( struct FString SceneName );
	void ToggleHUD ( );
	void TestDidIt ( int nActivityId, int nCount, int n_goalID );
	void UpdateSpectatorSettingsMenu ( );
	void UpdateKeyBindSettingsMenu ( int settingtype );
	void UpdateSpecKeyDisplay ( struct FString Key );
	void UpdateKeyDisplay ( struct FString Key );
	void gfxProcessSound ( struct FName aThemeName, struct FName aEventName );
	bool IsInGame ( );
	bool IsLoggedIn ( );
	class UTgDataGroup_Settings* GetSettingsData ( );
	class UTgDataGroup_EOMLobby* GetEOMLobbyData ( );
	class UTgDataGroup_Lobby* GetLobbyData ( );
	class UTgDataGroup_Game* GetGameData ( );
	class UTgGameDataHandler* GetDataHandler ( );
	void OnMarshalEvent ( struct FPointer pMarEvent );
	void UnregisterMarshalCallback ( );
	bool RegisterMarshalCallback ( );
	void TutorialMessage ( int msgId, unsigned long bTips );
	void ResetViewCenterPoint ( );
	void SetViewCenterPoint ( float X, float Y, float fScale );
	void DisplayBadConnectionAlert ( );
	void InitMainMoviePlayer ( );
	void ShowCursor ( unsigned long bShow, unsigned long bUpdateCapture );
	void CloseMovie ( class UTgMoviePlayer* mp, unsigned long bUnload );
	class UTgMoviePlayer* CreateMovie ( class UClass* MovieClass, unsigned long bAutoFocus, unsigned long bCaptureInput, unsigned char TimingMode );
	void UnregisterEngineCallbacks ( );
	void RegisterEngineCallbacks ( );
	void DelegateOnMarshalEvent ( struct FPointer pMarEvent );
};

UClass* ATgClientHUD::pClassPointer = NULL;

// Class TgClient.TgDataChunk
// 0x003C (0x00BC - 0x0080)
class UTgDataChunk : public UGFxObject
{
public:
	class UTgDataHandler*                              m_DataHandler;                                    		// 0x0080 (0x0004) [0x0000000000000000]              
	class UTgDataChunk*                                m_ParentChunk;                                    		// 0x0084 (0x0004) [0x0000000000000000]              
	TArray< struct FDataField >                        m_DataList;                                       		// 0x0088 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< class UTgDataChunk* >                      m_ChildChunks;                                    		// 0x0094 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bIsDirty : 1;                                   		// 0x00A0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bIsSubscribed : 1;                              		// 0x00A0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bClearOnMapChange : 1;                          		// 0x00A0 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bForceImmediateUpdates : 1;                     		// 0x00A0 (0x0004) [0x0000000000000000] [0x00000008] 
	struct FScriptDelegate                             __usc_Subscribe_Delegate__Delegate;               		// 0x00A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __usc_Unsubscribe_Delegate__Delegate;             		// 0x00B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3213 );

		return pClassPointer;
	};

	void usc_Unsubscribe ( );
	void usc_Subscribe ( );
	void usc_Unsubscribe_Delegate ( );
	void usc_Subscribe_Delegate ( );
	class ATgPlayerController* GetPlayerController ( );
	void NotifyMapChange ( );
	bool IsSubscribed ( );
	void SetDirty ( );
	bool GetField ( struct FString FieldName, struct FASValue* NewValue );
	bool SetField ( struct FString FieldName, unsigned long bCreateIfMissing, struct FASValue* NewValue );
	void AddField ( struct FString FieldName, struct FASValue* NewValue );
	void ClearDelegates ( );
	void SetDelegates ( );
	void RemoveChild ( class UTgDataChunk* Child, unsigned long bClearDelegates );
	void AddChild ( class UTgDataChunk* Child );
	void DataUpdateEvent ( );
	void Update ( float DeltaTime, unsigned long bSkipCallback );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgDataChunk::pClassPointer = NULL;

// Class TgClient.TgDataHandler
// 0x001C (0x009C - 0x0080)
class UTgDataHandler : public UGFxObject
{
public:
	class UTgMoviePlayer*                              m_MP;                                             		// 0x0080 (0x0004) [0x0000000000000000]              
	TArray< class UTgDataChunk* >                      m_DataChunkList;                                  		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UTgDataChunk* >                      m_ChunksPendingDispatch;                          		// 0x0090 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3214 );

		return pClassPointer;
	};

	void NotifyMapChange ( );
	void QueueDirtyChunks ( class UTgDataChunk* Node );
	void Update ( float DeltaTime, unsigned long bImmediate );
	void InitializeDataHandler ( class UTgMoviePlayer* mp );
};

UClass* UTgDataHandler::pClassPointer = NULL;

// Class TgClient.TgGameLaunch
// 0x001C (0x03B8 - 0x039C)
class ATgGameLaunch : public AGameInfo
{
public:
	struct FString                                     LoginName;                                        		// 0x039C (0x000C) [0x0000000000444000]              ( CPF_Config | CPF_GlobalConfig | CPF_NeedCtorLink )
	struct FString                                     LoginPwd;                                         		// 0x03A8 (0x000C) [0x0000000000444000]              ( CPF_Config | CPF_GlobalConfig | CPF_NeedCtorLink )
	unsigned long                                      SaveLoginName : 1;                                		// 0x03B4 (0x0004) [0x0000000000044000] [0x00000001] ( CPF_Config | CPF_GlobalConfig )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3215 );

		return pClassPointer;
	};

};

UClass* ATgGameLaunch::pClassPointer = NULL;

// Class TgClient.TgGameViewportClient
// 0x0010 (0x014C - 0x013C)
class UTgGameViewportClient : public UPComGameViewportClient
{
public:
	TArray< class UTgObjectReferencer* >               m_DeferredManifests;                              		// 0x013C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_dragging : 1;                                   		// 0x0148 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_wasMaximized : 1;                               		// 0x0148 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3216 );

		return pClassPointer;
	};

	void eventGetSubtitleRegion ( struct FVector2D* MinPos, struct FVector2D* MaxPos );
	void eventPostRender ( class UCanvas* Canvas );
	void eventGameSessionEnded ( );
	bool IsGfxMovieCapturingMouseInput ( );
	void NativeGameSessionEnded ( );
	void DrawTransition ( class UCanvas* Canvas );
};

UClass* UTgGameViewportClient::pClassPointer = NULL;

// Class TgClient.TgGFxObject
// 0x0000 (0x0080 - 0x0080)
class UTgGFxObject : public UGFxObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3217 );

		return pClassPointer;
	};

};

UClass* UTgGFxObject::pClassPointer = NULL;

// Class TgClient.TgGfxScene
// 0x00D8 (0x0158 - 0x0080)
class UTgGfxScene : public UTgGFxObject
{
public:
	unsigned long                                      m_bInitialized : 1;                               		// 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bDisableBrowserInput : 1;                       		// 0x0080 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     m_SceneName;                                      		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_IconName;                                       		// 0x0090 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_Focused;                                        		// 0x009C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_DataName;                                       		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_ActionName;                                     		// 0x00B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_Disabled;                                       		// 0x00C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_Selected;                                       		// 0x00CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_Click;                                          		// 0x00D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_RollOver;                                       		// 0x00E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_RollOut;                                        		// 0x00F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_Change;                                         		// 0x00FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_TextChange;                                     		// 0x0108 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  m_Data;                                           		// 0x0114 (0x0004) [0x0000000000000000]              
	class UTgGameMoviePlayer*                          m_pMovie;                                         		// 0x0118 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           m_bScreensToUnload;                               		// 0x011C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_bScreensToLoad;                                 		// 0x0128 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FArray_Mirror                               MctsCallbackListeners;                            		// 0x0134 (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FArray_Mirror                               UserInterfaceListeners;                           		// 0x0140 (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FScriptDelegate                             __DelegateGFxData__Delegate;                      		// 0x014C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3218 );

		return pClassPointer;
	};

	void eventSendGFxData ( class UGFxObject* Data );
	void Uninitialize ( );
	void Initialize ( class UTgGameMoviePlayer* pMoviePlayer );
	void ReceiveGFxData ( class UGFxObject* Data );
	void DelegateGFxData ( class UGFxObject* Data );
};

UClass* UTgGfxScene::pClassPointer = NULL;

// Class TgClient.TgGfxAchievementPopup
// 0x0000 (0x0158 - 0x0158)
class UTgGfxAchievementPopup : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3219 );

		return pClassPointer;
	};

	void eventQueueAchievement ( );
	void asc_QueueAchievement ( );
	void Initialize ( class UTgGameMoviePlayer* pMoviePlayer );
};

UClass* UTgGfxAchievementPopup::pClassPointer = NULL;

// Class TgClient.TgGfxAchievementSelection
// 0x0010 (0x0168 - 0x0158)
class UTgGfxAchievementSelection : public UTgGfxScene
{
public:
	int                                                m_requestedPlayerId;                              		// 0x0158 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __USC_ApplySelections_Delegate__Delegate;         		// 0x015C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3220 );

		return pClassPointer;
	};

	void eventUpdateSelectedAchievements ( );
	void ASC_UpdateSelectedAchievements ( );
	void eventUpdateScreen ( );
	void ASC_UpdateScreen ( );
	void USC_ApplySelections ( int as1, int as2, int as3, int as4 );
	void USC_ApplySelections_Delegate ( int as1, int as2, int as3, int as4 );
	void Uninitialize ( );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
};

UClass* UTgGfxAchievementSelection::pClassPointer = NULL;

// Class TgClient.TgGfxAcquisitionPopup
// 0x0000 (0x0158 - 0x0158)
class UTgGfxAcquisitionPopup : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3221 );

		return pClassPointer;
	};

	void eventDoShowAcquisition ( class UGFxObject* Data );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
	void ShowAcquisition ( class UGFxObject* Data );
};

UClass* UTgGfxAcquisitionPopup::pClassPointer = NULL;

// Class TgClient.TgGfxBooster
// 0x000C (0x0164 - 0x0158)
class UTgGfxBooster : public UTgGfxScene
{
public:
	struct FScriptDelegate                             __USC_ShowPurchasePopup_Delegate__Delegate;       		// 0x0158 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3222 );

		return pClassPointer;
	};

	void USC_ShowPurchasePopup ( int ItemId, int nQuantity );
	void USC_ShowPurchasePopup_Delegate ( int ItemId, int nQuantity );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
};

UClass* UTgGfxBooster::pClassPointer = NULL;

// Class TgClient.TgGfxBrowser
// 0x0024 (0x017C - 0x0158)
class UTgGfxBrowser : public UTgGfxScene
{
public:
	class UGFxObject*                                  m_browserFrame;                                   		// 0x0158 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  m_browserShape;                                   		// 0x015C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bBrowserOpen : 1;                               		// 0x0160 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bBrowserLoading : 1;                            		// 0x0160 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bAutoClose : 1;                                 		// 0x0160 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bDrawBorder : 1;                                		// 0x0160 (0x0004) [0x0000000000000000] [0x00000008] 
	struct FScriptDelegate                             __USC_OnResize_Delegate__Delegate;                		// 0x0164 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_OnNavigate_Delegate__Delegate;              		// 0x0170 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3223 );

		return pClassPointer;
	};

	void eventSetControls ( unsigned long prevDisabled, unsigned long nextDisabled );
	void ASC_SetControls ( unsigned long prevDisabled, unsigned long nextDisabled );
	void eventToggleControls ( unsigned long showNav );
	void ASC_ToggleControls ( unsigned long showNav );
	void USC_OnNavigate ( int navId );
	void USC_OnNavigate_Delegate ( int navId );
	void USC_OnResize ( );
	void USC_OnResize_Delegate ( );
	void Uninitialize ( );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
};

UClass* UTgGfxBrowser::pClassPointer = NULL;

// Class TgClient.TgGfxChallengeList
// 0x01A0 (0x02F8 - 0x0158)
class UTgGfxChallengeList : public UTgGfxScene
{
public:
	class UTgGFxObject*                                m_CustomGroup;                                    		// 0x0158 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_CustomTitle;                                    		// 0x015C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_CustomInput;                                    		// 0x0160 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_CustomHeader[ 0x5 ];                            		// 0x0164 (0x0014) [0x0000000000000000]              
	class UTgGFxObject*                                m_ServerGroup;                                    		// 0x0178 (0x0004) [0x0000000000000000]              
	struct FServerButton                               m_ServerBtns[ 0x11 ];                             		// 0x017C (0x0088) [0x0000000000000000]              
	class UTgGFxObject*                                m_JoinButton;                                     		// 0x0204 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_CreateButton;                                   		// 0x0208 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_CloseButton;                                    		// 0x020C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_RefreshButton;                                  		// 0x0210 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_RegionDropDown;                                 		// 0x0214 (0x0004) [0x0000000000000000]              
	TArray< float >                                    m_RegionValues;                                   		// 0x0218 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTgGFxObject*                                m_FilterPrivateBtn;                               		// 0x0224 (0x0004) [0x0000000000000000]              
	struct FMatchDetails                               m_MatchDetails;                                   		// 0x0228 (0x002C) [0x0000000000000000]              
	class UTgGFxObject*                                m_PlayerList;                                     		// 0x0254 (0x0004) [0x0000000000000000]              
	struct FLabelValuePair                             m_QueuedPlayers[ 0xA ];                           		// 0x0258 (0x0050) [0x0000000000000000]              
	struct FString                                     m_sSearch;                                        		// 0x02A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sSearchField;                                   		// 0x02B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              m_fServerRequestTimer;                            		// 0x02C0 (0x0004) [0x0000000000000000]              
	int                                                m_ServerScrollPosition;                           		// 0x02C4 (0x0004) [0x0000000000000000]              
	int                                                m_SelectedServerIndex;                            		// 0x02C8 (0x0004) [0x0000000000000000]              
	float                                              m_fServerClickTimer;                              		// 0x02CC (0x0004) [0x0000000000000000]              
	TArray< struct FCustomServer >                     m_ServerList;                                     		// 0x02D0 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_FilteredServerList;                             		// 0x02DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sSelectedGame;                                  		// 0x02E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bIsCreating : 1;                                		// 0x02F4 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3224 );

		return pClassPointer;
	};

	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
};

UClass* UTgGfxChallengeList::pClassPointer = NULL;

// Class TgClient.TgGfxChallengeLobby
// 0x050C (0x0664 - 0x0158)
class UTgGfxChallengeLobby : public UTgGfxScene
{
public:
	struct FString                                     m_lsTeamName1;                                    		// 0x0158 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsTeamName2;                                    		// 0x0164 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsAddBot;                                       		// 0x0170 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsJoin;                                         		// 0x017C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsInvite;                                       		// 0x0188 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsStart;                                        		// 0x0194 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsCancel;                                       		// 0x01A0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLeave;                                        		// 0x01AC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsInvites;                                      		// 0x01B8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsInvitePopupTitle;                             		// 0x01C4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsInvitePopupConfirm;                           		// 0x01D0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLauncingTitle;                                		// 0x01DC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsStatusPending;                                		// 0x01E8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsStatusAccepted;                               		// 0x01F4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsStatusRejected;                               		// 0x0200 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsBotName;                                      		// 0x020C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsFillWithBots;                                 		// 0x0218 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FPlayerSlot                                 m_Team1Slots[ 0x6 ];                              		// 0x0224 (0x01B0) [0x0000000000000000]              
	struct FPlayerSlot                                 m_Team2Slots[ 0x6 ];                              		// 0x03D4 (0x01B0) [0x0000000000000000]              
	struct FMatchDetails                               m_MatchDetails;                                   		// 0x0584 (0x002C) [0x0000000000000000]              
	class UTgGFxObject*                                m_PlayerList;                                     		// 0x05B0 (0x0004) [0x0000000000000000]              
	struct FLabelValuePair                             m_InvitedPlayers[ 0x9 ];                          		// 0x05B4 (0x0048) [0x0000000000000000]              
	class UTgGFxObject*                                m_LeaveButton;                                    		// 0x05FC (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_StartButton;                                    		// 0x0600 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_InviteButton;                                   		// 0x0604 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_FillBotsButton;                                 		// 0x0608 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_MatchStatedTF;                                  		// 0x060C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bIsHost : 1;                                    		// 0x0610 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bHasJoinedLobbyChat : 1;                        		// 0x0610 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bLockBotUpdates : 1;                            		// 0x0610 (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                m_nTeamSize;                                      		// 0x0614 (0x0004) [0x0000000000000000]              
	int                                                m_ScrollPosition;                                 		// 0x0618 (0x0004) [0x0000000000000000]              
	TArray< struct FPlayerInvite >                     m_Invites;                                        		// 0x061C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FBotData >                          m_AvailableBots;                                  		// 0x0628 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_BotDifficultyVVIds;                             		// 0x0634 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_BotDifficultyVVStrings;                         		// 0x0640 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_PendingBotIds;                                  		// 0x064C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_PendingBotOnMyTeamIds;                          		// 0x0658 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3225 );

		return pClassPointer;
	};

	int SortDifficulties ( struct FBotDifficultyOption A, struct FBotDifficultyOption B );
	int SortByBotName ( struct FBotData A, struct FBotData B );
	void eventSortBots ( );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Uninitialize ( );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
};

UClass* UTgGfxChallengeLobby::pClassPointer = NULL;

// Class TgClient.TgGfxChallengeOptions
// 0x00E4 (0x023C - 0x0158)
class UTgGfxChallengeOptions : public UTgGfxScene
{
public:
	struct FString                                     m_lsRegion;                                       		// 0x0158 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsDefaultGameName;                              		// 0x0164 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class UTgGFxObject*                                m_MatchSelection;                                 		// 0x0170 (0x0004) [0x0000000000000000]              
	struct FMatchButton                                m_MatchBtns[ 0x6 ];                               		// 0x0174 (0x0030) [0x0000000000000000]              
	int                                                m_matchQueues[ 0x6 ];                             		// 0x01A4 (0x0018) [0x0000000000000000]              
	class UTgGFxObject*                                m_MatchOptions;                                   		// 0x01BC (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_AllowSpectatorsOption;                          		// 0x01C0 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_AllowMinionsOption;                             		// 0x01C4 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_LowSpectateDelayOption;                         		// 0x01C8 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_UsernameInput;                                  		// 0x01CC (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_PasswordInput;                                  		// 0x01D0 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_SpecPasswordInput;                              		// 0x01D4 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_StartGoldInput;                                 		// 0x01D8 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_GodPickDropdown;                                		// 0x01DC (0x0004) [0x0000000000000000]              
	TArray< float >                                    m_GodPickValues;                                  		// 0x01E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTgGFxObject*                                m_VersusDropdown;                                 		// 0x01EC (0x0004) [0x0000000000000000]              
	TArray< float >                                    m_VersusPickValues;                               		// 0x01F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTgGFxObject*                                m_StartingLevelDropdown;                          		// 0x01FC (0x0004) [0x0000000000000000]              
	TArray< float >                                    m_LevelPickValues;                                		// 0x0200 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTgGFxObject*                                m_RegionDropDown;                                 		// 0x020C (0x0004) [0x0000000000000000]              
	TArray< float >                                    m_RegionValues;                                   		// 0x0210 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTgGFxObject*                                m_CreateGameBtn;                                  		// 0x021C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_CloseBtn;                                       		// 0x0220 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_SelectedMatch;                                  		// 0x0224 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_SelectedMatchTitle;                             		// 0x0228 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_SelectedMatchDescription;                       		// 0x022C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_SelectedMatchIcon;                              		// 0x0230 (0x0004) [0x0000000000000000]              
	int                                                m_SelectedQueueId;                                		// 0x0234 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bIsCreatingGame : 1;                            		// 0x0238 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3226 );

		return pClassPointer;
	};

	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
};

UClass* UTgGfxChallengeOptions::pClassPointer = NULL;

// Class TgClient.TgGfxCharacterBuilder
// 0x0C44 (0x0D9C - 0x0158)
class UTgGfxCharacterBuilder : public UTgGfxScene
{
public:
	struct FString                                     m_lsItems;                                        		// 0x0158 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsActives;                                      		// 0x0164 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsConsumables;                                  		// 0x0170 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsPassive;                                      		// 0x017C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsActivated;                                    		// 0x0188 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsAbilities;                                    		// 0x0194 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsSkip;                                         		// 0x01A0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsSaveItems;                                    		// 0x01AC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsSaveAbilities;                                		// 0x01B8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	int                                                m_playerClassId;                                  		// 0x01C4 (0x0004) [0x0000000000000000]              
	int                                                m_nSelectedTab;                                   		// 0x01C8 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_Tabs[ 0x2 ];                                    		// 0x01CC (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_SaveButton;                                     		// 0x01D4 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_ClearButton;                                    		// 0x01D8 (0x0004) [0x0000000000000000]              
	class UTgGfxVendorData*                            m_VendorData;                                     		// 0x01DC (0x0004) [0x0000000000000000]              
	int                                                m_nSelectedItem;                                  		// 0x01E0 (0x0004) [0x0000000000000000]              
	int                                                m_nHighlightIndex;                                		// 0x01E4 (0x0004) [0x0000000000000000]              
	int                                                m_nItemScrollIndex;                               		// 0x01E8 (0x0004) [0x0000000000000000]              
	TArray< struct FItemBuilderCategory >              m_Categories;                                     		// 0x01EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemBuilderCategory >              m_CustomCategories;                               		// 0x01F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_ShownList;                                      		// 0x0204 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_ShownGrid;                                      		// 0x0210 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nRoleIndex;                                     		// 0x021C (0x0004) [0x0000000000000000]              
	unsigned char                                      m_TipType;                                        		// 0x0220 (0x0001) [0x0000000000000000]              
	int                                                m_nPreviewTipIndex;                               		// 0x0224 (0x0004) [0x0000000000000000]              
	float                                              m_fTipWaitTimer;                                  		// 0x0228 (0x0004) [0x0000000000000000]              
	float                                              m_fTipWaitDuration;                               		// 0x022C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bIsCustomRole : 1;                              		// 0x0230 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bIsSubFilter : 1;                               		// 0x0230 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bProfileModified : 1;                           		// 0x0230 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bAbilitiesModified : 1;                         		// 0x0230 (0x0004) [0x0000000000000000] [0x00000008] 
	int                                                m_nCustomRoleIndex;                               		// 0x0234 (0x0004) [0x0000000000000000]              
	TArray< struct FPreviewItem >                      m_PreviewItemData;                                		// 0x0238 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPreviewItem >                      m_PreviewActiveData;                              		// 0x0244 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPreviewItem >                      m_PreviewConsumableData;                          		// 0x0250 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nFilterIndex;                                   		// 0x025C (0x0004) [0x0000000000000000]              
	int                                                m_nFocusedItemIndex;                              		// 0x0260 (0x0004) [0x0000000000000000]              
	int                                                m_nFocusedItemCategory;                           		// 0x0264 (0x0004) [0x0000000000000000]              
	int                                                m_bIsFocusingGridItem;                            		// 0x0268 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_ItemView;                                       		// 0x026C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_BuildPreview;                                   		// 0x0270 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_RoleDropDown;                                   		// 0x0274 (0x0004) [0x0000000000000000]              
	struct FItemDisplay                                m_ListItem[ 0xC ];                                		// 0x0278 (0x0300) [0x0000000000000000]              
	struct FItemDisplay                                m_GridItem[ 0x10 ];                               		// 0x0578 (0x0400) [0x0000000000000000]              
	class UTgGFxObject*                                m_Header[ 0x4 ];                                  		// 0x0978 (0x0010) [0x0000000000000000]              
	class UTgGFxObject*                                m_HeaderTF[ 0x4 ];                                		// 0x0988 (0x0010) [0x0000000000000000]              
	class UTgGFxObject*                                m_HeaderBlock[ 0x4 ];                             		// 0x0998 (0x0010) [0x0000000000000000]              
	struct FBuildItemDisplay                           m_PreviewItems[ 0x6 ];                            		// 0x09A8 (0x0030) [0x0000000000000000]              
	struct FBuildItemDisplay                           m_PreviewActives[ 0x2 ];                          		// 0x09D8 (0x0010) [0x0000000000000000]              
	struct FBuildItemDisplay                           m_PreviewConsumables[ 0x2 ];                      		// 0x09E8 (0x0010) [0x0000000000000000]              
	int                                                m_nSelectedLevel;                                 		// 0x09F8 (0x0004) [0x0000000000000000]              
	int                                                m_nSelectedAbility;                               		// 0x09FC (0x0004) [0x0000000000000000]              
	struct FLevelInfo                                  m_nLevelAbilities[ 0x14 ];                        		// 0x0A00 (0x00A0) [0x0000000000000000]              
	int                                                m_nAbilityLevels[ 0x4 ];                          		// 0x0AA0 (0x0010) [0x0000000000000000]              
	struct FString                                     m_AbilityIcons[ 0x4 ];                            		// 0x0AB0 (0x0030) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class UTgGFxObject*                                m_AbilityPreview;                                 		// 0x0AE0 (0x0004) [0x0000000000000000]              
	struct FAbilitySelectionButton                     m_PreviewAbilities[ 0x5 ];                        		// 0x0AE4 (0x00A0) [0x0000000000000000]              
	class UTgGFxObject*                                m_AbilitiesView;                                  		// 0x0B84 (0x0004) [0x0000000000000000]              
	struct FAbilitySelectionButton                     m_AbilityBtns[ 0x4 ];                             		// 0x0B88 (0x0080) [0x0000000000000000]              
	struct FAbilityRow                                 m_AbilityRows[ 0x14 ];                            		// 0x0C08 (0x0190) [0x0000000000000000]              
	class UTgGFxObject*                                m_AbilitySkip;                                    		// 0x0D98 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3227 );

		return pClassPointer;
	};

	void ReceiveGFxData ( class UGFxObject* pObj );
	void Uninitialize ( );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
};

UClass* UTgGfxCharacterBuilder::pClassPointer = NULL;

// Class TgClient.TgGfxChatModal
// 0x0000 (0x0158 - 0x0158)
class UTgGfxChatModal : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3228 );

		return pClassPointer;
	};

	void eventSetChannelMembers ( class UGFxObject* Data );
	void UpdateChannelMembers ( class UGFxObject* Obj );
	void Uninitialize ( );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
};

UClass* UTgGfxChatModal::pClassPointer = NULL;

// Class TgClient.TgGfxClanAdmin
// 0x0048 (0x01A0 - 0x0158)
class UTgGfxClanAdmin : public UTgGfxScene
{
public:
	TArray< int >                                      m_RegionList;                                     		// 0x0158 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_JoinTypeList;                                   		// 0x0164 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_UpdateClanNameAndTag_Delegate__Delegate;    		// 0x0170 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_UpdateJoinTypeRegion_Delegate__Delegate;    		// 0x017C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_AcceptClanApp_Delegate__Delegate;           		// 0x0188 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_DeclineClanApp_Delegate__Delegate;          		// 0x0194 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3229 );

		return pClassPointer;
	};

	void Initialize ( class UTgGameMoviePlayer* theMovie );
	void eventUpdateClanNameChange ( );
	void ASC_UpdateClanNameChange ( );
	void eventUpdateApplicationData ( );
	void ASC_UpdateApplicationData ( );
	void eventUpdatePlayerInvites ( );
	void ASC_UpdatePlayerInvites ( );
	void eventUpdateClanData ( );
	void ASC_UpdateClanData ( );
	void USC_DeclineClanApp ( int nAppId );
	void USC_AcceptClanApp ( int nAppId );
	void USC_UpdateJoinTypeRegion ( int nJoinTypeId, int nRegionId );
	void USC_UpdateClanNameAndTag ( struct FString sName, struct FString sTag );
	void USC_DeclineClanApp_Delegate ( int nAppId );
	void USC_AcceptClanApp_Delegate ( int nAppId );
	void USC_UpdateJoinTypeRegion_Delegate ( int nJoinTypeId, int nRegionId );
	void USC_UpdateClanNameAndTag_Delegate ( struct FString sName, struct FString sTag );
};

UClass* UTgGfxClanAdmin::pClassPointer = NULL;

// Class TgClient.TgGfxClanCreation
// 0x0048 (0x01A0 - 0x0158)
class UTgGfxClanCreation : public UTgGfxScene
{
public:
	struct FScriptDelegate                             __USC_CreateClan_Delegate__Delegate;              		// 0x0158 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_GetInvitesData_Delegate__Delegate;          		// 0x0164 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_AcceptClanRequest_Delegate__Delegate;       		// 0x0170 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_CancelClanRequest_Delegate__Delegate;       		// 0x017C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_GetRegionListData_Delegate__Delegate;       		// 0x0188 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_GotoClanList_Delegate__Delegate;            		// 0x0194 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3230 );

		return pClassPointer;
	};

	void eventReinit ( );
	void ASC_Reinit ( );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
	void USC_GotoClanList ( );
	void USC_GetRegionListData ( );
	void USC_CancelClanRequest ( int nClanId );
	void USC_AcceptClanRequest ( int nClanId );
	void USC_GetInvitesData ( );
	void USC_CreateClan ( struct FString sClanName, struct FString sClanTag, int nRegionId, int nRecruitmentType );
	void USC_GotoClanList_Delegate ( );
	void USC_GetRegionListData_Delegate ( );
	void USC_CancelClanRequest_Delegate ( int nClanId );
	void USC_AcceptClanRequest_Delegate ( int nClanId );
	void USC_GetInvitesData_Delegate ( );
	void USC_CreateClan_Delegate ( );
};

UClass* UTgGfxClanCreation::pClassPointer = NULL;

// Class TgClient.TgGfxClanIconPicker
// 0x000C (0x0164 - 0x0158)
class UTgGfxClanIconPicker : public UTgGfxScene
{
public:
	struct FScriptDelegate                             __USC_SelectIcon_Delegate__Delegate;              		// 0x0158 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3231 );

		return pClassPointer;
	};

	void Initialize ( class UTgGameMoviePlayer* pMP );
	void USC_SelectIcon ( int nIconItemId );
	void USC_SelectIcon_Delegate ( );
};

UClass* UTgGfxClanIconPicker::pClassPointer = NULL;

// Class TgClient.TgGfxClanList
// 0x002C (0x0184 - 0x0158)
class UTgGfxClanList : public UTgGfxScene
{
public:
	int                                                m_nApplicationId;                                 		// 0x0158 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bJustApplied : 1;                               		// 0x015C (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< int >                                      m_RegionList;                                     		// 0x0160 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_SearchClans_Delegate__Delegate;             		// 0x016C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_ApplyToClan_Delegate__Delegate;             		// 0x0178 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3232 );

		return pClassPointer;
	};

	void Initialize ( class UTgGameMoviePlayer* theMovie );
	void eventUpdateApplicationData ( );
	void ASC_UpdateApplicationData ( );
	void eventUpdateClanList ( );
	void ASC_UpdateClanList ( );
	void USC_ApplyToClan ( int nClanId, unsigned long bWithMessage );
	void USC_SearchClans ( struct FString sSearchString, int nJoinTypeId, int nRegionId, unsigned long bRecommendedOnly );
	void USC_ApplyToClan_Delegate ( int nClanId, unsigned long bWithMessage );
	void USC_SearchClans_Delegate ( struct FString sSearchString, int nJoinTypeId, int nRegionId, unsigned long bRecommendedOnly );
};

UClass* UTgGfxClanList::pClassPointer = NULL;

// Class TgClient.TgGfxClanManagement
// 0x00BC (0x0214 - 0x0158)
class UTgGfxClanManagement : public UTgGfxScene
{
public:
	unsigned long                                      m_bIsOfficer : 1;                                 		// 0x0158 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_nSelectedPlayerId;                              		// 0x015C (0x0004) [0x0000000000000000]              
	struct FString                                     m_lsClanQuit;                                     		// 0x0160 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsClanQuitDesc;                                 		// 0x016C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsUpdateClanTag;                                		// 0x0178 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsUpdateClanTagLabel;                           		// 0x0184 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsTransferClan;                                 		// 0x0190 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsTransferClanLabel;                            		// 0x019C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsDisbandClan;                                  		// 0x01A8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsDisbandClanLabel;                             		// 0x01B4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsDisbandClanRemove;                            		// 0x01C0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_CancelPlayerInvite_Delegate__Delegate;      		// 0x01CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_QuitClan_Delegate__Delegate;                		// 0x01D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_UpdateClanTag_Delegate__Delegate;           		// 0x01E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_InviteToClan_Delegate__Delegate;            		// 0x01F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_ViewProfile_Delegate__Delegate;             		// 0x01FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_ModifyLeader_Delegate__Delegate;            		// 0x0208 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3233 );

		return pClassPointer;
	};

	void Initialize ( class UTgGameMoviePlayer* theMovie );
	void USC_ModifyLeader ( int nPlayerId );
	void USC_ViewProfile ( struct FString sInputValue );
	void USC_InviteToClan ( struct FString sInputValue );
	void USC_UpdateClanTag ( );
	void USC_QuitClan ( );
	void USC_CancelPlayerInvite ( int nPlayerId );
	void USC_ModifyLeader_Delegate ( );
	void USC_ViewProfile_Delegate ( );
	void USC_InviteToClan_Delegate ( );
	void USC_UpdateClanTag_Delegate ( );
	void USC_QuitClan_Delegate ( );
	void USC_CancelPlayerInvite_Delegate ( int nPlayerId );
};

UClass* UTgGfxClanManagement::pClassPointer = NULL;

// Class TgClient.TgGfxDailyReward
// 0x000C (0x0164 - 0x0158)
class UTgGfxDailyReward : public UTgGfxScene
{
public:
	struct FScriptDelegate                             __USC_CollectReward_Delegate__Delegate;           		// 0x0158 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3234 );

		return pClassPointer;
	};

	void Initialize ( class UTgGameMoviePlayer* theMovie );
	void eventUpdateDailyData ( );
	void ASC_UpdateDailyData ( );
	void USC_CollectReward ( );
	void USC_CollectReward_Delegate ( );
};

UClass* UTgGfxDailyReward::pClassPointer = NULL;

// Class TgClient.TgGfxEventLeaderboard
// 0x0018 (0x0170 - 0x0158)
class UTgGfxEventLeaderboard : public UTgGfxScene
{
public:
	struct FPointer                                    pFafNormMarshal;                                  		// 0x0158 (0x0004) [0x0000000000001000]              ( CPF_Native )
	unsigned long                                      requestingData : 1;                               		// 0x015C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      gotFriendsData : 1;                               		// 0x015C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      gotPersonalData : 1;                              		// 0x015C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      gotWorldData : 1;                                 		// 0x015C (0x0004) [0x0000000000000000] [0x00000008] 
	int                                                dataIndex;                                        		// 0x0160 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __USC_RequestEventLeaderboard_Delegate__Delegate; 		// 0x0164 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3235 );

		return pClassPointer;
	};

	bool UpdateFromChunk ( int dataIdx );
	void SetDifficulty ( );
	void ReceivedAllData ( );
	void PopulateLeaderboard ( );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
	void USC_RequestEventLeaderboard ( int EventIdx );
	void USC_RequestEventLeaderboard_Delegate ( int EventIdx );
};

UClass* UTgGfxEventLeaderboard::pClassPointer = NULL;

// Class TgClient.TgGfxEventScene
// 0x030C (0x0464 - 0x0158)
class UTgGfxEventScene : public UTgGfxScene
{
public:
	class UTgGFxObject*                                m_QuestPanel;                                     		// 0x0158 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_QuestInfoPanel;                                 		// 0x015C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_QuestInfoIcon;                                  		// 0x0160 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_QuestInfoCompleted;                             		// 0x0164 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_QuestInfoDesc;                                  		// 0x0168 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_QuestInfoTitle;                                 		// 0x016C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_QuestInfoRewardIcon;                            		// 0x0170 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_QuestInfoRewardTitle;                           		// 0x0174 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_QuestInfoRewardType;                            		// 0x0178 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_QuestInfoRewardSubType;                         		// 0x017C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_QuestInfoStartBtn;                              		// 0x0180 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_QuestInfoStartBtnFX;                            		// 0x0184 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_QuestInfoFailLabel;                             		// 0x0188 (0x0004) [0x0000000000000000]              
	TArray< class UTgGFxObject* >                      m_QuestLocationBtns;                              		// 0x018C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FQuestConnection >                  m_QuestLocationConnections;                       		// 0x0198 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class UTgGFxObject*                                m_InformationPanel;                               		// 0x01A4 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_InformationTitle;                               		// 0x01A8 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_InformationDescription;                         		// 0x01AC (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_InformationIcon;                                		// 0x01B0 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_ItemPanel;                                      		// 0x01B4 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_ItemName;                                       		// 0x01B8 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_ItemSubName;                                    		// 0x01BC (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_ItemType;                                       		// 0x01C0 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_ItemDesc;                                       		// 0x01C4 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_ItemUnlock;                                     		// 0x01C8 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_ItemUnlockFrame;                                		// 0x01CC (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_ItemIcon;                                       		// 0x01D0 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_ItemDisplay;                                    		// 0x01D4 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_ItemOwned;                                      		// 0x01D8 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_ItemRequirement;                                		// 0x01DC (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_ItemCostLabel;                                  		// 0x01E0 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_ItemCost;                                       		// 0x01E4 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_ItemChest;                                      		// 0x01E8 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_ItemChestCount;                                 		// 0x01EC (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_ItemVoicePack;                                  		// 0x01F0 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_ItemChestBtn;                                   		// 0x01F4 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_ItemChestBtnCount;                              		// 0x01F8 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_RewardChestBtn;                                 		// 0x01FC (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_InSceneItem;                                    		// 0x0200 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_Collection;                                     		// 0x0204 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_CollectionTitle;                                		// 0x0208 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_CollectionProgressBar;                          		// 0x020C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_CollectionNextRewardLabel;                      		// 0x0210 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_CollectionNextReward;                           		// 0x0214 (0x0004) [0x0000000000000000]              
	TArray< struct FEventMilestone >                   m_CollectionMilestones;                           		// 0x0218 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FEventMapMarkings >                 m_MapMarkings;                                    		// 0x0224 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_QuestActivities;                                		// 0x0230 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_PurchasedItems;                                 		// 0x023C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FCollectionBonuses >                m_CollectionBonuses;                              		// 0x0248 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FQuestItemRewards >                 m_QuestRewards;                                   		// 0x0254 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FQuestGoal >                        m_QuestGoals;                                     		// 0x0260 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FQuestGoal >                        m_QuestSelections;                                		// 0x026C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sMusicTrack;                                    		// 0x0278 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sLocationContainer;                             		// 0x0284 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sLocalizationName;                              		// 0x0290 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sCameraTag;                                     		// 0x029C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_SceneIds;                                       		// 0x02A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sOwnedString;                                   		// 0x02B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sComingSoonString;                              		// 0x02C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nDefaultItemTypeY;                              		// 0x02CC (0x0004) [0x0000000000000000]              
	int                                                m_nDefaultRewardItemTypeY;                        		// 0x02D0 (0x0004) [0x0000000000000000]              
	int                                                m_nEventRewardChestItemId;                        		// 0x02D4 (0x0004) [0x0000000000000000]              
	int                                                m_nEventRewardChestLootItemId;                    		// 0x02D8 (0x0004) [0x0000000000000000]              
	int                                                m_nNavAction;                                     		// 0x02DC (0x0004) [0x0000000000000000]              
	int                                                m_nEventId;                                       		// 0x02E0 (0x0004) [0x0000000000000000]              
	int                                                m_SelectedItemId;                                 		// 0x02E4 (0x0004) [0x0000000000000000]              
	int                                                m_SelectedItemIndex;                              		// 0x02E8 (0x0004) [0x0000000000000000]              
	int                                                m_nSysCounterId;                                  		// 0x02EC (0x0004) [0x0000000000000000]              
	int                                                m_nQuestActivityId;                               		// 0x02F0 (0x0004) [0x0000000000000000]              
	int                                                m_nEventItemId;                                   		// 0x02F4 (0x0004) [0x0000000000000000]              
	int                                                m_nSelectedQuestIndex;                            		// 0x02F8 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bUsesModels : 1;                                		// 0x02FC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bShowRewardInfo : 1;                            		// 0x02FC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bUseTimeDuration : 1;                           		// 0x02FC (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bAutoJoinQueue : 1;                             		// 0x02FC (0x0004) [0x0000000000000000] [0x00000008] 
	int                                                m_nUseActivityProgression;                        		// 0x0300 (0x0004) [0x0000000000000000]              
	int                                                m_nActivityProgressionValue;                      		// 0x0304 (0x0004) [0x0000000000000000]              
	int                                                m_CachedSelectedIndex[ 0x3 ];                     		// 0x0308 (0x000C) [0x0000000000000000]              
	int                                                m_CachedScrollPositions[ 0x3 ];                   		// 0x0314 (0x000C) [0x0000000000000000]              
	int                                                m_CachedMaxDisplays[ 0x3 ];                       		// 0x0320 (0x000C) [0x0000000000000000]              
	int                                                m_nScrollPosition;                                		// 0x032C (0x0004) [0x0000000000000000]              
	int                                                m_nCurrentSelectedTab;                            		// 0x0330 (0x0004) [0x0000000000000000]              
	int                                                m_nQuestAtSameTime;                               		// 0x0334 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_SelectedItemType;                               		// 0x0338 (0x0001) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_EventBackgroundMIC;                             		// 0x033C (0x0004) [0x0000000000000000]              
	int                                                m_nCurMatTarget;                                  		// 0x0340 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sLoreSection;                                   		// 0x0344 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_MatTargetUnlocks[ 0x20 ];                       		// 0x0350 (0x0080) [0x0000000000000000]              
	int                                                m_MatTargetRewards[ 0x20 ];                       		// 0x03D0 (0x0080) [0x0000000000000000]              
	int                                                m_nLeaderboardEvent;                              		// 0x0450 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sLeaderboardScene;                              		// 0x0454 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nLeaderboardEventQueueId;                       		// 0x0460 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3236 );

		return pClassPointer;
	};

	void eventSceneTick ( float Delta );
	void Uninitialize ( );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
};

UClass* UTgGfxEventScene::pClassPointer = NULL;

// Class TgClient.TgGfxSeasonalEvent
// 0x011C (0x0580 - 0x0464)
class UTgGfxSeasonalEvent : public UTgGfxEventScene
{
public:
	struct FLinearColor                                Zoom1;                                            		// 0x0464 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                Zoom2;                                            		// 0x0474 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                OverviewPan;                                      		// 0x0484 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                JapanPan;                                         		// 0x0494 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                ChinaPan;                                         		// 0x04A4 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                IndiaPan;                                         		// 0x04B4 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                EgyptPan;                                         		// 0x04C4 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                GreecePan;                                        		// 0x04D4 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                RomePan;                                          		// 0x04E4 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                NorsePan;                                         		// 0x04F4 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                MayanPan;                                         		// 0x0504 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                paramZoom;                                        		// 0x0514 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                paramPan;                                         		// 0x0524 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                curZoom;                                          		// 0x0534 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                curPan;                                           		// 0x0544 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                targZoom;                                         		// 0x0554 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                targPan;                                          		// 0x0564 (0x0010) [0x0000000000000000]              
	float                                              speedMultiplier;                                  		// 0x0574 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsSet : 1;                                        		// 0x0578 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              threasholdStop;                                   		// 0x057C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3237 );

		return pClassPointer;
	};

	void eventSceneTick ( float Delta );
};

UClass* UTgGfxSeasonalEvent::pClassPointer = NULL;

// Class TgClient.TgGfxSeasonalEvent2
// 0x0000 (0x0464 - 0x0464)
class UTgGfxSeasonalEvent2 : public UTgGfxEventScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3238 );

		return pClassPointer;
	};

};

UClass* UTgGfxSeasonalEvent2::pClassPointer = NULL;

// Class TgClient.TgGfxFacebookStreamDisplay
// 0x000C (0x0164 - 0x0158)
class UTgGfxFacebookStreamDisplay : public UTgGfxScene
{
public:
	struct FScriptDelegate                             __USC_CheckStreamStatus_Delegate__Delegate;       		// 0x0158 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3239 );

		return pClassPointer;
	};

	void Initialize ( class UTgGameMoviePlayer* theMovie );
	void USC_CheckStreamStatus ( );
	void USC_CheckStreamStatus_Delegate ( );
};

UClass* UTgGfxFacebookStreamDisplay::pClassPointer = NULL;

// Class TgClient.TgGfxFacebookStreamPopup
// 0x0018 (0x0170 - 0x0158)
class UTgGfxFacebookStreamPopup : public UTgGfxScene
{
public:
	class UTgGFxObject*                                m_WebcamCheckbox;                                 		// 0x0158 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_MicrophoneCheckbox;                             		// 0x015C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_AudioCheckbox;                                  		// 0x0160 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_StartButton;                                    		// 0x0164 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_StopButton;                                     		// 0x0168 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bKeepBrowserLoaded : 1;                         		// 0x016C (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3240 );

		return pClassPointer;
	};

	void Uninitialize ( );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
	void ReceiveGFxData ( class UGFxObject* pObj );
};

UClass* UTgGfxFacebookStreamPopup::pClassPointer = NULL;

// Class TgClient.TgGfxFeedback
// 0x0074 (0x01CC - 0x0158)
class UTgGfxFeedback : public UTgGfxScene
{
public:
	struct FString                                     m_lsHeaderServerStability;                        		// 0x0158 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsHeaderMatchmaking;                            		// 0x0164 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsDescriptionServerStability;                   		// 0x0170 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsDescriptionMatchmaking;                       		// 0x017C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsSubmit;                                       		// 0x0188 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsComments;                                     		// 0x0194 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsUnrated;                                      		// 0x01A0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class UTgGFxObject*                                m_Comments;                                       		// 0x01AC (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_RatingBtns[ 0x5 ];                              		// 0x01B0 (0x0014) [0x0000000000000000]              
	class UTgGFxObject*                                m_RatingTF;                                       		// 0x01C4 (0x0004) [0x0000000000000000]              
	int                                                m_nStarRating;                                    		// 0x01C8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3241 );

		return pClassPointer;
	};

	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
};

UClass* UTgGfxFeedback::pClassPointer = NULL;

// Class TgClient.TgGfxFooterMain
// 0x0038 (0x0190 - 0x0158)
class UTgGfxFooterMain : public UTgGfxScene
{
public:
	class UTgGFxObject*                                m_PartyBtn;                                       		// 0x0158 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_FriendsBtn;                                     		// 0x015C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_NotificationBtn;                                		// 0x0160 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_NotificationIndicator;                          		// 0x0164 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_NotificationCount;                              		// 0x0168 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_QuestBtn;                                       		// 0x016C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_QuestIndicator;                                 		// 0x0170 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_QuestCount;                                     		// 0x0174 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __USC_Resize_Delegate__Delegate;                  		// 0x0178 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_AddFriend_Delegate__Delegate;               		// 0x0184 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3242 );

		return pClassPointer;
	};

	void USC_AddFriend ( );
	void USC_AddFriend_Delegate ( );
	void USC_Resize ( struct FString RegionName, class UGFxObject* pObj );
	void USC_Resize_Delegate ( struct FString RegionName, class UGFxObject* pObj );
	void Uninitialize ( );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
};

UClass* UTgGfxFooterMain::pClassPointer = NULL;

// Class TgClient.TgGfxFriendManagement
// 0x019C (0x02F4 - 0x0158)
class UTgGfxFriendManagement : public UTgGfxScene
{
public:
	struct FString                                     m_LastErrorString;                                		// 0x0158 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_SelectedPlayerName;                             		// 0x0164 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_InvitedPlayerName;                              		// 0x0170 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      m_tabId;                                          		// 0x017C (0x0001) [0x0000000000000000]              
	struct FScriptDelegate                             __USC_GetFriendsData_Delegate__Delegate;          		// 0x0180 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_RemoveFriend_Delegate__Delegate;            		// 0x018C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_MessageFriend_Delegate__Delegate;           		// 0x0198 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_SearchByString_Delegate__Delegate;          		// 0x01A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_GetListData_Delegate__Delegate;             		// 0x01B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_InviteFriend_Delegate__Delegate;            		// 0x01BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_CancelInvite_Delegate__Delegate;            		// 0x01C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_AcceptClanInvite_Delegate__Delegate;        		// 0x01D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_CancelClanInvite_Delegate__Delegate;        		// 0x01E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_AcceptFriendRequest_Delegate__Delegate;     		// 0x01EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_AcceptAllFriendRequests_Delegate__Delegate; 		// 0x01F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_CancelFriendRequest_Delegate__Delegate;     		// 0x0204 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_CancelAllFriendRequests_Delegate__Delegate; 		// 0x0210 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_ViewPlayerProfile_Delegate__Delegate;       		// 0x021C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_ViewPlayerClan_Delegate__Delegate;          		// 0x0228 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_SpectatePlayer_Delegate__Delegate;          		// 0x0234 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_PartyInvite_Delegate__Delegate;             		// 0x0240 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_PartyKick_Delegate__Delegate;               		// 0x024C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_RemoveBlocked_Delegate__Delegate;           		// 0x0258 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_AddPlayerNote_Delegate__Delegate;           		// 0x0264 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_InviteFriendByString_Delegate__Delegate;    		// 0x0270 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_BlockByString_Delegate__Delegate;           		// 0x027C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_InviteToClan_Delegate__Delegate;            		// 0x0288 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_UpdateStatusMessage_Delegate__Delegate;     		// 0x0294 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_ToggleDND_Delegate__Delegate;               		// 0x02A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_Resize_Delegate__Delegate;                  		// 0x02AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_AddFriend_Delegate__Delegate;               		// 0x02B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_InviteClan_Delegate__Delegate;              		// 0x02C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_BlockPlayer_Delegate__Delegate;             		// 0x02D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_EditNote_Delegate__Delegate;                		// 0x02DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_OnCurse_Delegate__Delegate;                 		// 0x02E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3243 );

		return pClassPointer;
	};

	void Uninitialize ( );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
	void eventReinit ( );
	void ASC_Reinit ( );
	void eventErrorFeedback ( struct FString ErrMsg );
	void ASC_ErrorFeedback ( struct FString ErrMsg );
	void USC_OnCurse ( struct FString UserName );
	void USC_EditNote ( int nPlayerId );
	void USC_BlockPlayer ( );
	void USC_InviteClan ( );
	void USC_AddFriend ( );
	void USC_Resize ( class UGFxObject* pObj );
	void USC_ToggleDND ( );
	void USC_UpdateStatusMessage ( struct FString sStatus );
	void USC_InviteToClan ( struct FString sPlayerName );
	void USC_BlockByString ( struct FString sPlayerName );
	void USC_InviteFriendByString ( struct FString sPlayerName );
	void USC_AddPlayerNote ( int nPlayerId, struct FString sPlayerNote );
	void USC_RemoveBlocked ( int nPlayerId );
	void USC_PartyKick ( int nPlayerId );
	void USC_PartyInvite ( int nPlayerId );
	void USC_SpectatePlayer ( int nPlayerId );
	void USC_ViewPlayerClan ( );
	void USC_ViewPlayerProfile ( struct FString sPlayerName );
	void USC_CancelAllFriendRequests ( );
	void USC_CancelFriendRequest ( int nPlayerId );
	void USC_AcceptAllFriendRequests ( );
	void USC_AcceptFriendRequest ( int nPlayerId );
	void USC_CancelClanInvite ( int nClanId );
	void USC_AcceptClanInvite ( int nClanId );
	void USC_CancelInvite ( int nPlayerId );
	void USC_InviteFriend ( int nPlayerId );
	void USC_GetListData ( int nId );
	void USC_SearchByString ( struct FString PlayerName );
	void USC_MessageFriend ( int nPlayerId, struct FString sPlayerName );
	void USC_RemoveFriend ( int nPlayerId );
	void USC_GetFriendsData ( );
	void USC_OnCurse_Delegate ( struct FString UserName );
	void USC_EditNote_Delegate ( int nPlayerId );
	void USC_BlockPlayer_Delegate ( );
	void USC_InviteClan_Delegate ( );
	void USC_AddFriend_Delegate ( );
	void USC_Resize_Delegate ( class UGFxObject* pObj );
	void USC_ToggleDND_Delegate ( );
	void USC_UpdateStatusMessage_Delegate ( struct FString sStatus );
	void USC_InviteToClan_Delegate ( struct FString sPlayerName );
	void USC_BlockByString_Delegate ( struct FString sPlayerName );
	void USC_InviteFriendByString_Delegate ( struct FString sPlayerName );
	void USC_AddPlayerNote_Delegate ( int nPlayerId, struct FString sPlayerNote );
	void USC_RemoveBlocked_Delegate ( int nPlayerId );
	void USC_PartyKick_Delegate ( int nPlayerId );
	void USC_PartyInvite_Delegate ( int nPlayerId );
	void USC_SpectatePlayer_Delegate ( int nPlayerId );
	void USC_ViewPlayerClan_Delegate ( );
	void USC_ViewPlayerProfile_Delegate ( struct FString sPlayerName );
	void USC_CancelAllFriendRequests_Delegate ( );
	void USC_CancelFriendRequest_Delegate ( int nPlayerId );
	void USC_AcceptAllFriendRequests_Delegate ( );
	void USC_AcceptFriendRequest_Delegate ( int nPlayerId );
	void USC_CancelClanInvite_Delegate ( int nClanId );
	void USC_AcceptClanInvite_Delegate ( int nClanId );
	void USC_CancelInvite_Delegate ( int nPlayerId );
	void USC_InviteFriend_Delegate ( int nPlayerId );
	void USC_GetListData_Delegate ( int nId );
	void USC_SearchByString_Delegate ( struct FString PlayerName );
	void USC_MessageFriend_Delegate ( int nPlayerId, struct FString sPlayerName );
	void USC_RemoveFriend_Delegate ( int nPlayerId );
	void USC_GetFriendsData_Delegate ( );
};

UClass* UTgGfxFriendManagement::pClassPointer = NULL;

// Class TgClient.TgGfxGammaControls
// 0x0008 (0x0160 - 0x0158)
class UTgGfxGammaControls : public UTgGfxScene
{
public:
	class UMaterialInstanceConstant*                   m_GammaLogoMIC;                                   		// 0x0158 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_GammaBGMIC;                                     		// 0x015C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3244 );

		return pClassPointer;
	};

	void Uninitialize ( );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
	void DrawGammaLogo ( class UCanvas* Canvas );
};

UClass* UTgGfxGammaControls::pClassPointer = NULL;

// Class TgClient.TgGfxGods
// 0x0F80 (0x10D8 - 0x0158)
class UTgGfxGods : public UTgGfxScene
{
public:
	struct FString                                     m_lsStandard;                                     		// 0x0158 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsOwned;                                        		// 0x0164 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     rented_label;                                     		// 0x0170 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsCurrentRentalExpiresIn;                       		// 0x017C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsDiamond;                                      		// 0x0188 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsDiamond_description;                          		// 0x0194 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsExclusive;                                    		// 0x01A0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsExclusive_description;                        		// 0x01AC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsExclusiveChest;                               		// 0x01B8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsExclusiveChest_description;                   		// 0x01C4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsExclusiveClan;                                		// 0x01D0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsExclusiveClan_description;                    		// 0x01DC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsExclusivePromo;                               		// 0x01E8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsExclusivePromo_description;                   		// 0x01F4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsExclusiveEsports;                             		// 0x0200 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsExclusiveEsports_description;                 		// 0x020C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsExclusiveSeasonal;                            		// 0x0218 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsExclusiveSeasonal_description;                		// 0x0224 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsGold;                                         		// 0x0230 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsGold_description;                             		// 0x023C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLegendary;                                    		// 0x0248 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLegendary_description;                        		// 0x0254 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLimited;                                      		// 0x0260 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLimited_description;                          		// 0x026C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLimitedChest;                                 		// 0x0278 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLimitedChest_description;                     		// 0x0284 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLimitedClan;                                  		// 0x0290 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLimitedClan_description;                      		// 0x029C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLimitedPromo;                                 		// 0x02A8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLimitedPromo_description;                     		// 0x02B4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLimitedEsports;                               		// 0x02C0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLimitedEsports_description;                   		// 0x02CC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLimitedSeasonal;                              		// 0x02D8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLimitedSeasonal_description;                  		// 0x02E4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsClan;                                         		// 0x02F0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     days_label;                                       		// 0x02FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     day_label;                                        		// 0x0308 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     hours_label;                                      		// 0x0314 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     hour_label;                                       		// 0x0320 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     minutes_label;                                    		// 0x032C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     minute_label;                                     		// 0x0338 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     seconds_label;                                    		// 0x0344 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     second_label;                                     		// 0x0350 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      god_ids;                                          		// 0x035C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FGFxItem                                    m_ItemBtn[ 0x38 ];                                		// 0x0368 (0x0700) [0x0000000000000000]              
	struct FGFxSkinBtn                                 m_SkinBtn[ 0x6 ];                                 		// 0x0A68 (0x0138) [0x0000000000000000]              
	struct FGFxGodBtn                                  m_GodCardBtn[ 0x10 ];                             		// 0x0BA0 (0x0340) [0x0000000000000000]              
	class UTgGFxObject*                                m_SearchField;                                    		// 0x0EE0 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_FilterDropdown;                                 		// 0x0EE4 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_GodGrid;                                        		// 0x0EE8 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_GodCardCheckbox;                                		// 0x0EEC (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_GodGridScrollbar;                               		// 0x0EF0 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_GodCardScrollbar;                               		// 0x0EF4 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_SkinCall;                                       		// 0x0EF8 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_SkinCallTF;                                     		// 0x0EFC (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_ExtraCall;                                      		// 0x0F00 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_ExtraCallTF;                                    		// 0x0F04 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_VoiceCall;                                      		// 0x0F08 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_VoiceCallTF;                                    		// 0x0F0C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_VPContainer;                                    		// 0x0F10 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_SkinGoto;                                       		// 0x0F14 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_RentalInfo;                                     		// 0x0F18 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_SkinInfo;                                       		// 0x0F1C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_SideSkinInfo;                                   		// 0x0F20 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_UnlockBtn;                                      		// 0x0F24 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_EmoteLabel;                                     		// 0x0F28 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_AbilityScreen;                                  		// 0x0F2C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_AboutScreen;                                    		// 0x0F30 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_LoreScreen;                                     		// 0x0F34 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_StatScreen;                                     		// 0x0F38 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_ExtraScreen;                                    		// 0x0F3C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_HistoryScreen;                                  		// 0x0F40 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_VoiceScreen;                                    		// 0x0F44 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_AchieveScreen;                                  		// 0x0F48 (0x0004) [0x0000000000000000]              
	int                                                m_nSelectedIndex;                                 		// 0x0F4C (0x0004) [0x0000000000000000]              
	int                                                m_nScrollIndex;                                   		// 0x0F50 (0x0004) [0x0000000000000000]              
	TArray< int >                                      m_nShownItems;                                    		// 0x0F54 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_nUnsortedItems;                                 		// 0x0F60 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_RentalGodsIndex;                                		// 0x0F6C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sSearchField;                                   		// 0x0F78 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sSearch;                                        		// 0x0F84 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              m_fTipWaitTimer;                                  		// 0x0F90 (0x0004) [0x0000000000000000]              
	float                                              m_fTipWaitDuration;                               		// 0x0F94 (0x0004) [0x0000000000000000]              
	float                                              m_fRentalTimer;                                   		// 0x0F98 (0x0004) [0x0000000000000000]              
	int                                                m_nHighlightIndex;                                		// 0x0F9C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bScrollToSelection : 1;                         		// 0x0FA0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bShouldUpdateCall : 1;                          		// 0x0FA0 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                m_nSelectedTab;                                   		// 0x0FA4 (0x0004) [0x0000000000000000]              
	int                                                m_nSelectedGodId;                                 		// 0x0FA8 (0x0004) [0x0000000000000000]              
	int                                                m_nSelectedSkinId;                                		// 0x0FAC (0x0004) [0x0000000000000000]              
	int                                                m_nSelectedWardSkinId;                            		// 0x0FB0 (0x0004) [0x0000000000000000]              
	int                                                m_nFilterType;                                    		// 0x0FB4 (0x0004) [0x0000000000000000]              
	int                                                m_nPrevGodScrollIndex;                            		// 0x0FB8 (0x0004) [0x0000000000000000]              
	int                                                m_nPrevWardScrollIndex;                           		// 0x0FBC (0x0004) [0x0000000000000000]              
	int                                                m_nStatsHPLow;                                    		// 0x0FC0 (0x0004) [0x0000000000000000]              
	int                                                m_nStatsHPHigh;                                   		// 0x0FC4 (0x0004) [0x0000000000000000]              
	int                                                m_nStatsManaLow;                                  		// 0x0FC8 (0x0004) [0x0000000000000000]              
	int                                                m_nStatsManaHigh;                                 		// 0x0FCC (0x0004) [0x0000000000000000]              
	int                                                m_nCachedGodsTabSelection;                        		// 0x0FD0 (0x0004) [0x0000000000000000]              
	int                                                m_playerId;                                       		// 0x0FD4 (0x0004) [0x0000000000000000]              
	struct FItemData_GodPage                           m_SelectedGod;                                    		// 0x0FD8 (0x009C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_GodPage >                 m_GodData;                                        		// 0x1074 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_GodPage >                 m_WardData;                                       		// 0x1080 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_GodPage >                 m_SkinData;                                       		// 0x108C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FStreamData_Gods >                  m_StreamData;                                     		// 0x1098 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FAchievementData_GodsAchievements > m_achievementDatas;                               		// 0x10A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  m_achievementDatasArray;                          		// 0x10B0 (0x0004) [0x0000000000000000]              
	TArray< struct FVendorItemUIHint >                 m_vendorUIHints;                                  		// 0x10B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_UpdateEmoteSelection_Delegate__Delegate;    		// 0x10C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_PlayGodVideo_Delegate__Delegate;            		// 0x10CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3245 );

		return pClassPointer;
	};

	void ReceiveGFxData ( class UGFxObject* pObj );
	void Uninitialize ( );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
	void USC_PlayGodVideo ( struct FString demoURL );
	void USC_PlayGodVideo_Delegate ( );
	void USC_UpdateEmoteSelection ( struct FString emoteName );
	void USC_UpdateEmoteSelection_Delegate ( struct FString emoteName );
};

UClass* UTgGfxGods::pClassPointer = NULL;

// Class TgClient.TgGfxGodsHistory
// 0x002C (0x0184 - 0x0158)
class UTgGfxGodsHistory : public UTgGfxScene
{
public:
	int                                                m_godId;                                          		// 0x0158 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_updatedQueues : 1;                              		// 0x015C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FScriptDelegate                             __USC_GetQueuesDropdown_Delegate__Delegate;       		// 0x0160 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_GetHistoryData_Delegate__Delegate;          		// 0x016C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_ShowMatchDetails_Delegate__Delegate;        		// 0x0178 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3246 );

		return pClassPointer;
	};

	void Initialize ( class UTgGameMoviePlayer* theMovie );
	void eventUpdateGodHistory ( );
	void ASC_UpdateGodHistory ( );
	void eventUpdateQueueData ( );
	void ASC_UpdateQueueData ( );
	void USC_ShowMatchDetails ( int pMatchID );
	void USC_GetHistoryData ( int queueId );
	void USC_GetQueuesDropdown ( int godId );
	void USC_ShowMatchDetails_Delegate ( int pMatchID );
	void USC_GetHistoryData_Delegate ( int queueId );
	void USC_GetQueuesDropdown_Delegate ( int godId );
};

UClass* UTgGfxGodsHistory::pClassPointer = NULL;

// Class TgClient.TgGfxGodTargeter
// 0x00AC (0x0204 - 0x0158)
class UTgGfxGodTargeter : public UTgGfxScene
{
public:
	struct FGfxGodSelector                             m_GodSelectors[ 0xA ];                            		// 0x0158 (0x00A0) [0x0000000000000000]              
	class UTgGFxObject*                                m_targetButton;                                   		// 0x01F8 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_descTF;                                         		// 0x01FC (0x0004) [0x0000000000000000]              
	int                                                m_nSelectedButtonIndex;                           		// 0x0200 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3247 );

		return pClassPointer;
	};

	void Initialize ( class UTgGameMoviePlayer* theMovie );
	void ReceiveGFxData ( class UGFxObject* pObj );
};

UClass* UTgGfxGodTargeter::pClassPointer = NULL;

// Class TgClient.TgGfxGuides
// 0x0000 (0x0158 - 0x0158)
class UTgGfxGuides : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3248 );

		return pClassPointer;
	};

	void Initialize ( class UTgGameMoviePlayer* theMovie );
};

UClass* UTgGfxGuides::pClassPointer = NULL;

// Class TgClient.TgGfxHomePage
// 0x0000 (0x0158 - 0x0158)
class UTgGfxHomePage : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3249 );

		return pClassPointer;
	};

	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
};

UClass* UTgGfxHomePage::pClassPointer = NULL;

// Class TgClient.TgGfxHUD
// 0x0000 (0x0158 - 0x0158)
class UTgGfxHUD : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3250 );

		return pClassPointer;
	};

	void Uninitialize ( );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
};

UClass* UTgGfxHUD::pClassPointer = NULL;

// Class TgClient.TgGfxHudItems
// 0x002C (0x0184 - 0x0158)
class UTgGfxHudItems : public UTgGfxScene
{
public:
	class UTgGfxVendorData*                            m_VendorData;                                     		// 0x0158 (0x0004) [0x0000000000000000]              
	int                                                m_nPlayerClass;                                   		// 0x015C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_Item[ 0x6 ];                                    		// 0x0160 (0x0018) [0x0000000000000000]              
	struct FScriptDelegate                             __USC_SetupItemDisplay_Delegate__Delegate;        		// 0x0178 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3251 );

		return pClassPointer;
	};

	void eventUpdateGlow ( int Index, unsigned long Visibility );
	void ASC_UpdateGlow ( int Index, unsigned long Visibility );
	void USC_SetupItemDisplay ( );
	void USC_SetupItemDisplay_Delegate ( );
	void CheckWishList ( unsigned long bPurge );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
};

UClass* UTgGfxHudItems::pClassPointer = NULL;

// Class TgClient.TgGfxHudNotify
// 0x0144 (0x029C - 0x0158)
class UTgGfxHudNotify : public UTgGfxScene
{
public:
	float                                              m_fKillDuration;                                  		// 0x0158 (0x0004) [0x0000000000000000]              
	float                                              m_fKillTimer;                                     		// 0x015C (0x0004) [0x0000000000000000]              
	float                                              m_fAccoladeAccumulateDuration;                    		// 0x0160 (0x0004) [0x0000000000000000]              
	float                                              m_fAccoladeDuration;                              		// 0x0164 (0x0004) [0x0000000000000000]              
	float                                              m_fAccoladeTimer;                                 		// 0x0168 (0x0004) [0x0000000000000000]              
	int                                                m_nEnemyIconIndex;                                		// 0x016C (0x0004) [0x0000000000000000]              
	int                                                m_nFriendIconIndex;                               		// 0x0170 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bKillInterrupt : 1;                             		// 0x0174 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_fIconDuration;                                  		// 0x0178 (0x0004) [0x0000000000000000]              
	float                                              m_fEnemyIconTimer;                                		// 0x017C (0x0004) [0x0000000000000000]              
	float                                              m_fFriendIconTimer;                               		// 0x0180 (0x0004) [0x0000000000000000]              
	float                                              m_fObjectiveDuration;                             		// 0x0184 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_KillMC;                                         		// 0x0188 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_KillerName;                                     		// 0x018C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_KillerIcon;                                     		// 0x0190 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_KillerGlow;                                     		// 0x0194 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_KillerFrame;                                    		// 0x0198 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_VictimName;                                     		// 0x019C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_VictimIcon;                                     		// 0x01A0 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_VictimGlow;                                     		// 0x01A4 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_VictimFrame;                                    		// 0x01A8 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_RedSlash;                                       		// 0x01AC (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_BlueSlash;                                      		// 0x01B0 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_EnemyMC[ 0x5 ];                                 		// 0x01B4 (0x0014) [0x0000000000000000]              
	class UTgGFxObject*                                m_EnemyIcon[ 0x5 ];                               		// 0x01C8 (0x0014) [0x0000000000000000]              
	class UTgGFxObject*                                m_FriendMC[ 0x5 ];                                		// 0x01DC (0x0014) [0x0000000000000000]              
	class UTgGFxObject*                                m_FriendIcon[ 0x5 ];                              		// 0x01F0 (0x0014) [0x0000000000000000]              
	class UTgGFxObject*                                m_AccoladeMC;                                     		// 0x0204 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_AccoladeName;                                   		// 0x0208 (0x0004) [0x0000000000000000]              
	struct FNotifyData                                 m_NewData;                                        		// 0x020C (0x0078) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FNotifyData >                       m_Notifications;                                  		// 0x0284 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FEventLogData >                     m_EventLog;                                       		// 0x0290 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3252 );

		return pClassPointer;
	};

	void Initialize ( class UTgGameMoviePlayer* pMP );
	void ReceiveGFxData ( class UGFxObject* pObj );
};

UClass* UTgGfxHudNotify::pClassPointer = NULL;

// Class TgClient.TgGfxHudUpgrade
// 0x0048 (0x01A0 - 0x0158)
class UTgGfxHudUpgrade : public UTgGfxScene
{
public:
	float                                              m_fItemTimer;                                     		// 0x0158 (0x0004) [0x0000000000000000]              
	float                                              m_fSkillTimer;                                    		// 0x015C (0x0004) [0x0000000000000000]              
	float                                              m_fItemDuration;                                  		// 0x0160 (0x0004) [0x0000000000000000]              
	float                                              m_fSkillDuration;                                 		// 0x0164 (0x0004) [0x0000000000000000]              
	TArray< int >                                      m_Items;                                          		// 0x0168 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_Skills;                                         		// 0x0174 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTgGFxObject*                                m_ItemMC;                                         		// 0x0180 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_ItemType;                                       		// 0x0184 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_ItemName;                                       		// 0x0188 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_ItemIcon;                                       		// 0x018C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_SkillMC;                                        		// 0x0190 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_SkillType;                                      		// 0x0194 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_SkillName;                                      		// 0x0198 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_SkillIcon;                                      		// 0x019C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3253 );

		return pClassPointer;
	};

	void Initialize ( class UTgGameMoviePlayer* pMP );
	void ReceiveGFxData ( class UGFxObject* pObj );
};

UClass* UTgGfxHudUpgrade::pClassPointer = NULL;

// Class TgClient.TgGfxIntro
// 0x0000 (0x0158 - 0x0158)
class UTgGfxIntro : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3254 );

		return pClassPointer;
	};

	void Initialize ( class UTgGameMoviePlayer* theMovie );
};

UClass* UTgGfxIntro::pClassPointer = NULL;

// Class TgClient.TgGfxLandingPanelWeb
// 0x0000 (0x0158 - 0x0158)
class UTgGfxLandingPanelWeb : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3255 );

		return pClassPointer;
	};

	void Uninitialize ( );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
};

UClass* UTgGfxLandingPanelWeb::pClassPointer = NULL;

// Class TgClient.TgGfxLeagueMenu
// 0x003C (0x0194 - 0x0158)
class UTgGfxLeagueMenu : public UTgGfxScene
{
public:
	struct FScriptDelegate                             __USC_GetTabLabels_Delegate__Delegate;            		// 0x0158 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_TabSelected_Delegate__Delegate;             		// 0x0164 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_GetTopTen_Delegate__Delegate;               		// 0x0170 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_GetLeaderboard_Delegate__Delegate;          		// 0x017C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_SaveTabIndex_Delegate__Delegate;            		// 0x0188 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3256 );

		return pClassPointer;
	};

	void eventUpdateFriends ( );
	void ASC_UpdateFriends ( );
	void eventUpdateStanding ( );
	void ASC_UpdateStanding ( );
	void eventUpdateLeaderboard ( );
	void ASC_UpdateLeaderboard ( );
	void eventUpdateCurrentLeagueStats ( );
	void ASC_UpdateCurrentLeagueStats ( );
	void eventUpdateLeagueListing ( );
	void ASC_UpdateLeagueListing ( );
	void eventUpdateSelectedTab ( struct FString tabLabel );
	void ASC_UpdateSelectedTab ( struct FString tabLabel );
	void eventUpdateTabLabels ( );
	void ASC_UpdateTabLabels ( );
	void USC_SaveTabIndex ( int tierTabIndex );
	void USC_GetLeaderboard ( int nLeagueId, int nTierId );
	void USC_GetTopTen ( int nLeagueId, int nTierId );
	void USC_TabSelected ( struct FString tabSelected );
	void USC_GetTabLabels ( );
	void USC_SaveTabIndex_Delegate ( );
	void USC_GetLeaderboard_Delegate ( );
	void USC_GetTopTen_Delegate ( );
	void USC_TabSelected_Delegate ( );
	void USC_GetTabLabels_Delegate ( );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
};

UClass* UTgGfxLeagueMenu::pClassPointer = NULL;

// Class TgClient.TgGfxLoadouts
// 0x1ABC (0x1C14 - 0x0158)
class UTgGfxLoadouts : public UTgGfxScene
{
public:
	struct FGFxLoadoutItem                             m_ItemBtn[ 0x30 ];                                		// 0x0158 (0x1500) [0x0000000000000000]              
	struct FGfxEquippedLoadoutItem                     m_EquippedLoadoutItem[ 0x9 ];                     		// 0x1658 (0x04A4) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTgGFxObject*                                m_UseClanBtn;                                     		// 0x1AFC (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_LoadoutEquipBtn;                                		// 0x1B00 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_LoadoutUnlockBtn;                               		// 0x1B04 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_LoadoutGotoBtn;                                 		// 0x1B08 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_HideStatsBtn;                                   		// 0x1B0C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_ItemSelection;                                  		// 0x1B10 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_BoostSelection;                                 		// 0x1B14 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_BoosterBtn;                                     		// 0x1B18 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_BoosterTitleTF;                                 		// 0x1B1C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_TextAudioBtn;                                   		// 0x1B20 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_SelectedTitleTF;                                		// 0x1B24 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_SearchField;                                    		// 0x1B28 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_FilterDropdown;                                 		// 0x1B2C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_GemObject;                                      		// 0x1B30 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_GemTF;                                          		// 0x1B34 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_FavorObject;                                    		// 0x1B38 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_FavorTF;                                        		// 0x1B3C (0x0004) [0x0000000000000000]              
	int                                                m_nSelectedItemId;                                		// 0x1B40 (0x0004) [0x0000000000000000]              
	int                                                m_nSelectedItemType;                              		// 0x1B44 (0x0004) [0x0000000000000000]              
	int                                                m_nSelectedIndex;                                 		// 0x1B48 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bScrollToSelection : 1;                         		// 0x1B4C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_nScrollIndex;                                   		// 0x1B50 (0x0004) [0x0000000000000000]              
	int                                                m_nFilterId;                                      		// 0x1B54 (0x0004) [0x0000000000000000]              
	TArray< int >                                      m_nShownItems;                                    		// 0x1B58 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_nUnsortedItems;                                 		// 0x1B64 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nHighlightIndex;                                		// 0x1B70 (0x0004) [0x0000000000000000]              
	float                                              m_fTipWaitTimer;                                  		// 0x1B74 (0x0004) [0x0000000000000000]              
	float                                              m_fTipWaitDuration;                               		// 0x1B78 (0x0004) [0x0000000000000000]              
	float                                              m_fDoubleClickTimer;                              		// 0x1B7C (0x0004) [0x0000000000000000]              
	float                                              m_fDoubleClickDuration;                           		// 0x1B80 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sSearchField;                                   		// 0x1B84 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sSearch;                                        		// 0x1B90 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sBoosterTitle;                                  		// 0x1B9C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_LoadoutsPage >            m_AvatarData;                                     		// 0x1BA8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_LoadoutsPage >            m_WardData;                                       		// 0x1BB4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_LoadoutsPage >            m_PedestalData;                                   		// 0x1BC0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_LoadoutsPage >            m_AnnouncerData;                                  		// 0x1BCC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_LoadoutsPage >            m_FrameData;                                      		// 0x1BD8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_LoadoutsPage >            m_GlobalEmoteData;                                		// 0x1BE4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_LoadoutsPage >            m_MusicThemeData;                                 		// 0x1BF0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_LoadoutsPage >            m_RecallSkinData;                                 		// 0x1BFC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_LoadoutsPage >            m_HudThemeData;                                   		// 0x1C08 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3257 );

		return pClassPointer;
	};

	void ReceiveGFxData ( class UGFxObject* pObj );
	void Uninitialize ( );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
};

UClass* UTgGfxLoadouts::pClassPointer = NULL;

// Class TgClient.TgGfxLobbyMain
// 0x0000 (0x0158 - 0x0158)
class UTgGfxLobbyMain : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3258 );

		return pClassPointer;
	};

	void Uninitialize ( );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
};

UClass* UTgGfxLobbyMain::pClassPointer = NULL;

// Class TgClient.TgGfxLogin
// 0x0000 (0x0158 - 0x0158)
class UTgGfxLogin : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3259 );

		return pClassPointer;
	};

};

UClass* UTgGfxLogin::pClassPointer = NULL;

// Class TgClient.TgGfxMainMenu
// 0x000C (0x0164 - 0x0158)
class UTgGfxMainMenu : public UTgGfxScene
{
public:
	struct FScriptDelegate                             __USC_GotoLobby_Delegate__Delegate;               		// 0x0158 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3260 );

		return pClassPointer;
	};

	void Initialize ( class UTgGameMoviePlayer* theMovie );
	void USC_GotoLobby ( );
	void USC_GotoLobby_Delegate ( );
};

UClass* UTgGfxMainMenu::pClassPointer = NULL;

// Class TgClient.TgGfxMassInvite
// 0x0118 (0x0270 - 0x0158)
class UTgGfxMassInvite : public UTgGfxScene
{
public:
	struct FString                                     m_lsInviteList;                                   		// 0x0158 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsSeachByName;                                  		// 0x0164 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsInvitePlayers;                                		// 0x0170 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class UTgGFxObject*                                m_SearchFriendsTF;                                		// 0x017C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_InvitePlayerTF;                                 		// 0x0180 (0x0004) [0x0000000000000000]              
	struct FInviteRow                                  m_InviteRow[ 0x5 ];                               		// 0x0184 (0x0050) [0x0000000000000000]              
	struct FFriendRow                                  m_FriendRow[ 0x7 ];                               		// 0x01D4 (0x0070) [0x0000000000000000]              
	TArray< struct FOpenInvite >                       m_InvitedPlayers;                                 		// 0x0244 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nInviteScrollPosition;                          		// 0x0250 (0x0004) [0x0000000000000000]              
	int                                                m_nBuddyScrollPosition;                           		// 0x0254 (0x0004) [0x0000000000000000]              
	TArray< int >                                      m_BuddyList;                                      		// 0x0258 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sSearch;                                        		// 0x0264 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3261 );

		return pClassPointer;
	};

	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
};

UClass* UTgGfxMassInvite::pClassPointer = NULL;

// Class TgClient.TgGfxMatchDetails
// 0x000C (0x0164 - 0x0158)
class UTgGfxMatchDetails : public UTgGfxScene
{
public:
	struct FScriptDelegate                             __USC_SearchByMatchId_Delegate__Delegate;         		// 0x0158 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3262 );

		return pClassPointer;
	};

	void eventMatchDataUpdated ( );
	void ASC_MatchDataUpdated ( );
	void USC_SearchByMatchId ( struct FString matchId );
	void USC_SearchByMatchId_Delegate ( struct FString matchId );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
};

UClass* UTgGfxMatchDetails::pClassPointer = NULL;

// Class TgClient.TgGFxMatchInvite
// 0x0084 (0x01DC - 0x0158)
class UTgGFxMatchInvite : public UTgGfxScene
{
public:
	int                                                m_nPlayersReady;                                  		// 0x0158 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sQueueTimer;                                    		// 0x015C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_lsQueueStatus;                                  		// 0x0168 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsPlayerCount;                                  		// 0x0174 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsCustomTitle;                                  		// 0x0180 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	unsigned long                                      m_bMinimized : 1;                                 		// 0x018C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bVisible : 1;                                   		// 0x018C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bFailedState : 1;                               		// 0x018C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bShowPlayers : 1;                               		// 0x018C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bShowDecline : 1;                               		// 0x018C (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      m_bIsCustomInvite : 1;                            		// 0x018C (0x0004) [0x0000000000000000] [0x00000020] 
	class UGFxObject*                                  m_MatchData;                                      		// 0x0190 (0x0004) [0x0000000000000000]              
	float                                              m_fLastUpdate;                                    		// 0x0194 (0x0004) [0x0000000000000000]              
	float                                              m_fStatusCheckTimer;                              		// 0x0198 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sPickType;                                      		// 0x019C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sPlayers;                                       		// 0x01A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sGameMode;                                      		// 0x01B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sServerName;                                    		// 0x01C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sTitle;                                         		// 0x01CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nQueueImage;                                    		// 0x01D8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3263 );

		return pClassPointer;
	};

	void eventUpdate ( );
	void eventHide ( );
	void eventShow ( );
	void DisableBrowserInput ( );
	void EnableBrowserInput ( );
	class UGFxObject* GetMatchInviteData ( );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
	void HideMatchInvite ( );
	void UpdateMatchInvite ( class UGFxObject* Obj );
	void ShowMatchInvite ( class UGFxObject* Obj );
};

UClass* UTgGFxMatchInvite::pClassPointer = NULL;

// Class TgClient.TgGfxMatchLobby
// 0x0008 (0x0160 - 0x0158)
class UTgGfxMatchLobby : public UTgGfxScene
{
public:
	class UTgGFxObject*                                SpectateGotoBtn;                                  		// 0x0158 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                SpectateCancelBtn;                                		// 0x015C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3264 );

		return pClassPointer;
	};

	void ReceiveGFxData ( class UGFxObject* pObj );
	void Uninitialize ( );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
};

UClass* UTgGfxMatchLobby::pClassPointer = NULL;

// Class TgClient.TgGfxMatchLobbyClassSelection
// 0x003C (0x0194 - 0x0158)
class UTgGfxMatchLobbyClassSelection : public UTgGfxScene
{
public:
	TArray< int >                                      m_vpSettingVVCodeList;                            		// 0x0158 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_GetVoicePackInfo_Delegate__Delegate;        		// 0x0164 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_SetVPSelection_Delegate__Delegate;          		// 0x0170 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_GetEmoteData_Delegate__Delegate;            		// 0x017C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_ShowEmotePurchase_Delegate__Delegate;       		// 0x0188 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3265 );

		return pClassPointer;
	};

	void Initialize ( class UTgGameMoviePlayer* theMovie );
	void eventUpdateEmoteData ( );
	void ASC_UpdateEmoteData ( );
	void eventSetSelectedSkin ( int SkinId );
	void ASC_SetSelectedSkin ( int SkinId );
	void eventVoicePackPurchased ( int godId, int voicePackItemId );
	void ASC_VoicePackPurchased ( int godId, int voicePackItemId );
	void USC_ShowEmotePurchase ( int ItemId );
	class UGFxObject* USC_ShowEmotePurchase_Delegate ( int ItemId );
	class UGFxObject* USC_GetEmoteData ( int godId );
	class UGFxObject* USC_GetEmoteData_Delegate ( int godId );
	void USC_SetVPSelection ( int Selection );
	void USC_SetVPSelection_Delegate ( int Selection );
	class UGFxObject* USC_GetVoicePackInfo ( int godId );
	class UGFxObject* USC_GetVoicePackInfo_Delegate ( int godId );
};

UClass* UTgGfxMatchLobbyClassSelection::pClassPointer = NULL;

// Class TgClient.TgGfxMenuBar
// 0x00E8 (0x0240 - 0x0158)
class UTgGfxMenuBar : public UTgGfxScene
{
public:
	class UTgGFxObject*                                ExitBtn;                                          		// 0x0158 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                MinimizeBtn;                                      		// 0x015C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                ProfileBtn;                                       		// 0x0160 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                WisdomBtn;                                        		// 0x0164 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                StoreBtn;                                         		// 0x0168 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                SocialBtn;                                        		// 0x016C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                CompetitiveBtn;                                   		// 0x0170 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                SettingsBtn;                                      		// 0x0174 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                HomeBtn;                                          		// 0x0178 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                HomeBtnRed;                                       		// 0x017C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                HomeBtnGreen;                                     		// 0x0180 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                PlayBtn;                                          		// 0x0184 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                PlayBtnParty;                                     		// 0x0188 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                GodsBtn;                                          		// 0x018C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                InQueueBtn;                                       		// 0x0190 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                LeaveQueueBtn;                                    		// 0x0194 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                LeftText;                                         		// 0x0198 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                LeftTextTF;                                       		// 0x019C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                QueueBar;                                         		// 0x01A0 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                EOMLGroup;                                        		// 0x01A4 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                TwitterBtn;                                       		// 0x01A8 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                FacebookBtn;                                      		// 0x01AC (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                FaceitBtn;                                        		// 0x01B0 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                LeftEOMLText;                                     		// 0x01B4 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                RightEOMLText;                                    		// 0x01B8 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                RightEOMLText2;                                   		// 0x01BC (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                EOMLQueuedText;                                   		// 0x01C0 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                EOMLPlayBtn;                                      		// 0x01C4 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                EOMLHomeBtn;                                      		// 0x01C8 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                GodsGroup;                                        		// 0x01CC (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                RightGodsText;                                    		// 0x01D0 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                RightGodsText2;                                   		// 0x01D4 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                MatchLobbyActivity;                               		// 0x01D8 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                LeftMLAText;                                      		// 0x01DC (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                EventButtonGroup;                                 		// 0x01E0 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                RewardsCenterBtn;                                 		// 0x01E4 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                RewardsCenterCount;                               		// 0x01E8 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                RewardsCenterBtnCount;                            		// 0x01EC (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                SeasonTicketBtn;                                  		// 0x01F0 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                SeasonTicketCount;                                		// 0x01F4 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                SeasonTicketBtnCount;                             		// 0x01F8 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                SeasonTicketActiveBtn;                            		// 0x01FC (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                SeasonalEventBtn;                                 		// 0x0200 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                SeasonalEvent2Btn;                                		// 0x0204 (0x0004) [0x0000000000000000]              
	float                                              m_fMatchCheckTimer;                               		// 0x0208 (0x0004) [0x0000000000000000]              
	float                                              m_fQueueBarCheckTimer;                            		// 0x020C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bLoggedIn : 1;                                  		// 0x0210 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bQueueBarShouldShow : 1;                        		// 0x0210 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bHasDemoReplay : 1;                             		// 0x0210 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bAllowServerFeedback : 1;                       		// 0x0210 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bHasGivenFeedback : 1;                          		// 0x0210 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      m_bIsCustomMatch : 1;                             		// 0x0210 (0x0004) [0x0000000000000000] [0x00000020] 
	int                                                m_nLastQueueState;                                		// 0x0214 (0x0004) [0x0000000000000000]              
	int                                                m_nLastMatchLobbyState;                           		// 0x0218 (0x0004) [0x0000000000000000]              
	int                                                m_nGameLobbyState;                                		// 0x021C (0x0004) [0x0000000000000000]              
	float                                              c_fTimeQueued;                                    		// 0x0220 (0x0004) [0x0000000000000000]              
	int                                                m_nLastGameInstanceId;                            		// 0x0224 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __USC_StartWindowMove_Delegate__Delegate;         		// 0x0228 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_StopWindowMove_Delegate__Delegate;          		// 0x0234 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3266 );

		return pClassPointer;
	};

	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
	void USC_StopWindowMove ( );
	void USC_StopWindowMove_Delegate ( );
	void USC_StartWindowMove ( );
	void USC_StartWindowMove_Delegate ( );
};

UClass* UTgGfxMenuBar::pClassPointer = NULL;

// Class TgClient.TgGfxNotificationList
// 0x0390 (0x04E8 - 0x0158)
class UTgGfxNotificationList : public UTgGfxScene
{
public:
	struct FString                                     m_lsAccepted;                                     		// 0x0158 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsActive;                                       		// 0x0164 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsExpired;                                      		// 0x0170 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsRejected;                                     		// 0x017C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsUnlock;                                       		// 0x0188 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsClanTab;                                      		// 0x0194 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsFriendTab;                                    		// 0x01A0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsPartyTab;                                     		// 0x01AC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsNotificationTab;                              		// 0x01B8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsUnlockTab;                                    		// 0x01C4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsAchievementTab;                               		// 0x01D0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FNotificationTab                            m_NotificationTabs[ 0x5 ];                        		// 0x01DC (0x0028) [0x0000000000000000]              
	class UTgGFxObject*                                m_ScrollBar;                                      		// 0x0204 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_CloseBtn;                                       		// 0x0208 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_HideAllBtn;                                     		// 0x020C (0x0004) [0x0000000000000000]              
	struct FNotification                               m_Notification[ 0x5 ];                            		// 0x0210 (0x02D0) [0x0000000000000000]              
	int                                                m_ScrollPosition;                                 		// 0x04E0 (0x0004) [0x0000000000000000]              
	int                                                m_SelectedTab;                                    		// 0x04E4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3267 );

		return pClassPointer;
	};

	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
};

UClass* UTgGfxNotificationList::pClassPointer = NULL;

// Class TgClient.TgGfxParty
// 0x01D0 (0x0328 - 0x0158)
class UTgGfxParty : public UTgGfxScene
{
public:
	int                                                m_QuickAddScrollPos;                              		// 0x0158 (0x0004) [0x0000000000000000]              
	TArray< struct FQuickAddListData >                 m_QuickAddList;                                   		// 0x015C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_PartyList;                                      		// 0x0168 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_QuickAddFilter;                                 		// 0x0174 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class UTgGFxObject*                                m_MagnifyBtn;                                     		// 0x0180 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_QuickAddGroup;                                  		// 0x0184 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_QuickAddInput;                                  		// 0x0188 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_PartyTitle;                                     		// 0x018C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_PlayerGroup;                                    		// 0x0190 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_CloseBtn;                                       		// 0x0194 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_DisbandBtn;                                     		// 0x0198 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_AcceptBtn;                                      		// 0x019C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_DisabledReason;                                 		// 0x01A0 (0x0004) [0x0000000000000000]              
	struct FPartyQuickAdd                              m_QuickAddBtns[ 0x7 ];                            		// 0x01A4 (0x00A8) [0x0000000000000000]              
	struct FPartyPlayer                                m_Players[ 0x5 ];                                 		// 0x024C (0x00DC) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3268 );

		return pClassPointer;
	};

	void Uninitialize ( );
	void Initialize ( class UTgGameMoviePlayer* pMP );
	void ReceiveGFxData ( class UGFxObject* pObj );
};

UClass* UTgGfxParty::pClassPointer = NULL;

// Class TgClient.TgGfxPartyManagement
// 0x0084 (0x01DC - 0x0158)
class UTgGfxPartyManagement : public UTgGfxScene
{
public:
	struct FPlayerBtn                                  m_PlayerBtns[ 0x4 ];                              		// 0x0158 (0x0040) [0x0000000000000000]              
	struct FPlayerBtn                                  m_LocalPlayer;                                    		// 0x0198 (0x0010) [0x0000000000000000]              
	TArray< struct FListPlayerData >                   m_FriendList;                                     		// 0x01A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FListPlayerData >                   m_RecentlyPlayedList;                             		// 0x01B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FListPlayerData >                   m_ClanList;                                       		// 0x01C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPointer                                    m_CurrentList;                                    		// 0x01CC (0x0004) [0x0000000000001000]              ( CPF_Native )
	int                                                m_nCurrentView;                                   		// 0x01D0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  m_InviteList;                                     		// 0x01D4 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bIsViewingInvite : 1;                           		// 0x01D8 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3269 );

		return pClassPointer;
	};

	void Uninitialize ( );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgGameMoviePlayer* pMP );
};

UClass* UTgGfxPartyManagement::pClassPointer = NULL;

// Class TgClient.TgGfxPlayNowV2
// 0x0138 (0x0290 - 0x0158)
class UTgGfxPlayNowV2 : public UTgGfxScene
{
public:
	struct FString                                     m_lsTilQueueOpen;                                 		// 0x0158 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsTilQueueClosed;                               		// 0x0164 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsTilQueueChange;                               		// 0x0170 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsServerRestartLocked;                          		// 0x017C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsSafeModeLocked;                               		// 0x0188 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsQueueTimeLocked;                              		// 0x0194 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsTimeRemainingHours;                           		// 0x01A0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsTimeRemainingSecs;                            		// 0x01AC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsStartTime;                                    		// 0x01B8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsNow;                                          		// 0x01C4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsAvailable_MOTD;                               		// 0x01D0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsAvailable_level;                              		// 0x01DC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< int >                                      m_TabList;                                        		// 0x01E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_QueueList;                                      		// 0x01F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_RegionList;                                     		// 0x0200 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nFeatureGodId;                                  		// 0x020C (0x0004) [0x0000000000000000]              
	int                                                m_nFeatureSkinId;                                 		// 0x0210 (0x0004) [0x0000000000000000]              
	int                                                m_nDefaultTabIndex;                               		// 0x0214 (0x0004) [0x0000000000000000]              
	int                                                m_nSelectedQueueId;                               		// 0x0218 (0x0004) [0x0000000000000000]              
	int                                                m_nUIQueueId;                                     		// 0x021C (0x0004) [0x0000000000000000]              
	int                                                m_nPotentialQueueId;                              		// 0x0220 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bRegionInitialized : 1;                         		// 0x0224 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bShowingFeature : 1;                            		// 0x0224 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bShowParty : 1;                                 		// 0x0224 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bVideoPlayElected : 1;                          		// 0x0224 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bPreventAIOnChange : 1;                         		// 0x0224 (0x0004) [0x0000000000000000] [0x00000010] 
	class UTgGFxObject*                                m_RegionTF;                                       		// 0x0228 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_RegionDropDown;                                 		// 0x022C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_JoinBtn;                                        		// 0x0230 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_LeaveBtn;                                       		// 0x0234 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_PartyBtn;                                       		// 0x0238 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_PracticeCheckbox;                               		// 0x023C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_BotDifficultyDropDown;                          		// 0x0240 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_PvEGroup;                                       		// 0x0244 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __USC_GetQueueList_Delegate__Delegate;            		// 0x0248 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_SelectRegion_Delegate__Delegate;            		// 0x0254 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_SelectQueue_Delegate__Delegate;             		// 0x0260 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_OnInfoBtn_Delegate__Delegate;               		// 0x026C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_JoinQueue_Delegate__Delegate;               		// 0x0278 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_ShowFeatureScene_Delegate__Delegate;        		// 0x0284 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3270 );

		return pClassPointer;
	};

	void Uninitialize ( );
	void Initialize ( class UTgGameMoviePlayer* pMP );
	void eventToggleParty ( unsigned long Show );
	void ASC_ToggleParty ( unsigned long Show );
	void eventAutoNavTo ( int tabI, int queueI );
	void ASC_AutoNavTo ( int tabI, int queueI );
	void eventUpdateTabQueues ( unsigned long Disable );
	void ASC_UpdateTabQueues ( unsigned long Disable );
	void eventUpdateQueueInfo ( );
	void ASC_UpdateQueueInfo ( );
	void eventUpdateQueueList ( );
	void ASC_UpdateQueueList ( );
	void USC_ShowFeatureScene ( unsigned long Show );
	void USC_ShowFeatureScene_Delegate ( unsigned long Show );
	void USC_JoinQueue ( int queueId );
	void USC_JoinQueue_Delegate ( int queueId );
	void USC_OnInfoBtn ( int btnId );
	void USC_OnInfoBtn_Delegate ( int btnId );
	void USC_SelectQueue ( int qId );
	void USC_SelectQueue_Delegate ( int qId );
	void USC_SelectRegion ( int Index );
	void USC_SelectRegion_Delegate ( int Index );
	void USC_GetQueueList ( int tabVV );
	void USC_GetQueueList_Delegate ( int tabVV );
};

UClass* UTgGfxPlayNowV2::pClassPointer = NULL;

// Class TgClient.TgGfxPopupModal
// 0x000C (0x0164 - 0x0158)
class UTgGfxPopupModal : public UTgGfxScene
{
public:
	struct FScriptDelegate                             __USC_SelectedPopup_Delegate__Delegate;           		// 0x0158 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3271 );

		return pClassPointer;
	};

	void eventSendAnnounceReportPlayer ( struct FString reportedName );
	void eventSendClosePopup ( );
	void eventSendOpenPopup ( class UGFxObject* Data );
	void USC_SelectedPopup ( int nActionID, struct FString sInputValue, struct FString sSecondaryInputValue );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
	void USC_SelectedPopup_Delegate ( int nActionID, struct FString sInputValue, struct FString sSecondaryInputValue );
	void AnnounceReportPlayer ( struct FString reportedName );
	void ClosePopup ( );
	void OpenPopup ( class UGFxObject* Obj );
};

UClass* UTgGfxPopupModal::pClassPointer = NULL;

// Class TgClient.TgGfxProfileAccolade
// 0x0004 (0x015C - 0x0158)
class UTgGfxProfileAccolade : public UTgGfxScene
{
public:
	int                                                m_nPlayerId;                                      		// 0x0158 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3272 );

		return pClassPointer;
	};

	void Initialize ( class UTgGameMoviePlayer* theMovie );
	void eventAccoladeDataUpdated ( );
	void ASC_AccoladeDataUpdated ( );
};

UClass* UTgGfxProfileAccolade::pClassPointer = NULL;

// Class TgClient.TgGfxProfileAchievements
// 0x001C (0x0174 - 0x0158)
class UTgGfxProfileAchievements : public UTgGfxScene
{
public:
	int                                                m_playerId;                                       		// 0x0158 (0x0004) [0x0000000000000000]              
	int                                                m_searchedPlayerId;                               		// 0x015C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_gotAllActivities : 1;                           		// 0x0160 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< struct FAchievementData_ProfileAchievements > m_achievementDatas;                               		// 0x0164 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  m_achievementDatasArray;                          		// 0x0170 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3273 );

		return pClassPointer;
	};

	void eventCheckIfHasMasterList ( );
	void ASC_CheckIfHasMasterList ( );
	void eventUpdateAchievements ( );
	void ASC_UpdateAchievements ( );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
};

UClass* UTgGfxProfileAchievements::pClassPointer = NULL;

// Class TgClient.TgGfxProfileHistory
// 0x0038 (0x0190 - 0x0158)
class UTgGfxProfileHistory : public UTgGfxScene
{
public:
	int                                                m_playerId;                                       		// 0x0158 (0x0004) [0x0000000000000000]              
	int                                                s_lastFilterQueueId;                              		// 0x015C (0x0004) [0x0000000000000000]              
	struct FString                                     s_GodFilter;                                      		// 0x0160 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_SetGodsFilter_Delegate__Delegate;           		// 0x016C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_SetQueueFilter_Delegate__Delegate;          		// 0x0178 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_ShowDetails_Delegate__Delegate;             		// 0x0184 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3274 );

		return pClassPointer;
	};

	void eventQueueDataUpdated ( );
	void ASC_QueueDataUpdated ( );
	void eventMatchesDataUpdated ( );
	void ASC_MatchesDataUpdated ( );
	void USC_ShowDetails ( struct FString matchId );
	void USC_SetQueueFilter ( int queueId );
	void USC_SetGodsFilter ( struct FString sFilterGod );
	void USC_ShowDetails_Delegate ( struct FString matchId );
	void USC_SetQueueFilter_Delegate ( int queueId );
	void USC_SetGodsFilter_Delegate ( struct FString sFilterGod );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
};

UClass* UTgGfxProfileHistory::pClassPointer = NULL;

// Class TgClient.TgGfxProfileLeagueStats
// 0x0018 (0x0170 - 0x0158)
class UTgGfxProfileLeagueStats : public UTgGfxScene
{
public:
	struct FScriptDelegate                             __USC_GetLeagueStats_Delegate__Delegate;          		// 0x0158 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_NavToAboutLeague_Delegate__Delegate;        		// 0x0164 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3275 );

		return pClassPointer;
	};

	void eventUpdateLeagueStats ( );
	void ASC_UpdateLeagueStats ( );
	void eventUpdateCurrentLeagueStats ( );
	void ASC_UpdateCurrentLeagueStats ( );
	void eventUpdateLeagueListing ( );
	void ASC_UpdateLeagueListing ( );
	void USC_NavToAboutLeague ( );
	void USC_GetLeagueStats ( );
	void USC_NavToAboutLeague_Delegate ( );
	void USC_GetLeagueStats_Delegate ( );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
};

UClass* UTgGfxProfileLeagueStats::pClassPointer = NULL;

// Class TgClient.TgGfxProfileOverview
// 0x0024 (0x017C - 0x0158)
class UTgGfxProfileOverview : public UTgGfxScene
{
public:
	int                                                m_requestedPlayerId;                              		// 0x0158 (0x0004) [0x0000000000000000]              
	int                                                m_cachedUpdatedPlayerId;                          		// 0x015C (0x0004) [0x0000000000000000]              
	int                                                m_nOverrideGoal1;                                 		// 0x0160 (0x0004) [0x0000000000000000]              
	int                                                m_nOverrideGoal2;                                 		// 0x0164 (0x0004) [0x0000000000000000]              
	int                                                m_nOverrideGoal3;                                 		// 0x0168 (0x0004) [0x0000000000000000]              
	int                                                m_nOverrideGoal4;                                 		// 0x016C (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __USC_NavigateToClan_Delegate__Delegate;          		// 0x0170 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3276 );

		return pClassPointer;
	};

	void Uninitialize ( );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
	void eventUpdateSelectedAchievements ( );
	void ASC_UpdateSelectedAchievements ( );
	void eventLeagueDataUpdated ( );
	void ASC_LeagueDataUpdated ( );
	void eventProfileDataUpdated ( );
	void ASC_ProfileDataUpdated ( );
	void USC_NavigateToClan ( );
	void USC_NavigateToClan_Delegate ( );
};

UClass* UTgGfxProfileOverview::pClassPointer = NULL;

// Class TgClient.TgGfxProfilePage
// 0x003C (0x0194 - 0x0158)
class UTgGfxProfilePage : public UTgGfxScene
{
public:
	int                                                cachedPlayerId;                                   		// 0x0158 (0x0004) [0x0000000000000000]              
	int                                                m_CurrentSelectedTab;                             		// 0x015C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_HideProfile;                                    		// 0x0160 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __USC_SearchPlayerByName_Delegate__Delegate;      		// 0x0164 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_TabSelected_Delegate__Delegate;             		// 0x0170 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_AddFriend_Delegate__Delegate;               		// 0x017C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_UpdatePrivacy_Delegate__Delegate;           		// 0x0188 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3277 );

		return pClassPointer;
	};

	void eventUpdateAvailable ( unsigned long vis );
	void ASC_UpdateAvailable ( unsigned long vis );
	void eventUpdateCallout ( );
	void ASC_UpdateCallout ( );
	void eventUpdatePlayer ( );
	void ASC_UpdatePlayer ( );
	void eventUpdateTab ( );
	void ASC_UpdateTab ( );
	void USC_UpdatePrivacy ( );
	void USC_UpdatePrivacy_Delegate ( );
	void USC_AddFriend ( );
	void USC_AddFriend_Delegate ( );
	void USC_TabSelected ( int tabId );
	void USC_TabSelected_Delegate ( int tabId );
	void USC_SearchPlayerByName ( struct FString PlayerName );
	void USC_SearchPlayerByName_Delegate ( struct FString PlayerName );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
};

UClass* UTgGfxProfilePage::pClassPointer = NULL;

// Class TgClient.TgGfxProfileWorshiper
// 0x002C (0x0184 - 0x0158)
class UTgGfxProfileWorshiper : public UTgGfxScene
{
public:
	unsigned char                                      m_filterId;                                       		// 0x0158 (0x0001) [0x0000000000000000]              
	int                                                m_playerId;                                       		// 0x015C (0x0004) [0x0000000000000000]              
	struct FString                                     m_sSearch;                                        		// 0x0160 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_SetGodMasteryFilter_Delegate__Delegate;     		// 0x016C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_Search_Delegate__Delegate;                  		// 0x0178 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3278 );

		return pClassPointer;
	};

	void eventFilterDataUpdated ( );
	void ASC_FilterDataUpdated ( );
	void eventGodMasteryUpdated ( );
	void ASC_GodMasteryUpdated ( );
	void USC_Search ( struct FString searchText );
	void USC_Search_Delegate ( struct FString searchText );
	void USC_SetGodMasteryFilter ( int filterId );
	void USC_SetGodMasteryFilter_Delegate ( int filterId );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
};

UClass* UTgGfxProfileWorshiper::pClassPointer = NULL;

// Class TgClient.TgGfxPurchaseGems
// 0x0010 (0x0168 - 0x0158)
class UTgGfxPurchaseGems : public UTgGfxScene
{
public:
	unsigned long                                      m_bHasGodPack : 1;                                		// 0x0158 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bHasNewPack : 1;                                		// 0x0158 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FScriptDelegate                             __USC_PurchaseItem_Delegate__Delegate;            		// 0x015C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3279 );

		return pClassPointer;
	};

	void eventUpdateData ( );
	void ASC_UpdateData ( );
	void eventHideOverlay ( );
	void ASC_HideOverlay ( );
	void eventShowOverlay ( );
	void ASC_ShowOverlay ( );
	void USC_PurchaseItem ( struct FString SKUCode, int lootId );
	void USC_PurchaseItem_Delegate ( struct FString SKUCode, int lootId );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
};

UClass* UTgGfxPurchaseGems::pClassPointer = NULL;

// Class TgClient.TgGfxPurchaseModal
// 0x0038 (0x0190 - 0x0158)
class UTgGfxPurchaseModal : public UTgGfxScene
{
public:
	struct Fdword                                      m_Location;                                       		// 0x0158 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_isMatchLobbyGod : 1;                            		// 0x015C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bIsOpen : 1;                                    		// 0x015C (0x0004) [0x0000000000000000] [0x00000002] 
	struct FScriptDelegate                             __USC_PurchaseItem_Delegate__Delegate;            		// 0x0160 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_OnCloseScreen_Delegate__Delegate;           		// 0x016C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_OnClickConfirm_Delegate__Delegate;          		// 0x0178 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_ShowNotEnoughCurrency_Delegate__Delegate;   		// 0x0184 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3280 );

		return pClassPointer;
	};

	void eventSetupBundleCompare ( class UGFxObject* Data, class UGFxObject* Data2 );
	void asc_SetupBundleCompare ( class UGFxObject* Data, class UGFxObject* Data2 );
	void eventSetupData ( class UGFxObject* Data, int popupType );
	void asc_SetupData ( class UGFxObject* Data, int popupType );
	void USC_ShowNotEnoughCurrency ( int CurrencyType );
	void USC_ShowNotEnoughCurrency_Delegate ( int CurrencyType );
	void USC_OnClickConfirm ( );
	void USC_OnClickConfirm_Delegate ( );
	void USC_OnCloseScreen ( );
	void USC_OnCloseScreen_Delegate ( );
	void USC_PurchaseItem ( int ItemId, int nPriceInUI, int CurrencyType, int Quantity, int nCouponId );
	void USC_PurchaseItem_Delegate ( int ItemId, int nPriceInUI, int CurrencyType, int Quantity, int nCouponId );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
};

UClass* UTgGfxPurchaseModal::pClassPointer = NULL;

// Class TgClient.TgGfxQuestAcquisition
// 0x0004 (0x015C - 0x0158)
class UTgGfxQuestAcquisition : public UTgGfxScene
{
public:
	unsigned long                                      m_bCheckForNewQuests : 1;                         		// 0x0158 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3281 );

		return pClassPointer;
	};

	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
};

UClass* UTgGfxQuestAcquisition::pClassPointer = NULL;

// Class TgClient.TgGfxQuestList
// 0x0008 (0x0160 - 0x0158)
class UTgGfxQuestList : public UTgGfxScene
{
public:
	int                                                m_nQuestToAbandonId;                              		// 0x0158 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_Header;                                         		// 0x015C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3282 );

		return pClassPointer;
	};

	void ReceiveGFxData ( class UGFxObject* pObj );
	void Uninitialize ( );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
};

UClass* UTgGfxQuestList::pClassPointer = NULL;

// Class TgClient.TgGfxQuestWindow
// 0x0000 (0x0158 - 0x0158)
class UTgGfxQuestWindow : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3283 );

		return pClassPointer;
	};

	void eventUpdateQuest ( int Id, int Count, int Goal, struct FString msg );
	void ASC_UpdateQuest ( int Id, int Count, int Goal, struct FString msg );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
};

UClass* UTgGfxQuestWindow::pClassPointer = NULL;

// Class TgClient.TgGfxReferralPopup
// 0x000C (0x0164 - 0x0158)
class UTgGfxReferralPopup : public UTgGfxScene
{
public:
	struct FScriptDelegate                             __USC_SendFriendReferral_Delegate__Delegate;      		// 0x0158 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3284 );

		return pClassPointer;
	};

	void Initialize ( class UTgGameMoviePlayer* theMovie );
	void eventUpdateFriendList ( );
	void ASC_UpdateFriendList ( );
	void USC_SendFriendReferral ( struct FString sQQId, struct FString sMessage, struct FString sPlayerName );
	void USC_SendFriendReferral_Delegate ( );
};

UClass* UTgGfxReferralPopup::pClassPointer = NULL;

// Class TgClient.TgGfxReferralReward
// 0x000C (0x0164 - 0x0158)
class UTgGfxReferralReward : public UTgGfxScene
{
public:
	struct FScriptDelegate                             __USC_OpenReferFriendReward_Delegate__Delegate;   		// 0x0158 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3285 );

		return pClassPointer;
	};

	void USC_OpenReferFriendReward ( );
	void USC_OpenReferFriendReward_Delegate ( );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
};

UClass* UTgGfxReferralReward::pClassPointer = NULL;

// Class TgClient.TgGfxReferrals
// 0x0024 (0x017C - 0x0158)
class UTgGfxReferrals : public UTgGfxScene
{
public:
	TArray< struct FLevelRewardData >                  m_levelRewardDatas;                               		// 0x0158 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPlayedRewardData >                 m_playedRewardDatas;                              		// 0x0164 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_OpenReferFriend_Delegate__Delegate;         		// 0x0170 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3286 );

		return pClassPointer;
	};

	void eventUpdateAchievements ( );
	void ASC_UpdateAchievements ( );
	void eventUpdatePlayerList ( );
	void ASC_UpdatePlayerList ( );
	void USC_OpenReferFriend ( );
	void USC_OpenReferFriend_Delegate ( );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
};

UClass* UTgGfxReferrals::pClassPointer = NULL;

// Class TgClient.TgGfxReferralSelector
// 0x001C (0x0174 - 0x0158)
class UTgGfxReferralSelector : public UTgGfxScene
{
public:
	float                                              m_nTimeout;                                       		// 0x0158 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bTimeoutActive : 1;                             		// 0x015C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FPointer                                    pFriendMarshal;                                   		// 0x0160 (0x0004) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    pReferralMarshal;                                 		// 0x0164 (0x0004) [0x0000000000001000]              ( CPF_Native )
	struct FScriptDelegate                             __USC_SelectReferral_Delegate__Delegate;          		// 0x0168 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3287 );

		return pClassPointer;
	};

	void Initialize ( class UTgGameMoviePlayer* theMovie );
	void eventUpdateFriendList ( );
	void ASC_UpdateFriendList ( );
	void USC_SelectReferral ( struct FString sQQId );
	void USC_SelectReferral_Delegate ( );
};

UClass* UTgGfxReferralSelector::pClassPointer = NULL;

// Class TgClient.TgGfxRewardCenter
// 0x0010 (0x0168 - 0x0158)
class UTgGfxRewardCenter : public UTgGfxScene
{
public:
	unsigned long                                      m_bShowLevelUpTab : 1;                            		// 0x0158 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bShowReturningBonusTab : 1;                     		// 0x0158 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bShowCouponTab : 1;                             		// 0x0158 (0x0004) [0x0000000000000000] [0x00000004] 
	TArray< int >                                      m_VisibleChests;                                  		// 0x015C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3288 );

		return pClassPointer;
	};

	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
};

UClass* UTgGfxRewardCenter::pClassPointer = NULL;

// Class TgClient.TgGfxSeasonTicket
// 0x0018 (0x0170 - 0x0158)
class UTgGfxSeasonTicket : public UTgGfxScene
{
public:
	class UGFxObject*                                  m_DataProvider;                                   		// 0x0158 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  m_EventDataProvider;                              		// 0x015C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bIsPrePurchase : 1;                             		// 0x0160 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_nCurrentTime;                                   		// 0x0164 (0x0004) [0x0000000000000000]              
	float                                              m_nCurrentWeek;                                   		// 0x0168 (0x0004) [0x0000000000000000]              
	float                                              m_nNextUpdateTime;                                		// 0x016C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3289 );

		return pClassPointer;
	};

	void Uninitialize ( );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
};

UClass* UTgGfxSeasonTicket::pClassPointer = NULL;

// Class TgClient.TgGfxSecurityManagement
// 0x000C (0x0164 - 0x0158)
class UTgGfxSecurityManagement : public UTgGfxScene
{
public:
	struct FScriptDelegate                             __USC_SubmitSecurity_Delegate__Delegate;          		// 0x0158 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3290 );

		return pClassPointer;
	};

	void Initialize ( class UTgGameMoviePlayer* theMovie );
	void USC_SubmitSecurity ( struct FString securityquestion, struct FString securityanswer );
	void USC_SubmitSecurity_Delegate ( struct FString securityquestion, struct FString securityanswer );
};

UClass* UTgGfxSecurityManagement::pClassPointer = NULL;

// Class TgClient.TgGfxSettingsMenu
// 0x0000 (0x0158 - 0x0158)
class UTgGfxSettingsMenu : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3291 );

		return pClassPointer;
	};

};

UClass* UTgGfxSettingsMenu::pClassPointer = NULL;

// Class TgClient.TgGfxSmiteTv
// 0x0018 (0x0170 - 0x0158)
class UTgGfxSmiteTv : public UTgGfxScene
{
public:
	struct FScriptDelegate                             __USC_GetSmiteTvTabLabels_Delegate__Delegate;     		// 0x0158 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_TabSelected_Delegate__Delegate;             		// 0x0164 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3292 );

		return pClassPointer;
	};

	void Initialize ( class UTgGameMoviePlayer* theMovie );
	void eventUpdateSelectedTab ( struct FString tabLabel );
	void ASC_UpdateSelectedTab ( struct FString tabLabel );
	void eventUpdateSmiteTvTabLabels ( );
	void ASC_UpdateSmiteTvTabLabels ( );
	void USC_TabSelected ( struct FString tabSelected );
	void USC_TabSelected_Delegate ( );
	void USC_GetSmiteTvTabLabels ( );
	void USC_GetSmiteTvTabLabels_Delegate ( );
};

UClass* UTgGfxSmiteTv::pClassPointer = NULL;

// Class TgClient.TgGfxSmiteTvLive
// 0x0014 (0x016C - 0x0158)
class UTgGfxSmiteTvLive : public UTgGfxScene
{
public:
	unsigned long                                      m_playing : 1;                                    		// 0x0158 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_videoType;                                      		// 0x015C (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __USC_GetStreamData_Delegate__Delegate;           		// 0x0160 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3293 );

		return pClassPointer;
	};

	void eventUpdateStreamList ( );
	void ASC_UpdateStreamList ( );
	void USC_GetStreamData ( );
	void USC_GetStreamData_Delegate ( );
	void UpdateStreams ( );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
};

UClass* UTgGfxSmiteTvLive::pClassPointer = NULL;

// Class TgClient.TgGfxSocial
// 0x0010 (0x0168 - 0x0158)
class UTgGfxSocial : public UTgGfxScene
{
public:
	int                                                m_nCurrentTab;                                    		// 0x0158 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __USC_TabSelected_Delegate__Delegate;             		// 0x015C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3294 );

		return pClassPointer;
	};

	void Initialize ( class UTgGameMoviePlayer* theMovie );
	void eventSetSelectedAdminTab ( int nIndex );
	void ASC_SetSelectedAdminTab ( int nIndex );
	void eventUpdateSelectedTab ( struct FString tabLabel );
	void ASC_UpdateSelectedTab ( struct FString tabLabel );
	void eventUpdateClanQuestData ( );
	void ASC_UpdateClanQuestData ( );
	void eventUpdateSocialTabLabels ( );
	void ASC_UpdateSocialTabLabels ( );
	void USC_TabSelected ( struct FString tabSelected );
	void USC_TabSelected_Delegate ( );
};

UClass* UTgGfxSocial::pClassPointer = NULL;

// Class TgClient.TgGfxSpectatorHud
// 0x00B4 (0x020C - 0x0158)
class UTgGfxSpectatorHud : public UTgGfxScene
{
public:
	int                                                m_BannedIds[ 0x6 ];                               		// 0x0158 (0x0018) [0x0000000000000000]              
	unsigned long                                      m_bFindMatchDetails : 1;                          		// 0x0170 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bTeamStatsOpen : 1;                             		// 0x0170 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              m_fUpdateWaitRT;                                  		// 0x0174 (0x0004) [0x0000000000000000]              
	float                                              m_fUpdateWaitGT;                                  		// 0x0178 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  _global;                                          		// 0x017C (0x0004) [0x0000000000000000]              
	struct FBotLifeData                                m_BotLifeData[ 0x4 ];                             		// 0x0180 (0x0060) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  m_goldArray;                                      		// 0x01E0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  m_xpArray;                                        		// 0x01E4 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __USC_UpdateStat_Delegate__Delegate;              		// 0x01E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_SetMenuIsOpen_Delegate__Delegate;           		// 0x01F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_UpdatePlayerList_Delegate__Delegate;        		// 0x0200 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3295 );

		return pClassPointer;
	};

	void eventSendGraphData ( class UGFxObject* Obj );
	void USC_UpdatePlayerList ( class UGFxObject* pPlayerList, int nLength );
	void USC_UpdatePlayerList_Delegate ( class UGFxObject* pPlayerList, int nLength );
	void USC_SetMenuIsOpen ( unsigned long bOpen );
	void USC_SetMenuIsOpen_Delegate ( unsigned long bOpen );
	void USC_UpdateStat ( int pawnId );
	void USC_UpdateStat_Delegate ( int pawnId );
	void UpdateGraph ( );
	void Initialize ( class UTgGameMoviePlayer* pParentMovie );
};

UClass* UTgGfxSpectatorHud::pClassPointer = NULL;

// Class TgClient.TgGfxStoreChest
// 0x0004 (0x015C - 0x0158)
class UTgGfxStoreChest : public UTgGfxScene
{
public:
	unsigned long                                      m_bIsClanChest : 1;                               		// 0x0158 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3296 );

		return pClassPointer;
	};

	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
};

UClass* UTgGfxStoreChest::pClassPointer = NULL;

// Class TgClient.TgGfxStoreFeatures
// 0x0018 (0x0170 - 0x0158)
class UTgGfxStoreFeatures : public UTgGfxScene
{
public:
	struct FScriptDelegate                             __USC_Initialize_Delegate__Delegate;              		// 0x0158 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_ForwardFeature_Delegate__Delegate;          		// 0x0164 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3297 );

		return pClassPointer;
	};

	void Initialize ( class UTgGameMoviePlayer* theMovie );
	void eventSetupFeatureSelector ( );
	void ASC_UpdateDP ( );
	void eventUpdateDP ( );
	void USC_ForwardFeature ( int pItemType, struct FString pItemData, struct FString pItemData2, int nLocationId );
	void USC_ForwardFeature_Delegate ( int pItemType, struct FString pItemData, struct FString pItemData2, int nLocationId );
	void USC_Initialize ( );
	void USC_Initialize_Delegate ( );
};

UClass* UTgGfxStoreFeatures::pClassPointer = NULL;

// Class TgClient.TgGFxStoreMain
// 0x0030 (0x0188 - 0x0158)
class UTgGFxStoreMain : public UTgGfxScene
{
public:
	struct FString                                     m_sChangingName;                                  		// 0x0158 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_BuyGems_Delegate__Delegate;                 		// 0x0164 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_RedeemCode_Delegate__Delegate;              		// 0x0170 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_ChangeGameName_Delegate__Delegate;          		// 0x017C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3298 );

		return pClassPointer;
	};

	void Uninitialize ( );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
	void USC_ChangeGameName ( struct FString sName );
	void USC_ChangeGameName_Delegate ( );
	void USC_RedeemCode ( struct FString sCode );
	void USC_RedeemCode_Delegate ( );
	void USC_BuyGems ( );
	void USC_BuyGems_Delegate ( );
	void eventUpdateNameChangePrice ( int nPrice );
	void eventSetSelectedTab ( int nIndex );
};

UClass* UTgGFxStoreMain::pClassPointer = NULL;

// Class TgClient.TgGfxStoreViewer
// 0x0004 (0x015C - 0x0158)
class UTgGfxStoreViewer : public UTgGfxScene
{
public:
	int                                                m_nCurrentTab;                                    		// 0x0158 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3299 );

		return pClassPointer;
	};

	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
};

UClass* UTgGfxStoreViewer::pClassPointer = NULL;

// Class TgClient.TgGfxTrainingPage
// 0x0034 (0x018C - 0x0158)
class UTgGfxTrainingPage : public UTgGfxScene
{
public:
	TArray< struct FTrainingData >                     m_TrainingDatas;                                  		// 0x0158 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_QueueId;                                        		// 0x0164 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __USC_SkipTraining_Delegate__Delegate;            		// 0x0168 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_StartTraining_Delegate__Delegate;           		// 0x0174 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_CheckTrainingComplete_Delegate__Delegate;   		// 0x0180 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3300 );

		return pClassPointer;
	};

	void eventSetup ( );
	void ASC_Setup ( );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
	void USC_CheckTrainingComplete ( );
	void USC_StartTraining ( int queueId );
	void USC_SkipTraining ( );
	void USC_CheckTrainingComplete_Delegate ( );
	void USC_StartTraining_Delegate ( int queueId );
	void USC_SkipTraining_Delegate ( );
};

UClass* UTgGfxTrainingPage::pClassPointer = NULL;

// Class TgClient.TgGfxTutorialManagement
// 0x0010 (0x0168 - 0x0158)
class UTgGfxTutorialManagement : public UTgGfxScene
{
public:
	unsigned long                                      m_bPromptedForTutorial : 1;                       		// 0x0158 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FScriptDelegate                             __USC_AcceptPopup_Delegate__Delegate;             		// 0x015C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3301 );

		return pClassPointer;
	};

	void eventDisplayPopup ( );
	void ASC_DisplayPopup ( );
	void USC_AcceptPopup ( unsigned long bAccepted );
	void USC_AcceptPopup_Delegate ( );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
};

UClass* UTgGfxTutorialManagement::pClassPointer = NULL;

// Class TgClient.TgGfxVendorStore
// 0x166C (0x17C4 - 0x0158)
class UTgGfxVendorStore : public UTgGfxScene
{
public:
	class UTgGFxObject*                                m_TutorialMC;                                     		// 0x0158 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_TutorialArrow;                                  		// 0x015C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_TutorialLabel;                                  		// 0x0160 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_TutorialBlocker;                                		// 0x0164 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_TutorialPurchaseMC;                             		// 0x0168 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_TabGroup;                                       		// 0x016C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_TabBtn[ 0x3 ];                                  		// 0x0170 (0x000C) [0x0000000000000000]              
	int                                                m_statid[ 0x10 ];                                 		// 0x017C (0x0040) [0x0000000000000000]              
	float                                              m_StatValue[ 0x10 ];                              		// 0x01BC (0x0040) [0x0000000000000000]              
	class UTgGFxObject*                                m_StatGroup;                                      		// 0x01FC (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_StatItem[ 0x10 ];                               		// 0x0200 (0x0040) [0x0000000000000000]              
	class UTgGFxObject*                                m_StandardView;                                   		// 0x0240 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_FilterGroup;                                    		// 0x0244 (0x0004) [0x0000000000000000]              
	struct FItemFilter                                 m_Filter[ 0x4 ];                                  		// 0x0248 (0x0050) [0x0000000000000000]              
	struct FItemFilter                                 m_SubFilter[ 0x13 ];                              		// 0x0298 (0x017C) [0x0000000000000000]              
	class UTgGFxObject*                                m_StdTopBtns[ 0x2 ];                              		// 0x0414 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_StdDisplayBtns[ 0x2 ];                          		// 0x041C (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_RelicUpgradeLabel;                              		// 0x0424 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_SearchText;                                     		// 0x0428 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_MultiPurchase;                                  		// 0x042C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_StdListGroup;                                   		// 0x0430 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_StdListScroll;                                  		// 0x0434 (0x0004) [0x0000000000000000]              
	struct FDisplayItem                                m_StdListItem[ 0xC ];                             		// 0x0438 (0x02A0) [0x0000000000000000]              
	class UTgGFxObject*                                m_StdGridGroup;                                   		// 0x06D8 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_StdGridScroll;                                  		// 0x06DC (0x0004) [0x0000000000000000]              
	struct FDisplayItem                                m_StdGridItem[ 0x18 ];                            		// 0x06E0 (0x0540) [0x0000000000000000]              
	class UTgGFxObject*                                m_RecommendedView;                                		// 0x0C20 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_RoleDropDown;                                   		// 0x0C24 (0x0004) [0x0000000000000000]              
	struct FDisplayItem                                m_RecListItem[ 0xC ];                             		// 0x0C28 (0x02A0) [0x0000000000000000]              
	struct FDisplayItem                                m_RecGridItem[ 0x10 ];                            		// 0x0EC8 (0x0380) [0x0000000000000000]              
	class UTgGFxObject*                                m_RecHeader[ 0x4 ];                               		// 0x1248 (0x0010) [0x0000000000000000]              
	class UTgGFxObject*                                m_RecHeaderTF[ 0x4 ];                             		// 0x1258 (0x0010) [0x0000000000000000]              
	class UTgGFxObject*                                m_RecHeaderBlock[ 0x4 ];                          		// 0x1268 (0x0010) [0x0000000000000000]              
	class UTgGFxObject*                                m_PurchaseGroup;                                  		// 0x1278 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_StoreDivider;                                   		// 0x127C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_Tier[ 0x4 ];                                    		// 0x1280 (0x0010) [0x0000000000000000]              
	struct FDisplayItem                                m_Tier1Btn[ 0x4 ];                                		// 0x1290 (0x00E0) [0x0000000000000000]              
	struct FDisplayItem                                m_Tier2Btn[ 0x4 ];                                		// 0x1370 (0x00E0) [0x0000000000000000]              
	struct FDisplayItem                                m_Tier3Btn[ 0x4 ];                                		// 0x1450 (0x00E0) [0x0000000000000000]              
	struct FDisplayItem                                m_Tier4Btn[ 0x4 ];                                		// 0x1530 (0x00E0) [0x0000000000000000]              
	struct FDisplayItem                                m_SelectedGroup;                                  		// 0x1610 (0x0038) [0x0000000000000000]              
	class UTgGFxObject*                                m_CurrencyTF;                                     		// 0x1648 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_CurrencyBG;                                     		// 0x164C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_SummaryTF;                                      		// 0x1650 (0x0004) [0x0000000000000000]              
	struct FDisplayItem                                m_SellBtn;                                        		// 0x1654 (0x0038) [0x0000000000000000]              
	struct FDisplayItem                                m_UndoBtn;                                        		// 0x168C (0x0038) [0x0000000000000000]              
	class UTgGFxObject*                                m_SellBtnBG;                                      		// 0x16C4 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_SelectBtn;                                      		// 0x16C8 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_PurchaseBtn;                                    		// 0x16CC (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_PurchaseBtnBG;                                  		// 0x16D0 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_AutoPurchase;                                   		// 0x16D4 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_StoreInactive;                                  		// 0x16D8 (0x0004) [0x0000000000000000]              
	int                                                tutorialItemIndex;                                		// 0x16DC (0x0004) [0x0000000000000000]              
	int                                                m_nFilter;                                        		// 0x16E0 (0x0004) [0x0000000000000000]              
	int                                                m_nCurrency;                                      		// 0x16E4 (0x0004) [0x0000000000000000]              
	int                                                m_nRoleIndex;                                     		// 0x16E8 (0x0004) [0x0000000000000000]              
	int                                                m_nScrollIndex;                                   		// 0x16EC (0x0004) [0x0000000000000000]              
	int                                                m_nPlayerClass;                                   		// 0x16F0 (0x0004) [0x0000000000000000]              
	int                                                m_nSelectedItem;                                  		// 0x16F4 (0x0004) [0x0000000000000000]              
	int                                                m_nCustomRoleIndex;                               		// 0x16F8 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bIsCustomRole : 1;                              		// 0x16FC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bActive : 1;                                    		// 0x16FC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bGridTip : 1;                                   		// 0x16FC (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bPhysical : 1;                                  		// 0x16FC (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bIsInStore : 1;                                 		// 0x16FC (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      m_bForceHideAutoPurchase : 1;                     		// 0x16FC (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      m_bIsGridTier : 1;                                		// 0x16FC (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      m_bIsConsumableGrid : 1;                          		// 0x16FC (0x0004) [0x0000000000000000] [0x00000080] 
	int                                                m_nHighlightIndex;                                		// 0x1700 (0x0004) [0x0000000000000000]              
	float                                              m_fDblClickItem;                                  		// 0x1704 (0x0004) [0x0000000000000000]              
	float                                              m_fDblClickTimer;                                 		// 0x1708 (0x0004) [0x0000000000000000]              
	float                                              m_fDblClickDuration;                              		// 0x170C (0x0004) [0x0000000000000000]              
	float                                              m_fRefreshTimer;                                  		// 0x1710 (0x0004) [0x0000000000000000]              
	float                                              m_fTipWaitTimer;                                  		// 0x1714 (0x0004) [0x0000000000000000]              
	float                                              m_fTipWaitDuration;                               		// 0x1718 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sSearch;                                        		// 0x171C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sSearchField;                                   		// 0x1728 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_ShownList;                                      		// 0x1734 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_ShownGrid;                                      		// 0x1740 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_ShownCategories;                                		// 0x174C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_PopularItems;                                   		// 0x1758 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_nTier1Items;                                    		// 0x1764 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_nTier2Items;                                    		// 0x1770 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_nTier3Items;                                    		// 0x177C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_nTier4Items;                                    		// 0x1788 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_nWishList;                                      		// 0x1794 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nLastSelectedItem;                              		// 0x17A0 (0x0004) [0x0000000000000000]              
	class UTgGfxVendorData*                            m_VendorData;                                     		// 0x17A4 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_nStdItemDisplay;                                		// 0x17A8 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_nStoreDisplay;                                  		// 0x17A9 (0x0001) [0x0000000000000000]              
	TArray< struct FItemCategory >                     m_Categories;                                     		// 0x17AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemCategory >                     m_CustomCategories;                               		// 0x17B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3302 );

		return pClassPointer;
	};

	void ReceiveGFxData ( class UGFxObject* pObj );
	void Uninitialize ( );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
};

UClass* UTgGfxVendorStore::pClassPointer = NULL;

// Class TgClient.TgGfxWisdomWeb
// 0x000C (0x0164 - 0x0158)
class UTgGfxWisdomWeb : public UTgGfxScene
{
public:
	struct FScriptDelegate                             __USC_StartStreamData_Delegate__Delegate;         		// 0x0158 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3303 );

		return pClassPointer;
	};

	void Uninitialize ( );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
	void ASC_UpdateStreamList ( );
	void eventUpdateStreamList ( );
	void USC_StartStreamData ( int streamId, unsigned long external, float X, float Y, float Width, float Height, float widthReal, float heightReal );
	void USC_StartStreamData_Delegate ( );
};

UClass* UTgGfxWisdomWeb::pClassPointer = NULL;

// Class TgClient.TgGfxPlayerProfile
// 0x0040 (0x00C0 - 0x0080)
class UTgGfxPlayerProfile : public UGFxObject
{
public:
	class UTgGameMoviePlayer*                          m_Movie;                                          		// 0x0080 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_receivedPlayerActivities : 1;                   		// 0x0084 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_receivedHistory : 1;                            		// 0x0084 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_receivedProfileInfo : 1;                        		// 0x0084 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_receivedMatchHistory : 1;                       		// 0x0084 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_updatedProfileData : 1;                         		// 0x0084 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      m_initializedFirstFilter : 1;                     		// 0x0084 (0x0004) [0x0000000000000000] [0x00000020] 
	int                                                m_playerId;                                       		// 0x0088 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  m_recentMatchesFilter;                            		// 0x008C (0x0004) [0x0000000000000000]              
	TArray< struct FMatchMembersFilter >               m_matchMembersFilter;                             		// 0x0090 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_SetFilter_Delegate__Delegate;               		// 0x009C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_SearchByName_Delegate__Delegate;            		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_TabSelected_Delegate__Delegate;             		// 0x00B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3304 );

		return pClassPointer;
	};

	void eventPlayerNameUpdated ( );
	void ASC_PlayerNameUpdated ( );
	void eventDropDownUpdated ( int Index );
	void ASC_DropDownUpdated ( int Index );
	void USC_TabSelected ( int Index );
	void USC_SearchByName ( struct FString PlayerName );
	void USC_SetFilter ( int filterIndex, int val );
	void USC_TabSelected_Delegate ( int Index );
	void USC_SearchByName_Delegate ( struct FString PlayerName );
	void USC_SetFilter_Delegate ( int filterIndex, int val );
	void Uninitialize ( );
	void Initialize ( class UTgGameMoviePlayer* theMovie );
};

UClass* UTgGfxPlayerProfile::pClassPointer = NULL;

// Class TgClient.TgGfxVendorData
// 0x0030 (0x006C - 0x003C)
class UTgGfxVendorData : public UObject
{
public:
	int                                                m_nPlayerClassId;                                 		// 0x003C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bSaved : 1;                                     		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bTopTier : 1;                                   		// 0x0040 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bPhysical : 1;                                  		// 0x0040 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bSubFilter : 1;                                 		// 0x0040 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_PopularIsLoaded : 1;                            		// 0x0040 (0x0004) [0x0000000000000000] [0x00000010] 
	TArray< int >                                      m_Filters;                                        		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_PopularItems;                                   		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_RecommendedProps;                               		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTgGameMoviePlayer*                          m_pMovie;                                         		// 0x0068 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3305 );

		return pClassPointer;
	};

};

UClass* UTgGfxVendorData::pClassPointer = NULL;

// Class TgClient.TgLandingPanelManager
// 0x0004 (0x005C - 0x0058)
class UTgLandingPanelManager : public UPComUIManagerBase
{
public:
	class UTgGameMoviePlayer*                          m_Movie;                                          		// 0x0058 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3306 );

		return pClassPointer;
	};

};

UClass* UTgLandingPanelManager::pClassPointer = NULL;

// Class TgClient.TgMoviePlayer
// 0x0038 (0x01B4 - 0x017C)
class UTgMoviePlayer : public UGFxMoviePlayer
{
public:
	unsigned long                                      m_bInitialized : 1;                               		// 0x017C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bInTransition : 1;                              		// 0x017C (0x0004) [0x0000000000000000] [0x00000002] 
	class UGFxObject*                                  m_mcGlobal;                                       		// 0x0180 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  m_mcRoot;                                         		// 0x0184 (0x0004) [0x0000000000000000]              
	class UTgDataHandler*                              m_DataHandler;                                    		// 0x0188 (0x0004) [0x0000000000000000]              
	class UTgSceneManager*                             m_SceneManager;                                   		// 0x018C (0x0004) [0x0000000000000000]              
	class UTgTimerManager*                             m_TimerManager;                                   		// 0x0190 (0x0004) [0x0000000000000000]              
	class UClass*                                      m_DataHandlerClass;                               		// 0x0194 (0x0004) [0x0000000000000000]              
	class UClass*                                      m_SceneManagerClass;                              		// 0x0198 (0x0004) [0x0000000000000000]              
	int                                                m_nLastTimerIndex;                                		// 0x019C (0x0004) [0x0000000000000000]              
	struct FPointer                                    m_pTgCallbackDevice;                              		// 0x01A0 (0x0004) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    m_pKeybindLookup;                                 		// 0x01A4 (0x0004) [0x0000000000001000]              ( CPF_Native )
	struct FScriptDelegate                             __DelegateOnMarshalEvent__Delegate;               		// 0x01A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3307 );

		return pClassPointer;
	};

	void usc_ClipboardCopy ( struct FString Str );
	struct FString usc_ClipboardPaste ( );
	void eventInit ( class ULocalPlayer* LocPlay );
	void eventPostWidgetInit ( );
	void eventTick ( float DeltaTime );
	bool usc_IME_Exists ( );
	bool usc_IME_SetEnabled ( unsigned long bEnabled );
	struct FString usc_getFontSize ( struct FString Identifier, struct FString SectionName );
	struct FString usc_TranslateMsg ( struct FString Identifier, struct FString SectionName );
	struct FString usc_TranslateMsgId ( int nId );
	void ShowTransitionScene ( unsigned long bShow );
	void usc_playInputLightingEffect ( struct FString PresetName );
	void usc_toggle_key_capture ( unsigned long bCapture );
	void usc_toggle_cursor ( unsigned long bShow );
	void usc_quit ( );
	void usc_Console_Command ( struct FString Cmd );
	void usc_Scene_Manager_Created ( );
	void usc_Data_Handler_Created ( );
	void UnregisterEngineCallbacks ( );
	void RegisterEngineCallbacks ( );
	struct FString GetTranslatedSpecKeyBind ( struct FString Command, int nAlternate );
	struct FString GetTranslatedKeyBind ( struct FString Command, int nAlternate );
	void OnMarshalEvent ( struct FPointer pMarEvent );
	void UnregisterMarshalCallback ( );
	bool RegisterMarshalCallback ( );
	void NativeTick ( float DeltaTime );
	void eventOnClose ( );
	void PostInit ( );
	void InitializeSceneManager ( );
	void InitializeDataHandler ( );
	class ATgClientHUD* GetHUD ( );
	class ATgPlayerController* GetPlayerOwner ( );
	void DelegateOnMarshalEvent ( struct FPointer pMarEvent );
};

UClass* UTgMoviePlayer::pClassPointer = NULL;

// Class TgClient.TgObjectBase
// 0x001C (0x0058 - 0x003C)
class UTgObjectBase : public UObject
{
public:
	class UTgGameMoviePlayer*                          m_pMovie;                                         		// 0x003C (0x0004) [0x0000000000000000]              
	struct FArray_Mirror                               MctsCallbackListeners;                            		// 0x0040 (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FArray_Mirror                               UserInterfaceListeners;                           		// 0x004C (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3308 );

		return pClassPointer;
	};

	void Uninitialize ( );
	void Initialize ( class UTgGameMoviePlayer* pMoviePlayer );
};

UClass* UTgObjectBase::pClassPointer = NULL;

// Class TgClient.TgRewardCenterManager
// 0x00AC (0x0104 - 0x0058)
class UTgRewardCenterManager : public UTgObjectBase
{
public:
	unsigned long                                      m_bPlayerLoggedIn : 1;                            		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bRewardClaimedToday : 1;                        		// 0x0058 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bDayHasRolledOver : 1;                          		// 0x0058 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bEsportsGameLive : 1;                           		// 0x0058 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bHasQuestProgress : 1;                          		// 0x0058 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      m_bHasQuestActivities : 1;                        		// 0x0058 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      m_bHasQuestRewards : 1;                           		// 0x0058 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      m_bQuestsSeenToday : 1;                           		// 0x0058 (0x0004) [0x0000000000000000] [0x00000080] 
	int                                                m_nConsecutiveRewardDays;                         		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                m_nLengthOfDay;                                   		// 0x0060 (0x0004) [0x0000000000000000]              
	float                                              m_fTimeTillNextDay;                               		// 0x0064 (0x0004) [0x0000000000000000]              
	TArray< struct FActivityGoal >                     m_pLevelUpGoals;                                  		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nPlayerLevel;                                   		// 0x0074 (0x0004) [0x0000000000000000]              
	TArray< struct FGoalRewardItem >                   m_pReturningBonus;                                		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nPartyBonusStartTime;                           		// 0x0084 (0x0004) [0x0000000000000000]              
	int                                                m_nPartyBonusEndTime;                             		// 0x0088 (0x0004) [0x0000000000000000]              
	TArray< struct FPlayerPartyBonus >                 m_pPartyBonuses;                                  		// 0x008C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSeasonTicketGameData >             m_GameDatas;                                      		// 0x0098 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSeasonTicketEventData >            m_EventData;                                      		// 0x00A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              m_fNextESportsEventUpdate;                        		// 0x00B0 (0x0004) [0x0000000000000000]              
	int                                                m_nESportsGamesStartingSoon;                      		// 0x00B4 (0x0004) [0x0000000000000000]              
	TArray< struct FQuestData >                        m_QuestList;                                      		// 0x00B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FQuestData >                        m_TrainingQuestList;                              		// 0x00C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FQuestData >                        m_SpecialEventQuestList;                          		// 0x00D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FQuestData >                        m_ProgressedQuestList;                            		// 0x00DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FQuestData >                        m_TempVisibleQuestList;                           		// 0x00E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FCouponData >                       m_CouponList;                                     		// 0x00F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              m_fNextCouponExpires;                             		// 0x0100 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3309 );

		return pClassPointer;
	};

	void Initialize ( class UTgGameMoviePlayer* pMoviePlayer );
};

UClass* UTgRewardCenterManager::pClassPointer = NULL;

// Class TgClient.TgSystemNotificationManager
// 0x0010 (0x0068 - 0x0058)
class UTgSystemNotificationManager : public UTgObjectBase
{
public:
	unsigned long                                      clanInvitesInitialized : 1;                       		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< struct FSystemMessage >                    m_SystemMessages;                                 		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3310 );

		return pClassPointer;
	};

	void Initialize ( class UTgGameMoviePlayer* pMoviePlayer );
};

UClass* UTgSystemNotificationManager::pClassPointer = NULL;

// Class TgClient.TgPagePopup
// 0x006C (0x00A8 - 0x003C)
class UTgPagePopup : public UObject
{
public:
	int                                                m_nPopupType;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	struct FString                                     m_sTitle;                                         		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sPopupDesc;                                     		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sInputTextFill;                                 		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  m_sDropDownData;                                  		// 0x0064 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sButtonLabel1;                                  		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nButtonActionID1;                               		// 0x0074 (0x0004) [0x0000000000000000]              
	int                                                m_nOptionActionID1;                               		// 0x0078 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sButtonLabel2;                                  		// 0x007C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nButtonActionID2;                               		// 0x0088 (0x0004) [0x0000000000000000]              
	int                                                m_nOptionActionID2;                               		// 0x008C (0x0004) [0x0000000000000000]              
	struct FString                                     m_sButtonLabel3;                                  		// 0x0090 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nButtonActionID3;                               		// 0x009C (0x0004) [0x0000000000000000]              
	int                                                m_nOptionActionID3;                               		// 0x00A0 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bImportant : 1;                                 		// 0x00A4 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3311 );

		return pClassPointer;
	};

	void FillPopupData ( class UGFxObject* popupData );
};

UClass* UTgPagePopup::pClassPointer = NULL;

// Class TgClient.TgPopupManager
// 0x0024 (0x0060 - 0x003C)
class UTgPopupManager : public UObject
{
public:
	class UTgGameMoviePlayer*                          m_Movie;                                          		// 0x003C (0x0004) [0x0000000000000000]              
	TArray< class UGFxObject* >                        m_queued;                                         		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UGFxObject* >                        m_dequeued;                                       		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  m_curPopup;                                       		// 0x0058 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bTempPopup : 1;                                 		// 0x005C (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3312 );

		return pClassPointer;
	};

	void ClosePopup ( );
};

UClass* UTgPopupManager::pClassPointer = NULL;

// Class TgClient.TgSceneManager
// 0x0008 (0x0088 - 0x0080)
class UTgSceneManager : public UGFxObject
{
public:
	class UGFxObject*                                  m_loadedScenes;                                   		// 0x0080 (0x0004) [0x0000000000000000]              
	unsigned long                                      bMouseCaptured : 1;                               		// 0x0084 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3313 );

		return pClassPointer;
	};

	void ShowCharacterCard ( int nClassId );
	void PopKeyCapture ( );
	void PushKeyCapture ( );
	void PopMouseCapture ( );
	void PushMouseCapture ( );
	bool IsSceneLoaded ( struct FString SceneName );
	void ListOpenScenes ( );
	void UnloadAllScenes ( TArray< struct FString > exclusionList, unsigned long bKill );
	void ToggleScene ( struct FString SceneName );
	void UnloadScene ( struct FString SceneName );
	void LoadScene ( struct FString SceneName );
	void KillScene ( struct FString SceneName );
	void InitializeSceneManager ( );
};

UClass* UTgSceneManager::pClassPointer = NULL;

// Class TgClient.TgSeasonTicketManager
// 0x0034 (0x008C - 0x0058)
class UTgSeasonTicketManager : public UPComUIManagerBase
{
public:
	class UTgGameMoviePlayer*                          m_Movie;                                          		// 0x0058 (0x0004) [0x0000000000000000]              
	TArray< struct FSeasonTicketDisplayGroups >        m_DisplayGroups;                                  		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSeasonTicketGroupDescriptions >    m_GroupDescriptions;                              		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSeasonTicketTeamImages >           m_TeamImageArray;                                 		// 0x0074 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sHomePanelDescription;                          		// 0x0080 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3314 );

		return pClassPointer;
	};

};

UClass* UTgSeasonTicketManager::pClassPointer = NULL;

// Class TgClient.TgStreamManager
// 0x0054 (0x0090 - 0x003C)
class UTgStreamManager : public UObject
{
public:
	struct FString                                     WatchEnd;                                         		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_CurrentChannel;                                 		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nNewsIndex;                                     		// 0x0054 (0x0004) [0x0000000000000000]              
	TArray< struct FGameStream >                       Streams;                                          		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_hasReceivedStreams : 1;                         		// 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_hasAnySpecial : 1;                              		// 0x0064 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_hasAnyFeatured : 1;                             		// 0x0064 (0x0004) [0x0000000000000000] [0x00000004] 
	class UTgGameMoviePlayer*                          m_Movie;                                          		// 0x0068 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __ViewerSort__Delegate;                           		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __FeaturedSort__Delegate;                         		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __LiveSort__Delegate;                             		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3315 );

		return pClassPointer;
	};

	struct FString GetFeatureDescription ( int Count );
	struct FString GetFeatureName ( int Count );
	bool HaveFeature ( );
	bool IsLiveAtIndex ( int Index );
	struct FString GetDescriptionAtIndex ( int Index );
	struct FString GetViewersAtIndex ( int Index );
	struct FString GetTitleAtIndex ( int Index );
	bool IsStream ( int Index );
	int GetTypeCountWatching ( unsigned char Type );
	int GetTypeCount ( unsigned char Type );
	int LiveSort ( struct FGameStream A, struct FGameStream B );
	int FeaturedSort ( struct FGameStream A, struct FGameStream B );
	int ViewerSort ( struct FGameStream A, struct FGameStream B );
	void eventResolveChannelName ( struct FString sChannel );
	void eventCompleteUpdate ( );
	bool eventViewStreamIndex ( int surfaceId, int Index, unsigned long external, float X, float Y, float Width, float Height, float widthReal, float heightReal, unsigned long joinChat );
	void UpdateStreams ( );
	bool HasSpecialStreams ( );
	bool OpenPlayerStream ( int nPlayerId, unsigned long external, float X, float Y, float Width, float Height, float widthReal, float heightReal );
	bool OpenStream ( int surfaceId, struct FString URL, unsigned long external, float X, float Y, float Width, float Height, float widthReal, float heightReal, unsigned long joinChat );
	void LoadStreams ( );
};

UClass* UTgStreamManager::pClassPointer = NULL;

// Class TgClient.TgSynchronizedTimer
// 0x0010 (0x0090 - 0x0080)
class UTgSynchronizedTimer : public UGFxObject
{
public:
	int                                                m_nIndex;                                         		// 0x0080 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bPausedByGame : 1;                              		// 0x0084 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bSuppressCallback : 1;                          		// 0x0084 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bRunning : 1;                                   		// 0x0084 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bPaused : 1;                                    		// 0x0084 (0x0004) [0x0000000000000000] [0x00000008] 
	class UTgMoviePlayer*                              m_MP;                                             		// 0x0088 (0x0004) [0x0000000000000000]              
	class UTgTimerManager*                             m_TimerManager;                                   		// 0x008C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3316 );

		return pClassPointer;
	};

	bool IsPaused ( );
	bool IsRunning ( );
	void EventCallback ( int nTimerId, unsigned char eEvent );
	void ExpireTimer ( unsigned long bFromCallback );
	void UpdateTimer ( float fElapsed, float fTotal, unsigned long bPaused, unsigned long bFromCallback );
	void StartTimer ( float fSeconds );
};

UClass* UTgSynchronizedTimer::pClassPointer = NULL;

// Class TgClient.TgBlinder
// 0x0000 (0x003C - 0x003C)
class UTgBlinder : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3317 );

		return pClassPointer;
	};

	void Draw ( class UCanvas* DestinationCanvas, float BlindnessFactor );
};

UClass* UTgBlinder::pClassPointer = NULL;

// Class TgClient.TgGameHUD
// 0x0048 (0x04F0 - 0x04A8)
class ATgGameHUD : public ATgClientHUD
{
public:
	class UTgOverlayMoviePlayer*                       m_OverlayMP;                                      		// 0x04A8 (0x0004) [0x0000000000100000]              
	class AActor*                                      m_LastTarget;                                     		// 0x04AC (0x0004) [0x0000000000000000]              
	int                                                m_nLastVendorTableId;                             		// 0x04B0 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bPlayingIntro : 1;                              		// 0x04B4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bShowCursor : 1;                                		// 0x04B4 (0x0004) [0x0000000000000000] [0x00000002] 
	class UTgMiniMap*                                  m_MiniMap;                                        		// 0x04B8 (0x0004) [0x0000000000000000]              
	class UTgMiniMap_Targeting*                        m_TargetingMap;                                   		// 0x04BC (0x0004) [0x0000000000000000]              
	float                                              m_fMMUpdateTimer;                                 		// 0x04C0 (0x0004) [0x0000000000000000]              
	class UTgBlinder*                                  m_Blinder;                                        		// 0x04C4 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   c_ShowSound;                                      		// 0x04C8 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   c_HideSound;                                      		// 0x04CC (0x0004) [0x0000000000000000]              
	class ATgPawn*                                     m_CurrentObjectivePawn;                           		// 0x04D0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     m_HudSceneName;                                   		// 0x04D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nGodVideoId;                                    		// 0x04E0 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sGodVideoUrl;                                   		// 0x04E4 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3318 );

		return pClassPointer;
	};

	void PlayDeviceFailResponse ( unsigned char failType );
	void ShowGodTargeter ( unsigned long bShow );
	void ShowTargetingMap ( unsigned long bShow );
	int eventGetGameState ( );
	void HoverMap ( float X, float Y, struct FString MapName );
	void PingMap ( float X, float Y, struct FString Type, struct FString MapName );
	class UTgMiniMap* GetMapByName ( struct FString MapName );
	void UpdateMMTimer ( float fNew );
	void ToggleOverlay ( );
	void ToggleMiniMap ( );
	void HideMiniMap ( );
	void ShowMiniMap ( );
	void UpdateMiniMap ( );
	void DrawMiniMap ( class UCanvas* theCanvas );
	void eventPreDemoRewind ( );
	void eventPostRender ( );
	void InitCapturePoints ( );
	void eventSetInitialState ( );
	void eventPostBeginPlay ( );
	void TogglePassiveMeter ( );
	void ToggleHudSection ( struct FString SectionName );
	void ToggleHUD ( );
	void NotifyInGame ( );
	unsigned char GetVisibilityMode ( );
	void OnMarshalEvent ( struct FPointer pMarEvent );
	void HideFinalEOMScene ( );
	void HideEOMScene ( );
	void FinishIntro ( );
	void PlayIntro ( );
	void ToggleViewSkipCinematic ( unsigned long bShow );
	void HideGameTip ( unsigned long bNoSound );
	void ShowGameTip ( int nTipId, unsigned long bNoSound, unsigned long bPopup );
	void PingWorldLocation ( struct FVector PingLocation, unsigned char Type );
	void PrecacheClass ( struct FString godName, struct FString skinName );
	void TestPrecache ( int nBotId, int nSkinId, unsigned long bAll );
	void TestEquipLobbyPassiveItems ( int nItemId1, int nItemId2 );
	void TestEquipLobbyActiveItems ( int nItemId1, int nItemId2 );
	void EndMission ( unsigned long bPlayerAttacker, unsigned char finalWinState );
	bool UpdateItemStoreItems ( class ATgRepInfo_Player* PRI );
	void UpdateScoreboard ( );
	void ToggleScoreBoard ( unsigned long bShow );
	void PlayTakeHit ( struct FRotator HitDir, int nDamage, class UClass* DamageType );
	void SellItem ( int nInventoryId );
	void UpgradeItem ( int nItemId, int nUpgradeInvId );
	void PurchaseItem ( int nItemId, int nAmount );
	void OpenSkillScreen ( );
	void OpenVendorMenu ( );
	void DeviceChangeEvent ( class ATgDevice* Dev, unsigned char Event );
	void UpdateReleaseTimeRemaining ( float fTimeRemaining );
	void UpdatePlayerReady ( class ATgRepInfo_Player* PRI );
	bool UpdatePlayerStatUI ( class ATgPawn* changedPawn );
	bool UpdateTeamUI ( );
	bool UpdatePlayerVitalsUI ( class ATgPlayerController* PC );
	bool UpdatePlayerSurrender ( class ATgRepInfo_Player* PRI );
	bool UpdatePlayerInfoUI ( class ATgRepInfo_Player* PRI );
	bool UpdateGameCapturePointControlUI ( int Index );
	void UpdateGameSiegeUI ( TArray< float > friendlyHealth, TArray< float > enemyHealth );
	bool UpdateGameScoreUI ( );
	bool UpdateGameClockUI ( );
	void UpdateBuildupTimer ( class ATgDevice* Dev );
	void UpdateRefireTimer ( class ATgDevice* Dev );
	void UpdateHoverTarget ( );
	void UpdateDebugDraws ( );
	void UpdateOverlay ( );
	void UpdateGammaControls ( );
	void InitOverlayMoviePlayer ( );
	void RegisterEngineCallbacks ( );
};

UClass* ATgGameHUD::pClassPointer = NULL;

// Class TgClient.TgSpectatorHUD
// 0x001C (0x050C - 0x04F0)
class ATgSpectatorHUD : public ATgGameHUD
{
public:
	unsigned char                                      m_eClientVisibilityMode;                          		// 0x04F0 (0x0001) [0x0000000000000000]              
	class AActor*                                      m_LastUIViewTarget;                               		// 0x04F4 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_StatsSeeded : 1;                                		// 0x04F8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bStatsPanelHidden : 1;                          		// 0x04F8 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                m_nCurrentStatsPanel;                             		// 0x04FC (0x0004) [0x0000000000000000]              
	int                                                m_nMaxStatsPanel;                                 		// 0x0500 (0x0004) [0x0000000000000000]              
	int                                                m_nCurrentInfoPanel;                              		// 0x0504 (0x0004) [0x0000000000000000]              
	int                                                m_nMaxInfoPanel;                                  		// 0x0508 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3319 );

		return pClassPointer;
	};

	void ToggleHUD ( );
	void eventTick ( float DeltaTime );
	int eventGetGameState ( );
	void SetVisibilityMode ( unsigned char Mode );
	void ToggleVisibilityMode ( );
	void ShowPreviousInfoPanel ( );
	void ShowNextInfoPanel ( );
	void ToggleStatPanel ( );
	void ShowPreviousStatPanel ( );
	void ShowNextStatPanel ( );
	bool UpdatePlayerStatUI ( class ATgPawn* changedPawn );
	void SetStatIndex ( int StatIndex );
	void SpectatorShowAll ( );
	void SpectatorHideBottomHalf ( );
	void SpectatorHideAll ( );
	void ToggleSpectatorGameStats ( );
	void ToggleSpectatorMinimap ( );
	void ToggleSpectatorPlayerPanels ( );
	void ToggleSpectatorObjectives ( );
	void ToggleSpectatorTimeline ( );
	void ToggleSecretMessage ( );
	void ToggleSpectatorControls ( );
	void ToggleSpectatorPlayerInformation ( );
	void ToggleSpectatorTicker ( );
	void SetSpectatorMode ( int nNum );
	void ToggleBans ( );
	void EndMission ( unsigned long bPlayerAttacker, unsigned char finalWinState );
	void UpdateSpectatorViewMode ( unsigned char Mode );
	void UpdateSpectatorViewTarget ( class AActor* Target );
	unsigned char GetVisibilityMode ( );
};

UClass* ATgSpectatorHUD::pClassPointer = NULL;

// Class TgClient.TgDataGroup_Game
// 0x001C (0x00D8 - 0x00BC)
class UTgDataGroup_Game : public UTgDataChunk
{
public:
	class UTgGameDC_LocalPlayer*                       m_PlayerData;                                     		// 0x00BC (0x0004) [0x0000000000000000]              
	class UTgGameDC_Target*                            m_TargetData;                                     		// 0x00C0 (0x0004) [0x0000000000000000]              
	class UTgGameDC_PlayerVitals*                      m_PlayerVitals;                                   		// 0x00C4 (0x0004) [0x0000000000000000]              
	class UTgGameDC_Chat*                              m_Chat;                                           		// 0x00C8 (0x0004) [0x0000000000000000]              
	class UTgGameDC_Game*                              m_GameData;                                       		// 0x00CC (0x0004) [0x0000000000000000]              
	class UTgGameDC_DeviceList*                        m_DevicesData;                                    		// 0x00D0 (0x0004) [0x0000000000000000]              
	class UTgGameDC_EffectList*                        m_EffectData;                                     		// 0x00D4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3320 );

		return pClassPointer;
	};

	void NotifyMapChange ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgDataGroup_Game::pClassPointer = NULL;

// Class TgClient.TgGameDC_Chat
// 0x0050 (0x010C - 0x00BC)
class UTgGameDC_Chat : public UTgDataChunk
{
public:
	struct FQueueMessage                               c_CurrentMessage;                                 		// 0x00BC (0x0028) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FQueueMessage >                     c_QueuedMessages;                                 		// 0x00E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              c_fProcessTime;                                   		// 0x00F0 (0x0004) [0x0000000000000000]              
	TArray< class UTgChatData* >                       c_DeferredMessages;                               		// 0x00F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMessageToken >                     m_MessageTokens;                                  		// 0x0100 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3321 );

		return pClassPointer;
	};

	struct FString eventTokenReplace ( struct FString Message, struct FString Token, struct FString sValue );
	void SubmitDeferredMessages ( int nChannel );
	void PlayVGSSound ( int nMsgId, int nPackId, int nBotId, int nSkinId, struct FString customSuffix );
	void PlayMessageSound ( int nMsgId, int nPackId, unsigned char ePriority );
	void AddDeferredMessage ( class UTgChatData* pData );
	void AddNotifyMsg ( struct FString sMessage, unsigned long bIsMain, int nDelay, int nColor, int nSize, int nFill );
	void AddAlert ( struct FString Message );
	void UpdateMessageSoundQueue ( );
	void Update ( float DeltaTime, unsigned long bSkipCallback );
	void AddPopupMsg ( struct FString msg );
	void AddCombatMsg ( struct FString msg );
	void AddLocalChatMsg ( struct FString msg, struct FString senderName );
	void AddChatMsg ( struct FString msg, struct FString senderName, int nTime, int nChannel, unsigned long bIsFeedback, unsigned long bIsVGS, unsigned long bOnlyIfOpen, unsigned long bHideSender, unsigned long bNew );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgGameDC_Chat::pClassPointer = NULL;

// Class TgClient.TgGameDC_Device
// 0x0020 (0x00DC - 0x00BC)
class UTgGameDC_Device : public UTgDataChunk
{
public:
	int                                                m_nDeviceInstanceId;                              		// 0x00BC (0x0004) [0x0000000000000000]              
	class UTgSynchronizedTimer*                        m_CooldownTimer;                                  		// 0x00C0 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __usc_get_mode_tooltip_delegate__Delegate;        		// 0x00C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __usc_set_cast_mode_delegate__Delegate;           		// 0x00D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3322 );

		return pClassPointer;
	};

	void usc_set_cast_mode ( int nCastMode );
	void usc_set_cast_mode_delegate ( );
	void usc_get_mode_tooltip ( int nRank );
	void usc_get_mode_tooltip_delegate ( );
	void NotifyMapChange ( );
	void UpdateCastMode ( );
	void UpdateInstanceCount ( class ATgDevice* Dev );
	void UpdateHasBeenTrained ( class ATgDevice* Dev );
	void UpdatePtsAlloc ( class ATgDevice* Dev );
	void UpdateToggleState ( class ATgDevice* Dev );
	void UpdateCooldown ( class ATgDevice* Dev );
	void UpdateCanFire ( class ATgDevice* Dev );
	void UpdateSelected ( unsigned long bSelected );
	void UpdateRelicValues ( class ATgDevice* Dev );
	void UpdateValues ( class ATgDevice* Dev );
	void DeviceChangeEvent ( class ATgDevice* Dev, unsigned char Event );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgGameDC_Device::pClassPointer = NULL;

// Class TgClient.TgGameDC_DeviceList
// 0x0064 (0x0120 - 0x00BC)
class UTgGameDC_DeviceList : public UTgDataChunk
{
public:
	class UTgGameDC_Device*                            m_DeviceList[ 0x19 ];                             		// 0x00BC (0x0064) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3323 );

		return pClassPointer;
	};

	void SetEmpty ( unsigned char eSlot );
	void UpdatePtsAlloc ( class ATgDevice* Dev );
	void UpdateToggleState ( class ATgDevice* Dev );
	void UpdateSelected ( class ATgDevice* Dev );
	void UpdateDevice ( class ATgDevice* Dev );
	void DeviceChangeEvent ( class ATgDevice* Dev, unsigned char Event );
	class UTgGameDC_Device* GetDeviceChunk ( class ATgDevice* Dev );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgGameDC_DeviceList::pClassPointer = NULL;

// Class TgClient.TgGameDC_Effect
// 0x0004 (0x00C0 - 0x00BC)
class UTgGameDC_Effect : public UTgDataChunk
{
public:
	class UTgSynchronizedTimer*                        m_lifeTimer;                                      		// 0x00BC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3324 );

		return pClassPointer;
	};

	void NotifyMapChange ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgGameDC_Effect::pClassPointer = NULL;

// Class TgClient.TgGameDC_EffectList
// 0x0040 (0x00FC - 0x00BC)
class UTgGameDC_EffectList : public UTgDataChunk
{
public:
	class UTgGameDC_Effect*                            m_EffectList[ 0x10 ];                             		// 0x00BC (0x0040) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3325 );

		return pClassPointer;
	};

	void UpdateEffects ( class ATgEffectManager* effectManager, int indexChanged );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgGameDC_EffectList::pClassPointer = NULL;

// Class TgClient.TgGameDC_Game
// 0x0021 (0x00DD - 0x00BC)
class UTgGameDC_Game : public UTgDataChunk
{
public:
	class UTgSynchronizedTimer*                        m_GameTimer;                                      		// 0x00BC (0x0004) [0x0000000000000000]              
	class UTgGameDC_Team*                              m_FriendTeamData;                                 		// 0x00C0 (0x0004) [0x0000000000000000]              
	class UTgGameDC_Team*                              m_EnemyTeamData;                                  		// 0x00C4 (0x0004) [0x0000000000000000]              
	class UTgGameDC_MapEntity*                         m_FireGiant;                                      		// 0x00C8 (0x0004) [0x0000000000000000]              
	class UTgGameDC_MapEntity*                         m_GoldFury;                                       		// 0x00CC (0x0004) [0x0000000000000000]              
	class UTgGameDC_MapEntity*                         m_OrderTitan;                                     		// 0x00D0 (0x0004) [0x0000000000000000]              
	class UTgGameDC_MapEntity*                         m_ChaosTitan;                                     		// 0x00D4 (0x0004) [0x0000000000000000]              
	class UTgGameDC_MapEntity*                         m_ExtraEntity;                                    		// 0x00D8 (0x0004) [0x0000000000000000]              
	unsigned char                                      currentGameType;                                  		// 0x00DC (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3326 );

		return pClassPointer;
	};

	void UpdateRound ( int nRound );
	void UpdateEncounter ( struct FString sRoundString );
	void UpdateGameCapturePoint ( int Index, int taskforce );
	void UpdateGameClock ( );
	void NotifyMapChange ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgGameDC_Game::pClassPointer = NULL;

// Class TgClient.TgGameDC_MapEntity
// 0x0004 (0x00C0 - 0x00BC)
class UTgGameDC_MapEntity : public UTgDataChunk
{
public:
	int                                                m_nPawnId;                                        		// 0x00BC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3327 );

		return pClassPointer;
	};

	void NotifyMapChange ( );
	void UpdateMapPosition ( struct FVector Location, struct FRotator Rotation );
	void UpdateActorMapPosition ( class AActor* gameActor );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgGameDC_MapEntity::pClassPointer = NULL;

// Class TgClient.TgGameDC_Guardian
// 0x0000 (0x00C0 - 0x00C0)
class UTgGameDC_Guardian : public UTgGameDC_MapEntity
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3328 );

		return pClassPointer;
	};

};

UClass* UTgGameDC_Guardian::pClassPointer = NULL;

// Class TgClient.TgGameDC_Player
// 0x0030 (0x00F0 - 0x00C0)
class UTgGameDC_Player : public UTgGameDC_MapEntity
{
public:
	int                                                m_nStatCount;                                     		// 0x00C0 (0x0004) [0x0000000000000000]              
	class UTgSynchronizedTimer*                        m_ReviveTimer;                                    		// 0x00C4 (0x0004) [0x0000000000000000]              
	class UTgSynchronizedTimer*                        m_UltimateTimer;                                  		// 0x00C8 (0x0004) [0x0000000000000000]              
	float                                              m_PrevUltTimer;                                   		// 0x00CC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  m_StatsArray;                                     		// 0x00D0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  m_ItemStoreArray;                                 		// 0x00D4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  m_ActiveItemArray;                                		// 0x00D8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  m_ConsumableArray;                                		// 0x00DC (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eUpdateState;                                   		// 0x00E0 (0x0001) [0x0000000000000000]              
	struct FScriptDelegate                             __USC_ForceStatsUpdate_Delegate__Delegate;        		// 0x00E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3329 );

		return pClassPointer;
	};

	void USC_ForceStatsUpdate ( );
	void USC_ForceStatsUpdate_Delegate ( );
	void NotifyMapChange ( );
	void UpdateItemStoreItems ( class ATgRepInfo_Player* PRI );
	void UpdateStats ( class ATgPawn* changedPawn );
	void UpdatePlayer ( class ATgRepInfo_Player* PRI );
	void SetDirty ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgGameDC_Player::pClassPointer = NULL;

// Class TgClient.TgGameDC_LocalPlayer
// 0x0000 (0x00F0 - 0x00F0)
class UTgGameDC_LocalPlayer : public UTgGameDC_Player
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3330 );

		return pClassPointer;
	};

	void UpdateCourierData ( class ATgPawn* Pawn );
	void UpdateSpectatorViewTarget ( class UTgGameDC_MapEntity* entity );
	void SetVendorItemList ( TArray< int > nItemIds );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgGameDC_LocalPlayer::pClassPointer = NULL;

// Class TgClient.TgGameDC_Minion
// 0x0000 (0x00F0 - 0x00F0)
class UTgGameDC_Minion : public UTgGameDC_Player
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3331 );

		return pClassPointer;
	};

};

UClass* UTgGameDC_Minion::pClassPointer = NULL;

// Class TgClient.TgGameDC_Turret
// 0x0000 (0x00F0 - 0x00F0)
class UTgGameDC_Turret : public UTgGameDC_Minion
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3332 );

		return pClassPointer;
	};

};

UClass* UTgGameDC_Turret::pClassPointer = NULL;

// Class TgClient.TgGameDC_PlayerVitals
// 0x000C (0x00CC - 0x00C0)
class UTgGameDC_PlayerVitals : public UTgGameDC_MapEntity
{
public:
	class UTgSynchronizedTimer*                        m_ReviveTimer;                                    		// 0x00C0 (0x0004) [0x0000000000000000]              
	class UTgSynchronizedTimer*                        m_RefireTimer;                                    		// 0x00C4 (0x0004) [0x0000000000000000]              
	class UTgSynchronizedTimer*                        m_RecallTimer;                                    		// 0x00C8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3333 );

		return pClassPointer;
	};

	void UpdateCoreStats ( );
	void UpdateDamageDone ( );
	void NotifyMapChange ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgGameDC_PlayerVitals::pClassPointer = NULL;

// Class TgClient.TgGameDC_RespawnLocation
// 0x0000 (0x00C0 - 0x00C0)
class UTgGameDC_RespawnLocation : public UTgGameDC_MapEntity
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3334 );

		return pClassPointer;
	};

};

UClass* UTgGameDC_RespawnLocation::pClassPointer = NULL;

// Class TgClient.TgGameDC_Tower
// 0x0000 (0x00C0 - 0x00C0)
class UTgGameDC_Tower : public UTgGameDC_MapEntity
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3335 );

		return pClassPointer;
	};

	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgGameDC_Tower::pClassPointer = NULL;

// Class TgClient.TgGameDC_Target
// 0x0000 (0x00BC - 0x00BC)
class UTgGameDC_Target : public UTgDataChunk
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3336 );

		return pClassPointer;
	};

	bool UpdateTarget ( class AActor* NewTarget, unsigned long bHovered );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgGameDC_Target::pClassPointer = NULL;

// Class TgClient.TgGameDC_Team
// 0x004C (0x0108 - 0x00BC)
class UTgGameDC_Team : public UTgDataChunk
{
public:
	int                                                m_nTaskForce;                                     		// 0x00BC (0x0004) [0x0000000000000000]              
	class UTgGameDC_Player*                            m_Members[ 0x5 ];                                 		// 0x00C0 (0x0014) [0x0000000000000000]              
	int                                                m_nMaxMemberCount;                                		// 0x00D4 (0x0004) [0x0000000000000000]              
	class UTgGameDC_Guardian*                          m_Guardian;                                       		// 0x00D8 (0x0004) [0x0000000000000000]              
	class UTgGameDC_Tower*                             m_Towers[ 0x9 ];                                  		// 0x00DC (0x0024) [0x0000000000000000]              
	class UTgSynchronizedTimer*                        m_SurrenderTimer;                                 		// 0x0100 (0x0004) [0x0000000000000000]              
	int                                                m_UpdatePlayersTeamsTimeout;                      		// 0x0104 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3337 );

		return pClassPointer;
	};

	void UpdateMembersTick ( );
	bool UpdatePlayerSurrender ( class ATgRepInfo_Player* PRI );
	bool UpdatePlayerItemStoreItems ( class ATgRepInfo_Player* PRI );
	void UpdatePlayerStat ( class ATgPawn* changedPawn );
	void UpdateMembers ( class ATgRepInfo_TaskForce* tfri );
	void NotifyMapChange ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgGameDC_Team::pClassPointer = NULL;

// Class TgClient.TgGameDataHandler
// 0x0018 (0x00B4 - 0x009C)
class UTgGameDataHandler : public UTgDataHandler
{
public:
	class UTgDataGroup_Game*                           m_Game;                                           		// 0x009C (0x0004) [0x0000000000000000]              
	class UTgDataGroup_Lobby*                          m_Lobby;                                          		// 0x00A0 (0x0004) [0x0000000000000000]              
	class UTgDataGroup_Config*                         m_Config;                                         		// 0x00A4 (0x0004) [0x0000000000000000]              
	class UTgDataGroup_EOMLobby*                       m_EOMLobby;                                       		// 0x00A8 (0x0004) [0x0000000000000000]              
	class UTgDataGroup_Settings*                       m_Settings;                                       		// 0x00AC (0x0004) [0x0000000000000000]              
	class UTgDataGroup_Clan*                           m_Clan;                                           		// 0x00B0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3338 );

		return pClassPointer;
	};

	void InitializeDataHandler ( class UTgMoviePlayer* mp );
};

UClass* UTgGameDataHandler::pClassPointer = NULL;

// Class TgClient.TgGameHUDOverlay
// 0x00B0 (0x0130 - 0x0080)
class UTgGameHUDOverlay : public UGFxObject
{
public:
	class UTgOverlayMoviePlayer*                       m_MP;                                             		// 0x0080 (0x0004) [0x0000000000000000]              
	TArray< class UGFxObject* >                        m_ReferencedObjects;                              		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPointer >                          m_OverlayList;                                    		// 0x0090 (0x000C) [0x0000000000101000]              ( CPF_Native )
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x009C (0x003C) UNKNOWN PROPERTY: MapProperty TgClient.TgGameHUDOverlay.m_OverlayMap
	TArray< struct FTG_HUD_INFO >                      c_ActorInfo;                                      		// 0x00D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FDamageInfoData >                   m_MiscDamageInfoQueue;                            		// 0x00E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x3C ];                            		// 0x00F0 (0x003C) UNKNOWN PROPERTY: MapProperty TgClient.TgGameHUDOverlay.m_DamageInfoQueues
	int                                                m_AllowedLineCheckIndex;                          		// 0x012C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3339 );

		return pClassPointer;
	};

	void ForceRebuildOverlays ( );
};

UClass* UTgGameHUDOverlay::pClassPointer = NULL;

// Class TgClient.TgGfxChatInput
// 0x0058 (0x01B0 - 0x0158)
class UTgGfxChatInput : public UTgGfxScene
{
public:
	int                                                m_nYPos;                                          		// 0x0158 (0x0004) [0x0000000000000000]              
	int                                                m_nBuffer;                                        		// 0x015C (0x0004) [0x0000000000000000]              
	int                                                m_nOffset;                                        		// 0x0160 (0x0004) [0x0000000000000000]              
	int                                                m_nChannel;                                       		// 0x0164 (0x0004) [0x0000000000000000]              
	int                                                m_nMaxWidth;                                      		// 0x0168 (0x0004) [0x0000000000000000]              
	int                                                m_nPrevIndex;                                     		// 0x016C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bInput : 1;                                     		// 0x0170 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bIntercept : 1;                                 		// 0x0170 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     m_sReplyName;                                     		// 0x0174 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sRecipient;                                     		// 0x0180 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTgGFxObject*                                m_Help;                                           		// 0x018C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_Input;                                          		// 0x0190 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_Channel;                                        		// 0x0194 (0x0004) [0x0000000000000000]              
	TArray< struct FChannelData >                      m_Shortcuts;                                      		// 0x0198 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_PrevChats;                                      		// 0x01A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3340 );

		return pClassPointer;
	};

	void Uninitialize ( );
	void Initialize ( class UTgGameMoviePlayer* pMP );
	void ReceiveGFxData ( class UGFxObject* pObj );
};

UClass* UTgGfxChatInput::pClassPointer = NULL;

// Class TgClient.TgGfxHudChat
// 0x00BC (0x0214 - 0x0158)
class UTgGfxHudChat : public UTgGfxScene
{
public:
	int                                                m_nIndex;                                         		// 0x0158 (0x0004) [0x0000000000000000]              
	int                                                m_nWidth;                                         		// 0x015C (0x0004) [0x0000000000000000]              
	int                                                m_nScroll;                                        		// 0x0160 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bInput : 1;                                     		// 0x0164 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bShowCombat : 1;                                		// 0x0164 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bAddToCombat : 1;                               		// 0x0164 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              m_fBuffer;                                        		// 0x0168 (0x0004) [0x0000000000000000]              
	float                                              m_fFadeDelay;                                     		// 0x016C (0x0004) [0x0000000000000000]              
	struct FString                                     m_sRemaining;                                     		// 0x0170 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTgChatData*                                 m_pData;                                          		// 0x017C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_BufferText;                                     		// 0x0180 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_TextMovies[ 0x8 ];                              		// 0x0184 (0x0020) [0x0000000000000000]              
	class UTgGFxObject*                                m_TextFields[ 0x8 ];                              		// 0x01A4 (0x0020) [0x0000000000000000]              
	float                                              m_fFadeTimer[ 0x8 ];                              		// 0x01C4 (0x0020) [0x0000000000000000]              
	TArray< struct FString >                           m_Messages;                                       		// 0x01E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_CombatLog;                                      		// 0x01F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned long >                            m_isVGS;                                          		// 0x01FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTgGFxObject*                                m_TabGroup;                                       		// 0x0208 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_TabBtn[ 0x2 ];                                  		// 0x020C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3341 );

		return pClassPointer;
	};

	void Initialize ( class UTgGameMoviePlayer* pMP );
	void ReceiveGFxData ( class UGFxObject* pObj );
};

UClass* UTgGfxHudChat::pClassPointer = NULL;

// Class TgClient.TgGfxVGS
// 0x00CC (0x0224 - 0x0158)
class UTgGfxVGS : public UTgGfxScene
{
public:
	unsigned long                                      m_bIntercept : 1;                                 		// 0x0158 (0x0004) [0x0000000000000000] [0x00000001] 
	class UTgGFxObject*                                m_Label[ 0xF ];                                   		// 0x015C (0x003C) [0x0000000000000000]              
	class UTgGFxObject*                                m_Keybind[ 0xF ];                                 		// 0x0198 (0x003C) [0x0000000000000000]              
	class UTgGFxObject*                                m_ListItem[ 0xF ];                                		// 0x01D4 (0x003C) [0x0000000000000000]              
	class UTgGfxVGSData*                               m_pRoot;                                          		// 0x0210 (0x0004) [0x0000000000000000]              
	class UTgGfxVGSData*                               m_pCurrent;                                       		// 0x0214 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __usc_ForceInput_Delegate__Delegate;              		// 0x0218 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3342 );

		return pClassPointer;
	};

	void usc_ForceInput ( struct FString Input );
	void usc_ForceInput_Delegate ( );
	void Initialize ( class UTgGameMoviePlayer* pMP );
	void ReceiveGFxData ( class UGFxObject* pObj );
};

UClass* UTgGfxVGS::pClassPointer = NULL;

// Class TgClient.TgGfxVGSData
// 0x003C (0x0078 - 0x003C)
class UTgGfxVGSData : public UObject
{
public:
	int                                                m_nId;                                            		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                m_nParentId;                                      		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                m_nScopeVal;                                      		// 0x0044 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sLabel;                                         		// 0x0048 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sOutput;                                        		// 0x0054 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sKeybind;                                       		// 0x0060 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< class UTgGfxVGSData* >                     m_Children;                                       		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3343 );

		return pClassPointer;
	};

};

UClass* UTgGfxVGSData::pClassPointer = NULL;

// Class TgClient.TgMiniMap
// 0x03D0 (0x040C - 0x003C)
class UTgMiniMap : public UObject
{
public:
	int                                                m_nMiniMapMode;                                   		// 0x003C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bShouldDisplayMiniMap : 1;                      		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bHasMiniMapTexture : 1;                         		// 0x0040 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bRequiresLOS : 1;                               		// 0x0040 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bUseFlashSizing : 1;                            		// 0x0040 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bSpectating : 1;                                		// 0x0040 (0x0004) [0x0000000000000000] [0x00000010] 
	float                                              m_fLastUpdateTime;                                		// 0x0044 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MiniMapBaseMIC;                                 		// 0x0048 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MiniMapMIC;                                     		// 0x004C (0x0004) [0x0000000000000000]              
	class UTexture2DDynamic*                           m_DynamicMask;                                    		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                m_nMaskSize;                                      		// 0x0054 (0x0004) [0x0000000000000000]              
	float                                              m_fIconScale;                                     		// 0x0058 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   m_vMapLocation;                                   		// 0x005C (0x0008) [0x0000000000000000]              
	int                                                m_nMapSize;                                       		// 0x0064 (0x0004) [0x0000000000000000]              
	struct FPointer                                    m_MiniMapRender;                                  		// 0x0068 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	class ATgPlayerController*                         m_OwnerPC;                                        		// 0x006C (0x0004) [0x0000000000000000]              
	int                                                m_nWorldMapSize;                                  		// 0x0070 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICPinging;                                     		// 0x0074 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICPingingEnemy;                                		// 0x0078 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICRetreat;                                     		// 0x007C (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICRetreatEnemy;                                		// 0x0080 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICAlert;                                       		// 0x0084 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICAlertEnemy;                                  		// 0x0088 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICAlertSilent;                                 		// 0x008C (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICLocalPlayer;                                 		// 0x0090 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICLocalSpectator;                              		// 0x0094 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICPlayer[ 0x5 ];                               		// 0x0098 (0x0014) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICMinion[ 0x5 ];                               		// 0x00AC (0x0014) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICWard[ 0x5 ];                                 		// 0x00C0 (0x0014) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICWardSentry[ 0x5 ];                           		// 0x00D4 (0x0014) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICVulcanThumper[ 0x5 ];                        		// 0x00E8 (0x0014) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICChangECourier[ 0x5 ];                        		// 0x00FC (0x0014) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICKaldr[ 0x5 ];                                		// 0x0110 (0x0014) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICAhMuzenCabHive[ 0x5 ];                       		// 0x0124 (0x0014) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICCapturePoint[ 0x5 ];                         		// 0x0138 (0x0014) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICPortal[ 0x5 ];                               		// 0x014C (0x0014) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICLanePusher[ 0x5 ];                           		// 0x0160 (0x0014) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICArachneWebWall[ 0x5 ];                       		// 0x0174 (0x0014) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICSylvanusBloom[ 0x5 ];                        		// 0x0188 (0x0014) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICAhPuchCorpse[ 0x5 ];                         		// 0x019C (0x0014) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICCamazotzEssence[ 0x5 ];                      		// 0x01B0 (0x0014) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICTower[ 0x3 ];                                		// 0x01C4 (0x000C) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICTitan[ 0x3 ];                                		// 0x01D0 (0x000C) [0x0000000000000000]              
	struct FBuffMonsterMIC                             m_MICPhoenix[ 0x3 ];                              		// 0x01DC (0x0024) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICMonster;                                     		// 0x0200 (0x0004) [0x0000000000000000]              
	struct FLinearColor                                m_PortalLinkColor[ 0x5 ];                         		// 0x0204 (0x0050) [0x0000000000000000]              
	struct FBuffMonsterMIC                             m_MICBuffMonster[ 0x11 ];                         		// 0x0254 (0x00CC) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICTowerDestroyed;                              		// 0x0320 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_PlayerBackground[ 0x5 ];                        		// 0x0324 (0x0014) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_TowerAttackBackground[ 0x5 ];                   		// 0x0338 (0x0014) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x034C (0x003C) UNKNOWN PROPERTY: MapProperty TgClient.TgMiniMap.m_IconMap
	struct FBitArray_Mirror                            m_MaskPoints;                                     		// 0x0388 (0x001C) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	unsigned char                                      m_Orientation;                                    		// 0x03A4 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_LocalTeam;                                      		// 0x03A5 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_VisibilityMode;                                 		// 0x03A6 (0x0001) [0x0000000000000000]              
	unsigned char                                      bUpdateCapturePoint[ 0x5 ];                       		// 0x03A7 (0x0005) [0x0000000000000000]              
	unsigned char                                      UnknownData01[ 0x3C ];                            		// 0x03AC (0x003C) UNKNOWN PROPERTY: MapProperty TgClient.TgMiniMap.m_EntityMap
	TArray< struct FLayerIndex >                       m_PortalLayeringIdx;                              		// 0x03E8 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FLayerIndex >                       m_LayeringIdx;                                    		// 0x03F4 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FMiniMapPingInfo >                  m_IndependentPings;                               		// 0x0400 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3344 );

		return pClassPointer;
	};

	bool eventCheckSpectatorState ( );
	void UpdateMapSize ( int newX );
	void UpdateMiniMapTexture ( );
	void CreateMiniMapTexture ( );
	void RemoveAllEntities ( );
	bool VerifyMapLocation ( float X, float Y );
	void GetRepInfosForLocation ( struct FVector mapLoc, TArray< class AReplicationInfo* >* repInfos );
	struct FVector WorldToMap ( struct FVector Loc );
	struct FVector MapToWorld ( struct FVector Loc );
	void ClearHover ( );
	void HoverMap ( float X, float Y );
	void PingMap ( float X, float Y, unsigned char Pt );
	bool ShouldRender ( );
	void PingWorldLocation ( struct FVector PingLocation, unsigned char Pt );
	void Init ( class ATgPlayerController* PC );
	void Draw ( class UCanvas* theCanvas );
	void Update ( );
};

UClass* UTgMiniMap::pClassPointer = NULL;

// Class TgClient.TgMiniMap_Targeting
// 0x0014 (0x0420 - 0x040C)
class UTgMiniMap_Targeting : public UTgMiniMap
{
public:
	class UMaterialInstanceConstant*                   m_MICWardTarget[ 0x5 ];                           		// 0x040C (0x0014) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3345 );

		return pClassPointer;
	};

};

UClass* UTgMiniMap_Targeting::pClassPointer = NULL;

// Class TgClient.TgGameMoviePlayer
// 0x0410 (0x05C4 - 0x01B4)
class UTgGameMoviePlayer : public UTgMoviePlayer
{
public:
	struct FMultiMap_Mirror                            RegisteredScenes;                                 		// 0x01B4 (0x003C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FMultiMap_Mirror                            RegisteredObjects;                                		// 0x01F0 (0x003C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FMultiMap_Mirror                            RegisteredSceneEvents;                            		// 0x022C (0x003C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FMultiMap_Mirror                            RegisteredObjectEvents;                           		// 0x0268 (0x003C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	unsigned long                                      m_bIsInTraining : 1;                              		// 0x02A4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      c_bChatReady : 1;                                 		// 0x02A4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bShownIntroMovie : 1;                           		// 0x02A4 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bCheckForCinematic : 1;                         		// 0x02A4 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bHasNoPlayer : 1;                               		// 0x02A4 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      m_bUseAltUI : 1;                                  		// 0x02A4 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      m_bAllowAllChat : 1;                              		// 0x02A4 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      m_bLeaver : 1;                                    		// 0x02A4 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      m_bRenderGammaControls : 1;                       		// 0x02A4 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      m_bInLoginQueue : 1;                              		// 0x02A4 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      m_bQueueStatsRequestOutstanding : 1;              		// 0x02A4 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      m_bForceTrainingOpen : 1;                         		// 0x02A4 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      m_bPrintClanPlayerInvites : 1;                    		// 0x02A4 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      m_bShouldNotKillSeasonalMusic : 1;                		// 0x02A4 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      m_bFriendlyWon : 1;                               		// 0x02A4 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      m_requestPromptTutorialMatch : 1;                 		// 0x02A4 (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      m_bLobbyPlayback : 1;                             		// 0x02A4 (0x0004) [0x0000000000000000] [0x00010000] 
	unsigned long                                      m_bAllowSpaceBar : 1;                             		// 0x02A4 (0x0004) [0x0000000000000000] [0x00020000] 
	unsigned long                                      isNoItemPopup : 1;                                		// 0x02A4 (0x0004) [0x0000000000000000] [0x00040000] 
	unsigned long                                      isMatchLobbyTrade : 1;                            		// 0x02A4 (0x0004) [0x0000000000000000] [0x00080000] 
	unsigned long                                      disableNoItemPopup : 1;                           		// 0x02A4 (0x0004) [0x0000000000000000] [0x00100000] 
	unsigned long                                      m_bHUDVisible : 1;                                		// 0x02A4 (0x0004) [0x0000000000000000] [0x00200000] 
	unsigned long                                      m_bAutoParty : 1;                                 		// 0x02A4 (0x0004) [0x0000000000000000] [0x00400000] 
	unsigned long                                      m_bAutoOpenParty : 1;                             		// 0x02A4 (0x0004) [0x0000000000000000] [0x00800000] 
	unsigned long                                      m_bPrevLeader : 1;                                		// 0x02A4 (0x0004) [0x0000000000000000] [0x01000000] 
	unsigned long                                      m_bHasClosedTraining : 1;                         		// 0x02A4 (0x0004) [0x0000000000000000] [0x02000000] 
	unsigned long                                      m_bWasCustom : 1;                                 		// 0x02A4 (0x0004) [0x0000000000000000] [0x04000000] 
	unsigned long                                      m_isPlayingTutorial : 1;                          		// 0x02A4 (0x0004) [0x0000000000000000] [0x08000000] 
	unsigned long                                      m_bTutorialPlayed : 1;                            		// 0x02A4 (0x0004) [0x0000000000000000] [0x10000000] 
	unsigned long                                      m_bShowMovies : 1;                                		// 0x02A4 (0x0004) [0x0000000000000000] [0x20000000] 
	unsigned long                                      m_bLoginComplete : 1;                             		// 0x02A4 (0x0004) [0x0000000000000000] [0x40000000] 
	unsigned long                                      m_bAllShopVendorsReceived : 1;                    		// 0x02A4 (0x0004) [0x0000000000000000] [0x80000000] 
	unsigned long                                      m_bWaitingForAllShopVendors : 1;                  		// 0x02A8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bEnableShopVendorTimer : 1;                     		// 0x02A8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bResetMusicTheme : 1;                           		// 0x02A8 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bWasFacebookStreaming : 1;                      		// 0x02A8 (0x0004) [0x0000000000000000] [0x00000008] 
	struct FString                                     m_PlayerLookup;                                   		// 0x02AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sRealMoneyCurCode;                              		// 0x02B8 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      c_DeferredChannelTabs;                            		// 0x02C4 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FUIChangeStruct >                   m_UIChangeEvents;                                 		// 0x02D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FUIQueuedAcquisition >              m_QueuedAcquisitions;                             		// 0x02DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_QueuedAchievementId;                            		// 0x02E8 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	float                                              m_fLastAcquisitionProcessTime;                    		// 0x02F4 (0x0004) [0x0000000000000000]              
	int                                                m_nClearTransitionTicks;                          		// 0x02F8 (0x0004) [0x0000000000000000]              
	int                                                m_nEventDefaultTab;                               		// 0x02FC (0x0004) [0x0000000000000000]              
	TArray< struct FSysCounterData >                   m_CountDatas;                                     		// 0x0300 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FWidgetBinding >                    m_WidgetsBound;                                   		// 0x030C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FCardTextureWidget >                m_CardWidgets;                                    		// 0x0318 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FWebRegion >                        m_WebRegions;                                     		// 0x0324 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FName >                             GfxObjectBindings;                                		// 0x0330 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_AutoReinviteList;                               		// 0x033C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_AutoReinviteQueueId;                            		// 0x0348 (0x0004) [0x0000000000000000]              
	TArray< class UGFxObject* >                        m_renderTargetCallback;                           		// 0x034C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  m_mcHUD;                                          		// 0x0358 (0x0004) [0x0000000000000000]              
	class UTgGameDC_MapEntity*                         m_CurrentObjectiveEntity;                         		// 0x035C (0x0004) [0x0000000000000000]              
	class UTgGfxVendorData*                            m_VendorData;                                     		// 0x0360 (0x0004) [0x0000000000000000]              
	class UTgBrowserManager*                           m_WebBrowser;                                     		// 0x0364 (0x0004) [0x0000000000000000]              
	class UTgStreamManager*                            m_StreamManager;                                  		// 0x0368 (0x0004) [0x0000000000000000]              
	class UTgPopupManager*                             m_PopupManager;                                   		// 0x036C (0x0004) [0x0000000000000000]              
	class UTgLandingPanelManager*                      m_LandingPanelManager;                            		// 0x0370 (0x0004) [0x0000000000000000]              
	class UTgSeasonTicketManager*                      m_SeasonTicketManager;                            		// 0x0374 (0x0004) [0x0000000000000000]              
	class UTgSystemNotificationManager*                m_SystemNotificationManager;                      		// 0x0378 (0x0004) [0x0000000000000000]              
	class UTgRewardCenterManager*                      m_RewardCenterManager;                            		// 0x037C (0x0004) [0x0000000000000000]              
	struct FString                                     m_sUserName;                                      		// 0x0380 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sPass;                                          		// 0x038C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sLoginErrorCache;                               		// 0x0398 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sCurseURL;                                      		// 0x03A4 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sWisdomScreenURL;                               		// 0x03B0 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sRewardCenterWebURL;                            		// 0x03BC (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	float                                              m_fLoginQueueTimer;                               		// 0x03C8 (0x0004) [0x0000000000000000]              
	float                                              m_fTimerUpdate;                                   		// 0x03CC (0x0004) [0x0000000000000000]              
	float                                              m_fLastQueueStatsRequest;                         		// 0x03D0 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sSpectateTarget;                                		// 0x03D4 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                m_nReplayId;                                      		// 0x03E0 (0x0004) [0x0000000000000000]              
	struct FString                                     m_LobbyErrorMessage;                              		// 0x03E4 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                m_nFeatureAutoGodId;                              		// 0x03F0 (0x0004) [0x0000000000000000]              
	int                                                m_nFeatureAutoSkinId;                             		// 0x03F4 (0x0004) [0x0000000000000000]              
	int                                                m_nFeatureAutoEmoteId;                            		// 0x03F8 (0x0004) [0x0000000000000000]              
	int                                                m_nFeatureAutoWardSkinId;                         		// 0x03FC (0x0004) [0x0000000000000000]              
	int                                                m_bFeatureAutoVoicePack;                          		// 0x0400 (0x0004) [0x0000000000000000]              
	int                                                m_nFeatureItemType;                               		// 0x0404 (0x0004) [0x0000000000000000]              
	int                                                m_nFeatureItemId;                                 		// 0x0408 (0x0004) [0x0000000000000000]              
	int                                                m_nMatchDetailsAutoMatchId;                       		// 0x040C (0x0004) [0x0000000000000000]              
	struct FString                                     m_socialPageAutoTab;                              		// 0x0410 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_smiteTvPageAutoTab;                             		// 0x041C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_profilePageAutoTab;                             		// 0x0428 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sLeaguePageAutoTab;                             		// 0x042C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_playerProfileAutoPlayerName;                    		// 0x0438 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_LastPlayNowScreen;                              		// 0x0444 (0x0004) [0x0000000000000000]              
	int                                                m_activityRedirectId;                             		// 0x0448 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sStoreAutoSearch;                               		// 0x044C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_goalRedirectId;                                 		// 0x0458 (0x0004) [0x0000000000000000]              
	int                                                m_rewardCenterTab;                                		// 0x045C (0x0004) [0x0000000000000000]              
	int                                                m_rewardCenterItemId;                             		// 0x0460 (0x0004) [0x0000000000000000]              
	int                                                m_nSeasonTicketItemId;                            		// 0x0464 (0x0004) [0x0000000000000000]              
	int                                                m_nReturnToNavigationAction;                      		// 0x0468 (0x0004) [0x0000000000000000]              
	int                                                m_nReturnToEventId;                               		// 0x046C (0x0004) [0x0000000000000000]              
	int                                                m_nReturnToId;                                    		// 0x0470 (0x0004) [0x0000000000000000]              
	int                                                m_TreasureContentItemId;                          		// 0x0474 (0x0004) [0x0000000000000000]              
	int                                                m_nBundledItemId;                                 		// 0x0478 (0x0004) [0x0000000000000000]              
	int                                                m_currentPurchaseId;                              		// 0x047C (0x0004) [0x0000000000000000]              
	int                                                m_nCurrentPurchaseQuantity;                       		// 0x0480 (0x0004) [0x0000000000000000]              
	class UTextureRenderTarget2D*                      m_RenderTarget;                                   		// 0x0484 (0x0004) [0x0000000000000000]              
	class UTexture*                                    m_BrowserTexture[ 0xC ];                          		// 0x0488 (0x0030) [0x0000000000000000]              
	unsigned char                                      m_nCurrentActionId;                               		// 0x04B8 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_nCurrentEventId;                                		// 0x04B9 (0x0001) [0x0000000000000000]              
	int                                                m_nGodTargeterFlags;                              		// 0x04BC (0x0004) [0x0000000000000000]              
	struct FString                                     m_SpecTeamNameEnemy;                              		// 0x04C0 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_SpecTeamNameFriendly;                           		// 0x04CC (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_SpecClanNameFriendly;                           		// 0x04D8 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_SpecClanNameEnemy;                              		// 0x04E4 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_SpecState;                                      		// 0x04F0 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class UAlienFXManager*                             m_AlienFX;                                        		// 0x04FC (0x0004) [0x0000000000000000]              
	int                                                m_uiDisplayMode;                                  		// 0x0500 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  _global;                                          		// 0x0504 (0x0004) [0x0000000000000000]              
	float                                              m_fLobbyPlaybackTime;                             		// 0x0508 (0x0004) [0x0000000000000000]              
	float                                              m_fLobbyNextFireTime;                             		// 0x050C (0x0004) [0x0000000000000000]              
	TArray< struct FLastMatchMember >                  m_lastMatchMembers;                               		// 0x0510 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FLastPartiedMember >                m_lastPartiedMembers;                             		// 0x051C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_PrevQueue;                                      		// 0x0528 (0x0004) [0x0000000000000000]              
	TArray< int >                                      m_PrevParty;                                      		// 0x052C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_NewQueueStatus;                                 		// 0x0538 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_CalloutVVIds;                                   		// 0x0544 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_CalloutVVStrings;                               		// 0x0550 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_PrevMatchQueueState;                            		// 0x055C (0x0004) [0x0000000000000000]              
	int                                                m_nFeedbackType;                                  		// 0x0560 (0x0004) [0x0000000000000000]              
	int                                                m_nPlayerNoteId;                                  		// 0x0564 (0x0004) [0x0000000000000000]              
	int                                                m_browserOpen;                                    		// 0x0568 (0x0004) [0x0000000000000000]              
	float                                              m_fWaitTimeoutForShopVendors;                     		// 0x056C (0x0004) [0x0000000000000000]              
	struct FString                                     m_sReportPlayerName;                              		// 0x0570 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sReportPlayerReason;                            		// 0x057C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                m_nReportPlayerReasonCode;                        		// 0x0588 (0x0004) [0x0000000000000000]              
	int                                                m_nReportPlayerTaskForce;                         		// 0x058C (0x0004) [0x0000000000000000]              
	int                                                m_nReportPlayerPlayerCount;                       		// 0x0590 (0x0004) [0x0000000000000000]              
	int                                                m_nReportPlayerReporteeTaskForce;                 		// 0x0594 (0x0004) [0x0000000000000000]              
	int                                                m_bLastMessageTime;                               		// 0x0598 (0x0004) [0x0000000000000000]              
	struct FString                                     m_homeUrl;                                        		// 0x059C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FPointer                                    m_ConfigManager;                                  		// 0x05A8 (0x0004) [0x0000000000001000]              ( CPF_Native )
	TArray< class UTgChatData* >                       m_TransitionChatCache;                            		// 0x05AC (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __DelegateGFxList__Delegate;                      		// 0x05B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3346 );

		return pClassPointer;
	};

	void DelegateGFxList ( class UGFxObject* List );
	void eventCacheLoggedInGamepad ( );
	bool eventShowConsoleLoginUI ( int ControllerId, unsigned long bForceLoginAfter );
	void ToggleAlienFX ( );
	int usc_get_gamestate ( );
	void usc_activate_key ( );
	void SetUISetting ( struct FString Setting, struct FString Value );
	void usc_minimap_hovered ( float X, float Y, struct FString MapName );
	void usc_minimap_pinged ( float X, float Y, struct FString Type, struct FString MapName );
	void FlashCaptureKeyboard ( );
	void FlashReleaseKeyboard ( );
	void FlashCaptureMouse ( );
	void FlashReleaseMouse ( );
	void usc_rotate_lobby_model ( float fValue );
	void ListOpenScenes ( );
	void EnableItemWarningPopup ( );
	void DisableItemWarningPopup ( );
	void CloseAllScenes ( );
	void eventClosePartyInviteDialog ( );
	void CheckSpecialInput ( class ATgPlayerController* TgPC, struct FName ButtonName, unsigned char Event );
	void eventDisplayLoginUI ( );
	void eventDisplayNormalUI ( );
	void eventDisplayNewUserExperience ( );
	bool eventShouldBlockKey ( int ControllerId, struct FName ButtonName, unsigned char Event );
	bool eventFilterButtonInput ( int ControllerId, struct FName ButtonName, unsigned char Event );
	void eventPostWidgetInit ( );
	bool eventWidgetUnloaded ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void eventInit ( class ULocalPlayer* LocPlay );
	bool usc_ConfirmHudSkin ( int nId );
	struct FString usc_GetHudSkinPath ( );
	class UGFxObject* GetWidget ( struct FName WidgetName );
	void ASC_SetRoleRequest ( struct FString sPlayerNetId, struct FString roleAbrev );
	void usc_redeem_login_bonus ( );
	bool GetBrowserType ( int nURLType );
	void usc_forceFlushActionLog ( );
	void RequestPurchase ( int nVendorId, int nItemId, int nPriceInUI, int nCurrencyType, int nQuantity, struct Fdword locationId, int nCouponId );
	void ToggleCombatLog ( );
	bool IsLandingPanelAvailable ( );
	void SetHUDVisiblity ( );
	void SetLanguage ( );
	void eventGainFocus ( );
	void eventLostFocus ( );
	void eventShowFacebookStream ( unsigned long bShouldShow );
	void eventHideNotification ( int nType );
	void eventShowNotification ( int nType, struct FString Message, struct FString Message2, class UGFxObject* Data );
	void TestHideNotification ( );
	void TestShowNotification ( );
	class UGFxObject* GetTestNotificationData ( );
	int usc_get_ui_display_mode ( );
	void ShowLoginUI ( );
	void ShowNormalUI ( );
	void ShowNewUserExperience ( );
	bool SetUIDisplayMode ( int displayMode );
	void TestClearDeferBlacklist ( );
	bool TestAddDeferBlacklistEntry ( int newEntry );
	void TestDeferBlacklist ( unsigned long bQueue );
	void TestPurchaseClanNameChange ( struct FString sName, struct FString sTag );
	void TestSendPlayerTrackingEvent ( int nEvent, int nSubEvent, struct FString sRefName, int nRefValue );
	void TestShowPopupModal ( int nType );
	void TestShowAcquisition ( int nType, int nIndex, struct FString sHeader, struct FString sFooter );
	void NativeTick ( float DeltaTime );
	void OpenPurchaseGems ( struct FString SKUCode );
	void UpdateTutorialImage ( unsigned long Show, int HeaderMsgId, int ImageId, int msgId );
	void HandleEscapeKey ( );
	void PostInit ( );
	void UpdateQuestUI ( int Id, int Count, int Goal, int msgId );
	void UIChangeEvent ( class AActor* refActor, unsigned char Event, unsigned long bUnique, int subType );
	void usc_allowSpaceBar ( unsigned long bAllow );
	void SetSpecState ( struct FString stateString );
	void SetSpecTeamName ( unsigned long bEnemy, struct FString TeamName );
	struct FString GetHUDTeamName ( unsigned long bEnemy );
	class UGFxObject* usc_getItemData ( int ItemId, int quantityCount, int vendorId );
	void OpenWorldScene ( struct FString CameraName );
	void SendCloseAllPopup ( );
	struct FString usc_getPassiveMeterPath ( int BotID );
	bool usc_isLoginReady ( );
	void SetLoginReady ( unsigned long fromIntro );
	void RunIntroMovie ( unsigned long bRun );
	void GotoItem ( int nItemId, int nReturnToTarget, int nReturnToEvent, unsigned long bUseAltRedirect );
	void SetRoleRequest ( struct FString senderName, int roleIndex );
	void AddRemoveDeferredChannelTab ( unsigned long bAdd, int nChannelId );
	void HandleClanPlayerInviteUpdates ( struct FPointer pEvent );
	void ShowPopupMessage ( struct FString sTitle, struct FString sMessage );
	void USC_SelectedPopup ( int nActionID, struct FString sInputValue, struct FString sSecondaryInputValue );
	void AddInitialChatMessages ( );
	void SendClosePopup ( );
	void SendOpenPopup ( class UTgPagePopup* pPopup );
	void CloseChatTab ( int nChannel, struct FString sSender );
	void OpenChatTab ( int nChannel, unsigned long bForce );
	void UpdateMapBackground ( );
	void AttemptAutoReplayDemoRecording ( );
	void AttemptAutoLogin ( );
	class UTgGameDC_Player* GetCharacterBuilderData ( );
	class UTgDataGroup_Clan* GetClanData ( );
	class UTgLobbyDC_Lobby* GetLobbyDataChunk ( );
	class UTgLobbyDC_Match* GetMatchDataChunk ( );
	class UTgDataGroup_Lobby* GetLobbyData ( );
	class UTgDataGroup_Game* GetGameData ( );
	class UTgGameDataHandler* GetDataHandler ( );
	void UnregisterWebPageRegion ( struct FString sName );
	int RegisterWebPageRegion ( struct FString sName, unsigned long bWidescreen, int nStreamId, struct FString sUrl, float X, float Y, float Width, float Height, float realWidth, float realHeight );
	void USC_OpenExternalBrowser ( struct FString externalURL );
	void usc_UnregisterCardTexture ( class UGFxObject* Widget );
	void usc_RegisterCardTexture ( class UGFxObject* Widget, int nItemId, float X, float Y, float Width, float Height );
	void GetFeedback ( int nType );
	void usc_onServerStabilityFeedback ( );
	bool is_item_owned ( int ItemId );
	bool usc_is_item_owned ( struct FString ItemId );
	bool usc_is_time_between ( struct FString Start, struct FString End );
	void usc_unregister_mouse_region ( struct FString Key );
	void usc_register_mouse_region ( struct FString Key, int X, int Y, int Width, int Height );
	bool usc_is_in_game ( );
	int usc_GetRentedTimeLeft ( int nItemId, int nIdType );
	void ShowGodPackPurchase ( );
	void usc_quit ( );
	void usc_request_goto_lobby ( struct FString Title, struct FString Desc );
	void usc_request_quit ( struct FString Title, struct FString Desc );
	void InvokeRenderTargetReady ( );
	void SetRenderTargetCallback ( class UGFxObject* targetObj, unsigned long addObj );
	bool SetRenderTargetEnabled ( unsigned long bEnabled, int surfaceId, int X, int Y, float widthReal, float heightReal, float Width, float Height );
	void usc_Scene_Manager_Scene_Unloaded ( struct FString sSceneName );
	void usc_Scene_Manager_Scene_Loaded ( struct FString sSceneName );
	bool usc_resize_browser ( int surfaceId, float X, float Y, float Width, float Height, float widthReal, float heightReal );
	void usc_enable_browser_input ( unsigned long bEnable );
	void ChangeHudSection ( struct FString Section, float percentX, float percentY, float Scale, float dockX, float dockY, struct FString dockObj, float dockObjX, float dockObjY, unsigned long outX, unsigned long outY );
	void UnloadHudSection ( struct FString Section );
	void usc_rejectNotification ( int nNotificationType, int nId );
	void usc_acceptNotification ( int nNotificationType, int nId );
	void LeavePartyNotification ( );
	void DisbandPartyNotification ( );
	void usc_autoConfigureSettings ( );
	void usc_surrender ( unsigned long bSurrender );
	void usc_goto_item ( int nItemId, unsigned long bUseAltRedirect );
	int usc_get_sellback_price ( int nItemId );
	int usc_full_sellback_available ( int nItemId );
	void usc_chat_close_tab ( int nChannel, struct FString Sender );
	void usc_set_chat_channel ( int nChannel );
	int usc_get_chat_channel ( );
	void usc_chat_ready ( );
	void usc_resend_private_messages ( );
	void usc_vgs_command ( int nId, unsigned long bSubMenu );
	void usc_send_chat ( int nChannel, struct FString msg, struct FString Recipient );
	void usc_toggle_player_mute ( struct FString sPlayerName );
	struct FString usc_get_class_purchase_pricing ( int nClassId );
	void usc_test_music_theme ( int nItemId );
	void usc_test_announcer_pack ( int nItemId );
	void usc_test_voice_pack ( int nVoicePackId, int nSkinId );
	void usc_show_skin ( int nSkinId );
	void usc_show_god_detail ( int nClassId );
	void usc_request_treasure_roll ( int nItemId, int CurrencyType );
	bool usc_lobbyFeaturesShouldShow ( );
	bool usc_isFriend ( struct FString PlayerName );
	int usc_get_server_time ( );
	int usc_get_time ( );
	bool usc_isInSiege ( );
	bool usc_isInTutorial ( );
	bool usc_isCapsLockActive ( );
	void usc_isPlayingTutorial ( unsigned long Toggle );
	void usc_stopSoundCue ( struct FString soundTheme, struct FString SoundEventName );
	void usc_join_channel ( int Id );
	void usc_redeem_reward ( int nActId, int nGoalId, int nCount );
	struct FString usc_GetWinningTeamName ( );
	struct FString usc_get_device_tooltip ( int nItemId, int nRank );
	void usc_set_auto_skill_up ( unsigned long bAutoSkill, unsigned long bForMatch );
	void usc_set_auto_purchase ( unsigned long bAutoPurchase, unsigned long bForMatch );
	void usc_sell_item ( int nInventoryId );
	void usc_upgrade_item ( int nItemId, int nUpgradeInvId );
	void usc_purchase_item ( int nItemId, int nAmount );
	void usc_force_purchase_current_item ( );
	void usc_report_player ( struct FString sPlayerName, int nReasonCode, struct FString sReason, int nTaskForce, int nPlayerCount, int nReportedPlayerTaskForce );
	void usc_friend_action ( struct FString sType, struct FString sInput );
	bool usc_get_game_deserter ( );
	void goto_lobby ( unsigned long eom );
	void usc_disconnect ( );
	bool usc_is_safe_to_load ( struct FString sUrl );
	void usc_forward_feature2 ( int pItemType, struct FString pItemData, struct FString pItemData2 );
	void usc_forward_feature ( int pItemType, struct FString pItemData );
	int GetSysCounterValue ( int nCounterId );
	int usc_getBoostedTime ( );
	void usc_introFinished ( );
	bool usc_ableToSkipTutorial ( );
	int GetPortalType ( );
	bool AreDailyQuestsActive ( );
	bool UseAltQueueUI ( );
	bool UseAltUI ( );
	bool usc_is_party_leader ( );
	bool usc_can_invite_players ( );
	void usc_kick_team_player ( struct FString sPlayerName );
	void usc_Decline_Match_Invite ( );
	void usc_Accept_Match_Invite ( );
	struct FString usc_CheckForLoginErrorMsg ( );
	void usc_match_play_emote ( int nEmoteId );
	void usc_match_purchase_voice_pack ( int nVoicePackItemId );
	bool usc_match_can_purchase_random_class ( int nQueueId );
	void usc_match_close_random_class_popup ( );
	void usc_match_request_random_class ( );
	struct FString usc_GetGameName ( );
	void usc_viewStatsOnline ( struct FString sInstanceId );
	void usc_watch_eom_replay ( struct FString sInstanceId );
	void usc_match_cancel_trade ( );
	void usc_match_request_trade ( int nPlayerId );
	void usc_match_ban_class ( int nClassId );
	void usc_close_eom_lobby ( int nNavigationTarget );
	bool usc_can_play_again ( );
	void usc_play_again ( );
	void usc_match_lock_in ( );
	void usc_match_choose_skin ( int nSkinId );
	void usc_match_choose_class ( int nClassId );
	void usc_queue_leave ( );
	void usc_queue_create_team ( int nQueueId, struct FString sPassword );
	void usc_saveTransformSettings ( struct FString TransformSettings );
	struct FString usc_loadTransformSettings ( );
	void usc_clearReferral ( struct FString sExtId );
	void usc_clearLeagueDC ( );
	void usc_passwordInputFocus ( );
	void usc_nameInputFocus ( );
	void usc_CancelQueue ( );
	void usc_request_account_info ( int nType );
	struct FString usc_getEULAText ( );
	void usc_acceptEULA ( );
	void usc_createPlayerName ( struct FString sLoginName, struct FString sPass, struct FString sNewPlayerName );
	void usc_remember_name_changed ( unsigned long bNewValue );
	void usc_attempt_auto_login ( );
	void usc_login ( struct FString UserName, struct FString Password );
	bool usc_loginExits ( );
	void Replay ( int nInstanceId, struct FString sPassword );
	void EndLobbyPlayback ( );
	void CancelPlayback ( );
	void OnDemoReady ( );
	void LoadBrowserScene ( );
};

UClass* UTgGameMoviePlayer::pClassPointer = NULL;

// Class TgClient.TgOverlayMoviePlayer
// 0x0008 (0x01BC - 0x01B4)
class UTgOverlayMoviePlayer : public UTgMoviePlayer
{
public:
	unsigned long                                      m_bEnableOverlay : 1;                             		// 0x01B4 (0x0004) [0x0000000000000000] [0x00000001] 
	class UTgGameHUDOverlay*                           m_mcOverlay;                                      		// 0x01B8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3347 );

		return pClassPointer;
	};

	bool eventWidgetUnloaded ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
};

UClass* UTgOverlayMoviePlayer::pClassPointer = NULL;

// Class TgClient.TgGameSceneManager
// 0x0000 (0x0088 - 0x0088)
class UTgGameSceneManager : public UTgSceneManager
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3348 );

		return pClassPointer;
	};

};

UClass* UTgGameSceneManager::pClassPointer = NULL;

// Class TgClient.TgLobbyHUD
// 0x0050 (0x04F8 - 0x04A8)
class ATgLobbyHUD : public ATgClientHUD
{
public:
	int                                                c_PendingClassId;                                 		// 0x04A8 (0x0004) [0x0000000000000000]              
	int                                                c_PendingSkinId;                                  		// 0x04AC (0x0004) [0x0000000000000000]              
	int                                                c_CurrentClassId;                                 		// 0x04B0 (0x0004) [0x0000000000000000]              
	int                                                c_CurrentSkinId;                                  		// 0x04B4 (0x0004) [0x0000000000000000]              
	int                                                c_PendingPedestalSkinId;                          		// 0x04B8 (0x0004) [0x0000000000000000]              
	int                                                c_CurrentPedestalSkinId;                          		// 0x04BC (0x0004) [0x0000000000000000]              
	class ATgLobbyCamera*                              c_CurrentCamera;                                  		// 0x04C0 (0x0004) [0x0000000000000000]              
	class UTgCameraModifier_EmoteZoom*                 EmoteZoomModifier;                                		// 0x04C4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     m_MenuContentDataClassName;                       		// 0x04C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_MenuContentDataClassName10c;                    		// 0x04D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTgMenuContentData*                          m_MenuContentData;                                		// 0x04E0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                c_GameLobbyState;                                 		// 0x04E4 (0x0004) [0x0000000000000000]              
	int                                                c_PlayerLobbyState;                               		// 0x04E8 (0x0004) [0x0000000000000000]              
	int                                                c_PlayerQueueState;                               		// 0x04EC (0x0004) [0x0000000000000000]              
	unsigned long                                      c_EOML_to_MatchLobby : 1;                         		// 0x04F0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      c_UseEOMMusic : 1;                                		// 0x04F0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bEOMLWasInTraining : 1;                         		// 0x04F0 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bTestRenderMode : 1;                            		// 0x04F0 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bTestRenderLoadMovie : 1;                       		// 0x04F0 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      m_bHasLoadedTeamNames : 1;                        		// 0x04F0 (0x0004) [0x0000000000000000] [0x00000020] 
	class ATgPawn*                                     m_CharacterBuild;                                 		// 0x04F4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3349 );

		return pClassPointer;
	};

	void eventDestroyed ( );
	void eventPostRender ( );
	void eventCommitPedestalSelectionChange ( );
	void BeginPedestalSelectionChange ( int nPedestalSkinId );
	void eventCommitClassSelectionChange ( );
	void BeginClassSelectionChange ( int nClassId, int nSkinId );
	void eventSetInitialState ( );
	void eventNotifyLoggedIn ( );
	void eventPostBeginPlay ( );
	void TriggerLazyPrecache ( );
	void eventPreBeginPlay ( );
	unsigned char GetLoginDataType ( );
	void DisableEmoteZoom ( unsigned long bImmediate );
	void EnableEmoteZoom ( );
	void PlayEmote ( int nVgsId );
	void UpdateCardDraws ( class UCanvas* CanvasIn );
	void UpdateDebugDraws ( );
	void NotifyLobbyStateChange ( );
	void UpdateGammaControls ( );
	void TestTrayPopup ( unsigned char popupType );
	void TestEOMLobby ( unsigned long bVictory, struct FString ClassName, struct FString skinName );
	void TestTransition ( unsigned long bShow );
	class ATgLobbyCamera* SwitchToCamera ( struct FName CamTag, unsigned char camDirection );
	void ChangePedestalEnemyModel ( int nIndex, int nPedestalSkinId, unsigned char pose, unsigned long bAsync );
	void ChangeClassEnemyModel ( int nIndex, int nClassId, int nSkinId, unsigned char pose, unsigned long bAsync );
	void ChangePedestalFriendlyModel ( int nIndex, int nPedestalSkinId, unsigned char pose, unsigned long bAsync );
	void ChangeClassFriendlyModel ( int nIndex, int nClassId, int nSkinId, unsigned char pose, unsigned long bAsync );
	bool IsCurrentCameraMatchLobby ( );
	struct FName GetMatchLobbyCameraName ( );
	void OnPedestalSelected ( int nPedestalSkinId, unsigned long bChangedPedestal );
	void OnClassSelected ( int nClassId, int nSkinId, unsigned long bChangedClass, unsigned long bChangedSkin );
	void RotateModel ( float fValue );
	void ChangeClassModel ( int nClassId, int nSkinId, int nPedestalSkinId, unsigned char pose, struct FName CameraTag, unsigned char camDirection, unsigned long bAsync, unsigned long bShowFlag );
	void ChangeMenuModel ( unsigned char Type, unsigned char camDirection );
	void AsynchNotifies ( );
	void OnMarshalEvent ( struct FPointer pMarEvent );
	void SetUpEOMLobby ( );
	bool HaveEOMLobbyData ( );
	void RegisterEngineCallbacks ( );
	bool IsEulaSigned ( );
	void InitializeDisconnectedState ( );
};

UClass* ATgLobbyHUD::pClassPointer = NULL;

// Class TgClient.TgClanDC_ClanList
// 0x0000 (0x00BC - 0x00BC)
class UTgClanDC_ClanList : public UTgDataChunk
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3350 );

		return pClassPointer;
	};

};

UClass* UTgClanDC_ClanList::pClassPointer = NULL;

// Class TgClient.TgClanDC_ClanStats
// 0x003C (0x00F8 - 0x00BC)
class UTgClanDC_ClanStats : public UTgDataChunk
{
public:
	struct FScriptDelegate                             __usc_UpdateMessage_Delegate__Delegate;           		// 0x00BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __usc_UpdateRecruiting_Delegate__Delegate;        		// 0x00C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __usc_ApplicationAction_Delegate__Delegate;       		// 0x00D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __usc_UpdateTag_Delegate__Delegate;               		// 0x00E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __usc_UpdateClanNameFormat_Delegate__Delegate;    		// 0x00EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3351 );

		return pClassPointer;
	};

	void usc_UpdateClanNameFormat ( int nIndex );
	void usc_UpdateTag ( struct FString sMessage );
	void usc_ApplicationAction ( int nAction, float nPlayerId );
	void usc_UpdateRecruiting ( struct FString sMessage, unsigned long bIsRecruiting );
	void usc_UpdateMessage ( struct FString sMessage, unsigned long bIsDaily );
	void usc_UpdateClanNameFormat_Delegate ( );
	void usc_UpdateTag_Delegate ( );
	void usc_ApplicationAction_Delegate ( );
	void usc_UpdateRecruiting_Delegate ( );
	void usc_UpdateMessage_Delegate ( );
	void UpdateRecruiting ( struct FString sDesc, unsigned long bIsRecruiting );
	void UpdateClanMOTD ( struct FString sMessage );
	void UpdateClanDesc ( struct FString sMessage );
	void UpdateClanName ( struct FString sName );
	void UpdateClanData ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgClanDC_ClanStats::pClassPointer = NULL;

// Class TgClient.TgClanDC_Player
// 0x0008 (0x00C4 - 0x00BC)
class UTgClanDC_Player : public UTgDataChunk
{
public:
	int                                                m_nPlayerId;                                      		// 0x00BC (0x0004) [0x0000000000000000]              
	int                                                m_nClanPermissions;                               		// 0x00C0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3352 );

		return pClassPointer;
	};

	void NotifyMapChange ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgClanDC_Player::pClassPointer = NULL;

// Class TgClient.TgClanDC_Roster
// 0x0FBC (0x1078 - 0x00BC)
class UTgClanDC_Roster : public UTgDataChunk
{
public:
	int                                                m_nPlayerId;                                      		// 0x00BC (0x0004) [0x0000000000000000]              
	class UTgClanDC_Player*                            m_MemberArray[ 0x3E8 ];                           		// 0x00C0 (0x0FA0) [0x0000000000000000]              
	struct FScriptDelegate                             __usc_ClanAction_Delegate__Delegate;              		// 0x1060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __usc_UpdateComment_Delegate__Delegate;           		// 0x106C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3353 );

		return pClassPointer;
	};

	void usc_UpdateComment ( float nPlayerId, struct FString sComment, unsigned long isOfficerNote );
	void usc_ClanAction ( int nAction, float nPlayerId );
	void usc_UpdateComment_Delegate ( );
	void usc_ClanAction_Delegate ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgClanDC_Roster::pClassPointer = NULL;

// Class TgClient.TgClanDC_Settings
// 0x001C (0x00D8 - 0x00BC)
class UTgClanDC_Settings : public UTgDataChunk
{
public:
	class UGFxObject*                                  m_RankArray;                                      		// 0x00BC (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __usc_UpdateRank_Delegate__Delegate;              		// 0x00C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __usc_UpdateLeader_Delegate__Delegate;            		// 0x00CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3354 );

		return pClassPointer;
	};

	void usc_UpdateLeader ( struct FString sName );
	void usc_UpdateRank ( float RankId, struct FString sName, float rankPermission );
	void usc_UpdateLeader_Delegate ( );
	void usc_UpdateRank_Delegate ( );
	void UpdateRankArray ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgClanDC_Settings::pClassPointer = NULL;

// Class TgClient.TgDataGroup_Clan
// 0x000C (0x00C8 - 0x00BC)
class UTgDataGroup_Clan : public UTgDataChunk
{
public:
	class UTgClanDC_ClanStats*                         m_ClanStats;                                      		// 0x00BC (0x0004) [0x0000000000000000]              
	class UTgClanDC_Settings*                          m_ClanSettings;                                   		// 0x00C0 (0x0004) [0x0000000000000000]              
	class UTgClanDC_Roster*                            m_ClanRoster;                                     		// 0x00C4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3355 );

		return pClassPointer;
	};

	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgDataGroup_Clan::pClassPointer = NULL;

// Class TgClient.TgDataGroup_EOMLobby
// 0x0008 (0x00C4 - 0x00BC)
class UTgDataGroup_EOMLobby : public UTgDataChunk
{
public:
	class UTgEOMLobbyDC_Lobby*                         m_LobbyData;                                      		// 0x00BC (0x0004) [0x0000000000000000]              
	class UTgEOMLobbyDC_ChatLobby*                     m_ChatLobbyData;                                  		// 0x00C0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3356 );

		return pClassPointer;
	};

	void NotifyMapChange ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgDataGroup_EOMLobby::pClassPointer = NULL;

// Class TgClient.TgDataGroup_Lobby
// 0x0010 (0x00CC - 0x00BC)
class UTgDataGroup_Lobby : public UTgDataChunk
{
public:
	class UTgLobbyDC_Login*                            m_LoginData;                                      		// 0x00BC (0x0004) [0x0000000000000000]              
	class UTgLobbyDC_Match*                            m_MatchData;                                      		// 0x00C0 (0x0004) [0x0000000000000000]              
	class UTgLobbyDC_Lobby*                            m_LobbyData;                                      		// 0x00C4 (0x0004) [0x0000000000000000]              
	class UTgGameDC_Player*                            m_CharacterBuilderData;                           		// 0x00C8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3357 );

		return pClassPointer;
	};

	void NotifyMapChange ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgDataGroup_Lobby::pClassPointer = NULL;

// Class TgClient.TgEOMLobbyDC_ChatLobby
// 0x000C (0x00C8 - 0x00BC)
class UTgEOMLobbyDC_ChatLobby : public UTgDataChunk
{
public:
	TArray< class UTgEOMLobbyDC_ChatPlayer* >          m_Players;                                        		// 0x00BC (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3358 );

		return pClassPointer;
	};

	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgEOMLobbyDC_ChatLobby::pClassPointer = NULL;

// Class TgClient.TgEOMLobbyDC_ChatPlayer
// 0x0004 (0x00C0 - 0x00BC)
class UTgEOMLobbyDC_ChatPlayer : public UTgDataChunk
{
public:
	int                                                m_nPlayerId;                                      		// 0x00BC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3359 );

		return pClassPointer;
	};

	void NotifyMapChange ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgEOMLobbyDC_ChatPlayer::pClassPointer = NULL;

// Class TgClient.TgEOMLobbyDC_Lobby
// 0x000C (0x00C8 - 0x00BC)
class UTgEOMLobbyDC_Lobby : public UTgDataChunk
{
public:
	class UTgEOMLobbyDC_Team*                          m_FriendTeamData;                                 		// 0x00BC (0x0004) [0x0000000000000000]              
	class UTgEOMLobbyDC_Team*                          m_EnemyTeamData;                                  		// 0x00C0 (0x0004) [0x0000000000000000]              
	float                                              m_SecInMatch;                                     		// 0x00C4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3360 );

		return pClassPointer;
	};

	void NotifyMapChange ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgEOMLobbyDC_Lobby::pClassPointer = NULL;

// Class TgClient.TgEOMLobbyDC_Player
// 0x0000 (0x00BC - 0x00BC)
class UTgEOMLobbyDC_Player : public UTgDataChunk
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3361 );

		return pClassPointer;
	};

	void NotifyMapChange ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgEOMLobbyDC_Player::pClassPointer = NULL;

// Class TgClient.TgEOMLobbyDC_Team
// 0x000C (0x00C8 - 0x00BC)
class UTgEOMLobbyDC_Team : public UTgDataChunk
{
public:
	TArray< class UTgEOMLobbyDC_Player* >              m_Players;                                        		// 0x00BC (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3362 );

		return pClassPointer;
	};

	void NotifyMapChange ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgEOMLobbyDC_Team::pClassPointer = NULL;

// Class TgClient.TgLobbyDC_Class
// 0x0020 (0x00DC - 0x00BC)
class UTgLobbyDC_Class : public UTgDataChunk
{
public:
	int                                                m_nClassId;                                       		// 0x00BC (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bAvailable : 1;                                 		// 0x00C0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bVisible : 1;                                   		// 0x00C0 (0x0004) [0x0000000000000000] [0x00000002] 
	TArray< class UTgLobbyDC_Skin* >                   m_Skins;                                          		// 0x00C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_RestrictedSkinIds;                              		// 0x00D0 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3363 );

		return pClassPointer;
	};

	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgLobbyDC_Class::pClassPointer = NULL;

// Class TgClient.TgLobbyDC_Lobby
// 0x0080 (0x013C - 0x00BC)
class UTgLobbyDC_Lobby : public UTgDataChunk
{
public:
	int                                                m_nNbrInQueue;                                    		// 0x00BC (0x0004) [0x0000000000000000]              
	int                                                m_nNbrInMatch;                                    		// 0x00C0 (0x0004) [0x0000000000000000]              
	int                                                m_nNbrInParty;                                    		// 0x00C4 (0x0004) [0x0000000000000000]              
	float                                              m_fInviteStartTime;                               		// 0x00C8 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bIsPartyLeader : 1;                             		// 0x00CC (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     m_lsLabelName;                                    		// 0x00D0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLabelLevel;                                   		// 0x00DC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLabelGold;                                    		// 0x00E8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLabelFavor;                                   		// 0x00F4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLabelBoost;                                   		// 0x0100 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLabelParty;                                   		// 0x010C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLabelStatus;                                  		// 0x0118 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLabelGoodwill;                                		// 0x0124 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLabelPlayerAccount;                           		// 0x0130 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3364 );

		return pClassPointer;
	};

	void Update ( float DeltaTime, unsigned long bSkipCallback );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgLobbyDC_Lobby::pClassPointer = NULL;

// Class TgClient.TgLobbyDC_Login
// 0x0000 (0x00BC - 0x00BC)
class UTgLobbyDC_Login : public UTgDataChunk
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3365 );

		return pClassPointer;
	};

	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgLobbyDC_Login::pClassPointer = NULL;

// Class TgClient.TgLobbyDC_Match
// 0x0340 (0x03FC - 0x00BC)
class UTgLobbyDC_Match : public UTgDataChunk
{
public:
	class UTgSynchronizedTimer*                        m_MatchTimer;                                     		// 0x00BC (0x0004) [0x0000000000000000]              
	class UTgLobbyDC_Class*                            m_Classes[ 0x64 ];                                		// 0x00C0 (0x0190) [0x0000000000000000]              
	class UTgLobbyDC_Class*                            m_BanClasses[ 0x64 ];                             		// 0x0250 (0x0190) [0x0000000000000000]              
	class UTgLobbyDC_PlayerTrade*                      m_TradeData[ 0x5 ];                               		// 0x03E0 (0x0014) [0x0000000000000000]              
	class UTgLobbyDC_Team*                             m_FriendTeamData;                                 		// 0x03F4 (0x0004) [0x0000000000000000]              
	class UTgLobbyDC_Team*                             m_EnemyTeamData;                                  		// 0x03F8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3366 );

		return pClassPointer;
	};

	void NotifyMapChange ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgLobbyDC_Match::pClassPointer = NULL;

// Class TgClient.TgLobbyDC_Player
// 0x0008 (0x00C4 - 0x00BC)
class UTgLobbyDC_Player : public UTgDataChunk
{
public:
	int                                                m_nPlayerId;                                      		// 0x00BC (0x0004) [0x0000000000000000]              
	int                                                m_nClassId;                                       		// 0x00C0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3367 );

		return pClassPointer;
	};

	void NotifyMapChange ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgLobbyDC_Player::pClassPointer = NULL;

// Class TgClient.TgLobbyDC_PlayerTrade
// 0x0000 (0x00BC - 0x00BC)
class UTgLobbyDC_PlayerTrade : public UTgDataChunk
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3368 );

		return pClassPointer;
	};

	void NotifyMapChange ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgLobbyDC_PlayerTrade::pClassPointer = NULL;

// Class TgClient.TgLobbyDC_Skin
// 0x0008 (0x00C4 - 0x00BC)
class UTgLobbyDC_Skin : public UTgDataChunk
{
public:
	int                                                m_nSkinId;                                        		// 0x00BC (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bAvailable : 1;                                 		// 0x00C0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bVisible : 1;                                   		// 0x00C0 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3369 );

		return pClassPointer;
	};

	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgLobbyDC_Skin::pClassPointer = NULL;

// Class TgClient.TgLobbyDC_Team
// 0x0024 (0x00E0 - 0x00BC)
class UTgLobbyDC_Team : public UTgDataChunk
{
public:
	class UTgLobbyDC_Player*                           m_Members[ 0x5 ];                                 		// 0x00BC (0x0014) [0x0000000000000000]              
	class UTgLobbyDC_Class*                            m_Bans[ 0x4 ];                                    		// 0x00D0 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3370 );

		return pClassPointer;
	};

	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgLobbyDC_Team::pClassPointer = NULL;

// Class TgClient.TgConfigDC_Cached
// 0x000C (0x00C8 - 0x00BC)
class UTgConfigDC_Cached : public UTgDataChunk
{
public:
	struct FScriptDelegate                             __usc_load_data_Delegate__Delegate;               		// 0x00BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3371 );

		return pClassPointer;
	};

	void PrecacheData ( );
	class UGFxObject* CreateDataObject ( int nId );
	bool usc_load_data ( int nId );
	bool usc_load_data_Delegate ( int nClassId );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgConfigDC_Cached::pClassPointer = NULL;

// Class TgClient.TgConfigDC_Classes
// 0x0000 (0x00C8 - 0x00C8)
class UTgConfigDC_Classes : public UTgConfigDC_Cached
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3372 );

		return pClassPointer;
	};

	class UGFxObject* CreateDataObject ( int nId );
};

UClass* UTgConfigDC_Classes::pClassPointer = NULL;

// Class TgClient.TgConfigDC_GameTip
// 0x0000 (0x00C8 - 0x00C8)
class UTgConfigDC_GameTip : public UTgConfigDC_Cached
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3373 );

		return pClassPointer;
	};

	class UGFxObject* CreateDataObject ( int nId );
};

UClass* UTgConfigDC_GameTip::pClassPointer = NULL;

// Class TgClient.TgConfigDC_Items
// 0x0000 (0x00C8 - 0x00C8)
class UTgConfigDC_Items : public UTgConfigDC_Cached
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3374 );

		return pClassPointer;
	};

	class UGFxObject* CreateDataObject ( int nId );
};

UClass* UTgConfigDC_Items::pClassPointer = NULL;

// Class TgClient.TgConfigDC_LangMessages
// 0x0000 (0x00C8 - 0x00C8)
class UTgConfigDC_LangMessages : public UTgConfigDC_Cached
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3375 );

		return pClassPointer;
	};

	bool usc_load_data ( int nId );
};

UClass* UTgConfigDC_LangMessages::pClassPointer = NULL;

// Class TgClient.TgDataGroup_Config
// 0x0010 (0x00CC - 0x00BC)
class UTgDataGroup_Config : public UTgDataChunk
{
public:
	class UTgConfigDC_LangMessages*                    m_MessageData;                                    		// 0x00BC (0x0004) [0x0000000000000000]              
	class UTgConfigDC_Classes*                         m_ClassData;                                      		// 0x00C0 (0x0004) [0x0000000000000000]              
	class UTgConfigDC_Items*                           m_ItemData;                                       		// 0x00C4 (0x0004) [0x0000000000000000]              
	class UTgConfigDC_GameTip*                         m_GameTipData;                                    		// 0x00C8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3376 );

		return pClassPointer;
	};

	void NotifyMapChange ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgDataGroup_Config::pClassPointer = NULL;

// Class TgClient.TgDataGroup_Settings
// 0x0014 (0x00D0 - 0x00BC)
class UTgDataGroup_Settings : public UTgDataChunk
{
public:
	class UTgSettingsDC_Video*                         m_VideoSettings;                                  		// 0x00BC (0x0004) [0x0000000000000000]              
	class UTgSettingsDC_Audio*                         m_AudioSettings;                                  		// 0x00C0 (0x0004) [0x0000000000000000]              
	class UTgSettingsDC_UI*                            m_UISettings;                                     		// 0x00C4 (0x0004) [0x0000000000000000]              
	class UTgSettingsDC_KeyBinding*                    m_KeyBindings;                                    		// 0x00C8 (0x0004) [0x0000000000000000]              
	class UTgSettingsDC_Spectator*                     m_Spectator;                                      		// 0x00CC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3377 );

		return pClassPointer;
	};

	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgDataGroup_Settings::pClassPointer = NULL;

// Class TgClient.TgSettingsDC_Audio
// 0x0018 (0x00D4 - 0x00BC)
class UTgSettingsDC_Audio : public UTgDataChunk
{
public:
	struct FScriptDelegate                             __usc_SetAudioSettings_Delegate__Delegate;        		// 0x00BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __usc_requestDeviceList_Delegate__Delegate;       		// 0x00C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3378 );

		return pClassPointer;
	};

	void usc_requestDeviceList ( );
	void usc_SetAudioSettings ( float Master, float sfx, float music, float voice, float matchNotifier, unsigned long MasterMute, unsigned long SFXMute, unsigned long MusicMute, unsigned long VoiceMute, unsigned long MatchNotifierMute, unsigned long ChatNotifierMute, struct FString DefaultAudioDevice );
	void usc_requestDeviceList_Delegate ( );
	void usc_SetAudioSettings_Delegate ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgSettingsDC_Audio::pClassPointer = NULL;

// Class TgClient.TgSettingsDC_KeyBinding
// 0x001C (0x00D8 - 0x00BC)
class UTgSettingsDC_KeyBinding : public UTgDataChunk
{
public:
	class UGFxObject*                                  m_KeyBindings;                                    		// 0x00BC (0x0004) [0x0000000000000000]              
	TArray< class UGFxObject* >                        m_KeybindObjects;                                 		// 0x00C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTgKeyBind >                        m_BindableCommands;                               		// 0x00CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3379 );

		return pClassPointer;
	};

	void PopulateKeybinding ( );
	void InitializeBindingData ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgSettingsDC_KeyBinding::pClassPointer = NULL;

// Class TgClient.TgSettingsDC_Spectator
// 0x001C (0x00D8 - 0x00BC)
class UTgSettingsDC_Spectator : public UTgDataChunk
{
public:
	class UGFxObject*                                  m_KeyBindings;                                    		// 0x00BC (0x0004) [0x0000000000000000]              
	TArray< class UGFxObject* >                        m_KeybindObjects;                                 		// 0x00C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTgKeyBind >                        m_BindableCommands;                               		// 0x00CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3380 );

		return pClassPointer;
	};

	void PopulateKeybinding ( );
	void InitializeBindingData ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgSettingsDC_Spectator::pClassPointer = NULL;

// Class TgClient.TgSettingsDC_UI
// 0x0018 (0x00D4 - 0x00BC)
class UTgSettingsDC_UI : public UTgDataChunk
{
public:
	TArray< int >                                      m_LoadingPlateIDs;                                		// 0x00BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __usc_SetUISettings_Delegate__Delegate;           		// 0x00C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3381 );

		return pClassPointer;
	};

	void usc_SetUISettings ( struct FString SettingName, struct FString settingValue );
	void usc_SetUISettings_Delegate ( );
	void UpdateUISettings ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgSettingsDC_UI::pClassPointer = NULL;

// Class TgClient.TgSettingsDC_Video
// 0x0024 (0x00E0 - 0x00BC)
class UTgSettingsDC_Video : public UTgDataChunk
{
public:
	struct FScriptDelegate                             __usc_SetVideoSettings_Delegate__Delegate;        		// 0x00BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __usc_SetGammaValue_Delegate__Delegate;           		// 0x00C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __usc_AutoConfig_Delegate__Delegate;              		// 0x00D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 3382 );

		return pClassPointer;
	};

	void usc_AutoConfig ( );
	void usc_SetGammaValue ( float nGamma );
	void usc_SetVideoSettings ( float nWorldDetail, float nTextureDetail, float nShadowDetail, float nParticleDetail, unsigned long bUseVSync, unsigned long bUseSpecialMatEffects, unsigned long bUseRagdollPhysics, unsigned long bFullScreen, unsigned long bBorderless, float nResX, float nResY, int nMultiSampleCount, unsigned long bD3D11Enabled, int nFXAAQuality, int nShaderQuality );
	void usc_AutoConfig_Delegate ( );
	void usc_SetGammaValue_Delegate ( );
	void usc_SetVideoSettings_Delegate ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgSettingsDC_Video::pClassPointer = NULL;

// Class TgClient.TgTestMoviePlayer
// 0x0000 (0x01B4 - 0x01B4)
class UTgTestMoviePlayer : public UTgMoviePlayer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 128353 );

		return pClassPointer;
	};

};

UClass* UTgTestMoviePlayer::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif