//
//  HUUsersInGroupViewController.h
//  Spika
//
//  Created by Dao Xuan Cuong on 3/19/14.
//
//

#import "HUBaseViewController.h"
#import "ModelGroup.h"

@interface HUUsersInGroupViewController : HUBaseViewController
@property (strong, nonatomic) IBOutlet UITableView *tableViewUsers;
@property (nonatomic, strong) NSMutableArray *usersArray;
@property (assign, nonatomic) NSInteger totalUsers;
@property (nonatomic, strong) ModelGroup *group;
@end