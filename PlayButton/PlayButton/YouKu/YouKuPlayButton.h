//
//  YouKuPlayButton.h
//  PlayButton
//
//  Created by Object on 2018/12/3.
//  Copyright © 2018年 lsp. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef NS_ENUM(NSInteger,YouKuPlayButtonState) {
    YouKuPlayButtonStatePause = 0,
    YouKuPlayButtonStatePlay
};

@interface YouKuPlayButton : UIButton

/**
 通过setter方式控制按钮动画
 设置YouKuPlayButtonStatePlay显示播放按钮
 设置YouKuPlayButtonStatePause显示暂停按钮
 */
@property (nonatomic, assign) YouKuPlayButtonState buttonState;

/**
 创建方法
 */
- (instancetype)initWithFrame:(CGRect)frame state:(YouKuPlayButtonState)state;

@end

NS_ASSUME_NONNULL_END
