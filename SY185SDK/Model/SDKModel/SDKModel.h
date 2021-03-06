//
//  SDKModel.h
//  SY185SDK
//
//  Created by 燚 on 2018/6/1.
//  Copyright © 2018年 Sans. All rights reserved.
//



#import <Foundation/Foundation.h>


@interface SDKModel : NSObject

@property (nonatomic, assign) BOOL useWindow;

@property (nonatomic, strong) NSString *AppID;
@property (nonatomic, strong) NSString *AppKey;

/** 请求状态 */
@property (nonatomic, strong) NSString *state;


/** 广告图片 */
@property (nonatomic, strong) NSString *ad_pic;
/** 广告地址 */
@property (nonatomic, strong) NSString *ad_url;
/** appid */
@property (nonatomic, strong) NSString *appid;
/** channel  */
@property (nonatomic, strong) NSString *channel;
/** 是否加速 */
@property (nonatomic, strong) NSString *is_accelerate;
/** 是否显示广告 */
@property (nonatomic, strong) NSString *isdisplay_ad;
/** 是否显示悬浮窗 */
@property (nonatomic, strong) NSString *isdisplay_buoy;
/** 客服 QQ */
@property (nonatomic, strong) NSString *qq;
/** 更新地址 */
@property (nonatomic, strong) NSString *udpate_url;
/** 是否更新 */
@property (nonatomic, strong) NSString *update;
/** 自动注册用户名 */
@property (nonatomic, strong) NSString *username;

//new property
/** bind mobile */
@property (nonatomic, strong) NSString *bind_mobile_enabled;
/** name auth */
@property (nonatomic, strong) NSString *name_auth_enabled;
/** platform money enabled */
@property (nonatomic, strong) NSString *platform_money_enabled;


/** 一键注册的用户名 */
@property (nonatomic, strong) NSString *oneUpRegisterAccount;
/** 一键注册密码 */
@property (nonatomic, strong) NSString *oneUpregisterPassword;

/** 1.1.4 new property */
@property (nonatomic, strong) NSString *register_enabled;


/** 1.2.5 */
@property (nonatomic, strong) NSString *discount;


/** 1.16  new property
 * show message
 */
@property (nonatomic, assign) BOOL showMessage;

/** 1.3.1 new property
 * 统计
 */
@property (nonatomic, strong) NSArray *static_type;

+ (SDKModel *)sharedModel;

- (void)initWithApp:(NSString *)appID
             Appkey:(NSString *)appkey
         completion:(void(^)(NSDictionary *content,BOOL success))completion;


+ (void)pushNotificationWith:(NSDictionary *)dict;




@end
