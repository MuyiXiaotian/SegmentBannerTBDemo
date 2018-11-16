//
//  YTBannerProtocol.h
//  iYuBaHomePageDemo
//
//  Created by boyka on 2018/10/19.
//  Copyright © 2018年 YT. All rights reserved.
//

#ifndef YTBannerProtocol_h
#define YTBannerProtocol_h


@protocol YTBannerLoopViewDelegate <NSObject>

@optional

- (void)YT_bannerLoopViewClicked:(NSUInteger)idx data:(id)data;

@end

#endif /* YTBannerProtocol_h */
