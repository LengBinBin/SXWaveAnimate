//
//  SXWaveCell.h
//  SXWaveAnimate
//
//  Created by dongshangxian on 15/6/2.
//  Copyright (c) 2015年 Sankuai. All rights reserved.
//

#import <UIKit/UIKit.h>
/**
 *  在需要的地方加入动画Cell需要如下几行代码。
 *   SXWaveCell *cell = [SXWaveCell cell];
 *   self.waveCell = cell;
 *   [cell setPrecent:self.precent textColor:[UIColor orangeColor] type:0 alpha:1];
 *   return cell;
 */
@interface SXWaveCell : UITableViewCell

@property(nonatomic,assign)int precent;

+ (instancetype)cell;

@property (weak, nonatomic) IBOutlet UIView *leftView;
@property (weak, nonatomic) IBOutlet UIImageView *rotateImg;
@property (weak, nonatomic) IBOutlet UILabel *avgScoreLbl;
@property (weak, nonatomic) IBOutlet UILabel *discriptionLbl;

@property(nonatomic,strong)UIImageView *bigImg;

@property(nonatomic,assign)CGFloat alpha;

@property(nonatomic,strong)UIColor *textColor;

@property(nonatomic,assign)int type;

- (instancetype)initWithPrecent:(int)precent;
- (void)addAnimateWithType:(int)type;
- (void)setPrecent:(int)precent textColor:(UIColor *)tcolor type:(int)type alpha:(CGFloat)alpha;

@end

