//
//  ProfileClases.h
//  Pictolike
//
//  Created by Shikha Kamboj on 8/4/14.
//  Copyright (c) 2014 web. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ProfileClases : UIViewController<UICollectionViewDataSource,UICollectionViewDelegate>
@property (weak, nonatomic) IBOutlet UICollectionView *collectionView;
@property (weak, nonatomic) IBOutlet UILabel *Label;
- (IBAction)RefreshBtnAction:(id)sender;

@end
