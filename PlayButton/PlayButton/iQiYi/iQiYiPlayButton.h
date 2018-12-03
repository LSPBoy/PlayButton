//
//  iQiYiPlayButton.h
//  PlayButton
//
//  Created by Object on 2018/12/3.
//  Copyright © 2018年 lsp. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef NS_ENUM(NSInteger,iQiYiPlayButtonState) {
    iQiYiPlayButtonStatePause = 0,
    iQiYiPlayButtonStatePlay
};
@interface iQiYiPlayButton : UIButton

/**
 通过setter方式控制按钮动画
 设置iQiYiPlayButtonStatePlay显示播放按钮
 设置iQiYiPlayButtonStatePause显示暂停按钮
 */
@property (nonatomic, assign) iQiYiPlayButtonState buttonState;

/**
 创建方法
 */
- (instancetype)initWithFrame:(CGRect)frame state:(iQiYiPlayButtonState)state;

@end

NS_ASSUME_NONNULL_END
