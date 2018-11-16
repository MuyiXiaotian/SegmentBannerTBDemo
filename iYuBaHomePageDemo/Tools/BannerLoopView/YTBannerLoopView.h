//
//  YTBannerLoopView.h
//  iYuBaHomePageDemo
//
//  Created by boyka on 2018/10/19.
//  Copyright © 2018年 YT. All rights reserved.

/*
    支持如下几种场景：
    1、仅轮播本地图
    2、仅显示url网络图
    3、显示网络图以及文字标题等（蚊子标题在没内容的时候自动隐藏） 请自觉组装model
*/

/*
    注意！！！
 
    1、在VC上用的时候，若是push到了其他页面，离开的时候调一下stopTimer，回来了再startTimer
    2、三个imageArr作为数据源，至少要传值于其中一个
 */

/*
    1、可以先组装一个本地image数组进行轮播，网络图来了再轮播url
    2、自行设置轮播时间间隔，默认5S
 */



/** 轮播图的pageControl所在轮播图的位置  */
typedef enum : NSUInteger {
    YTBannerPageControlOriginType_top = 1,
    YTBannerPageControlOriginType_bottom,
    YTBannerPageControlOriginType_rightBottom,
} YTBannerPageControlOriginType;


#import <UIKit/UIKit.h>
#import "YTBannerProtocol.h"
#import <JSONModel/JSONModel.h>

@interface YTBannerDataModel : JSONModel

@property (nonatomic, strong) NSString *url;
@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *itemId;
@property (nonatomic, strong) NSString *type;

@end



//@protocol YTBannerLoopViewDelegate <NSObject>
//
//@optional
///** 点击了某张图的时候 */
//- (void)YT_bannerLoopViewClicked_action:(NSUInteger)touchedIdx;
//
//@end



@interface YTBannerLoopView : UIView

@property (nonatomic, weak) id <YTBannerLoopViewDelegate> delegate;

/** 轮播本地图的时候 */
@property (nonatomic, strong) NSArray *localImageArr;
/** 轮播网络图的时候 */
@property (nonatomic, strong) NSArray *urlImageArr;
/** 带有其他参数的时候 */
@property (nonatomic, strong) NSArray <YTBannerDataModel *>*bannerModelList;


////////////////////////////////////
/** 几秒自动滚动一次 默认6S */
@property (nonatomic, assign) float scrollTimerInterval;

////////////////////////////////////
/** 设置轮播图上的pageControl的位置 */
@property (nonatomic, assign) YTBannerPageControlOriginType pageControlOriginType;

////////////////////////////////////
- (void)stopTimer;
- (void)startTimer;

@end
