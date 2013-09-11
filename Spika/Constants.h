//
//  Constants.h
//  Bind
//
//  Created by Ken Yasue on 12/25/12.
//
//

#ifndef Bind_Constants_h
#define Bind_Constants_h

#define kIsDebugMode	NO

/*  Fonts */
#pragma mark - Fonts
#define kFontArialMT                @"ArialMT"
#define kFontArialMTBold            @"Arial-BoldMT"
#define kFontMyriadPro              @"MyriadPro-Regular"
#define kFontArialMTOfSize(__SIZE__)                [UIFont fontWithName:kFontMyriadPro size:__SIZE__]
#define kFontArialMTBoldOfSize(__SIZE__)            [UIFont fontWithName:kFontArialMTBold size:__SIZE__]
#define kFontMyriadProOfSize(__SIZE__)              [UIFont fontWithName:kFontMyriadPro size:__SIZE__]
#define kFontSizeExtraBig               50
#define kFontSizeBig                    20
#define kFontSizeMiddium                16
#define kFontSizeSmall                  12

/* Database */
#pragma mark - Database

#define DatabaseURL             @"http://hookupproduction.clover-studio.com/HookUpServer/hookup/"
#define DatabaseName            @"hookup"
#define AuthURL                 @"hookup-auth.php"
#define CheckUniqueURL          @"checkUnique.php"
#define ReminderURL             @"sendpassword.php"
#define DatabaseUserName        @"binduser"
#define DatabasePassword        @"cloverpass013"
#define PagingMessageFetchNum   20

#define SmileyWebURL            @"http://hookupproduction.clover-studio.com/HookUpServer/hookup/emoji.php"
#define HttpRootURL             @"http://hookupproduction.clover-studio.com/HookUpServer/hookup/"
#define FileUplaoder            @"fileuploader.php"
#define FileDownloader          @"filedownloader.php"

#define DefaultContactNum       20
#define DefaultFavoriteNum      10

#define SupportUserId           @"7df093b56d11b8c5f961cf120d01989b"

// UI element constants
#define StdUIElementHeight 35
#define StdUIButtonWidth 100
#define HeaderHeight 44
#define KeyboardHeight 216
#define JapaneseSuggestionAreaHeight 35
#define BarButtonWidth  90
//#define MediaBtnWidth 107
//#define MediaBtnHeight 100

#define MediaBtnWidth 71
#define MediaBtnHeight 69

#define AvatarThumbNailSize 120
#define AvatarSize          640
#define ImageMessageSize    640
#define ImageMessageThumbSize    240

#define AvatarT
// Notifications
#define NotificationLoginFinished                       @"loginFinished"
#define NotificationShowSideMenu                        @"showSideMenu"
#define NotificationHideSideMenu                        @"hideSideMenu"
#define NotificationSideMenuUsersSelected               @"sideMenuUsers"
#define NotificationSideMenuGroupsSelected              @"sideMenuGroups"
#define NotificationShowProfile                         @"showProflie"
#define NotificationShowGroupProfile                    @"showGroupProflie"
#define NotificationShowUserWall                        @"showUserWall"
#define NotificationShowGroupWall                       @"showGroupWall"
#define NotificationNewGroupCancel                      @"newGroupCancel"
#define NotificationNewGroupCreated                     @"newGroupCreated"
#define NotificationSideMenuMyProfileSelected           @"showMyProfile"
#define NotificationSideMenuPersonalWallSelected        @"showPersonalWall"
#define NotificationSideMenuLogoutSelected              @"logout"
#define NotificationOpenEditGroup                       @"openEditGroup"
#define NotificationGroupUpdated						@"groupUpdated"
#define NotificationDeleteGroup                         @"groupDeleted"
#define NotificationShowRecentActivity                  @"showRecentActivity"
#define NotificationShowSettings                        @"showSettings"
#define NotificationShowPassword                        @"showPassword"
#define NotificationShowSubMenu                         @"showSubMenu"
#define NotificationHideSubMenu                         @"hideSubMenu"
#define NotificationShowUsersSearch                     @"showUsersSearch"
#define NotificationShowUsersExplore                    @"showUsersExplore"
#define NotificationShowUsersMyContacts                 @"showMyContacts"
#define NotificationGroupsAddGroup                      @"groupsAddGroup"
#define NotificationGroupsShowMyGroups                  @"groupsShowMyGroups"
#define NotificationGroupsShowSearch                    @"groupsShowSearch"
#define NotificationGroupsShowCategories				@"groupsShowCategories"
#define NotificationCriticalError                       @"criticalError"
#define NotificationTokenExpiredError                   @"tokenExpired"
#define NotificationServiceUnavailable                  @"ServiceUnavailable"
#define NotificationTuggleSideMenu                      @"tuggleSideMenu"
#define NotificationTuggleSubMenu                       @"tuggleSubMenu"
#define NotificationReportViolation                     @"reportViolation"

// UserDefaultKeys
#define UserDefaultLastLoginEmail @"lastLoginEmail"
#define UserDefaultLastLoginPass @"lastLoginPass"
#define UserDefaultPassword		@"localPassword"
#define UserDefaultAPIEndpoint	@"localApiEndpoint"
#define UserPassword            @"userpassword"
#define UserToken               @"usertoken"
#define UserDefaultNotificationUserID		@"notificationUserId"
#define UserDefaultNotificationGroupID		@"notificationGroupId"
#define OpenUserName         @"openusername"
#define OpenGroupName		@"opengroupname"
#define DidAlreadyAutoSignedIn             @"DidAlreadyAutoSignedIn"
#define LastOpenedGroupWall             @"LastOpenedGroupWall"
#define EULAAgreed              @"EULAAgreed"

// Timer
#define AutoReloadInterval 5.0f

// Model
#define MessageTypeImageFileName @"image.jpg"
#define MessageTypeVideoFileName @"video.mov"
#define UserAvatarImageFileName @"avatar.jpg"
#define GroupAvatarImageFileName @"group_image.jpg"
#define MessageTypeVoiceFileName @"voice.wav"
#define MessageTypeVoiceRecievedFileName @"voice_recieved.wav"

// Password
#define HUPasswordLength 4

// Color
#define kHUColorDarkDarkGray        UIColorFromRGB(0x090909)
#define kHUColorDarkGray            UIColorFromRGB(0x1f1f1f)
#define kHUColorGrayMenu            UIColorFromRGB(0x1b1b1b)
#define kHUColorGrayMenuSeparator   UIColorFromRGB(0x242424)

#define kHUColorLightGray           UIColorFromRGB(0x7D7D7D)
#define kHUColorGreen               UIColorFromRGB(0x00CC7B)
#define kHUColorLightRed            UIColorFromRGB(0xE81757) 
#define kHUColorWhite               [UIColor whiteColor]

//in seconds...
#define kVideoMaxLength		30.0f
#define kAudioMaxLength		10.0f

// Messages
#define kOneTimeMsgNoContact @"kOneTimeMsgNoContact"
#define kOneTimeMsgNoFavorite @"kOneTimeMsgNoFavorite"

// thimbnails
#define kListViewSmallWidht 100
#define kListViewBigWidth 200

// date formate
#define kDefaultDateFormat @"YYYY.MM.dd"
#define kDefaultTimeStampFormat @"YYYY.MM.dd HH:mm"

// data sources
#define kGenderDataSource    @[ @"Male", @"Female", @"No declaration" ]
#define kStatusDataSource   @[ @"online", @"away", @"busy", @"offline" ]
#define kStatusImageNames @[ @"user_online_icon", @"user_away_icon", @"user_busy_icon", @"user_offline_icon" ]

#endif

typedef NSString* HUGender;

static const HUGender HUGenderMale = @"male";
static const HUGender HUGenderFemale = @"female";
static const HUGender HUGenderNone = @"";
