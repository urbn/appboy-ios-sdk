#import <UIKit/UIKit.h>

@class ABKNewsFeedTableViewController;

@interface ABKNewsFeedViewController : UINavigationController

/*!
 * This property is the table view controller which displays all the cards. It's also the root view
 * controller.
 */
@property (unsafe_unretained, nonatomic) ABKNewsFeedTableViewController *newsFeed;

@end
