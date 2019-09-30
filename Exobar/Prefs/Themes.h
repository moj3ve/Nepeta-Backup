#import <Preferences/PSListController.h>
#import <Preferences/PSSpecifier.h>
#import <CepheiPrefs/HBListController.h>
#import <CepheiPrefs/HBAppearanceSettings.h>
#import <Cephei/HBPreferences.h>
#import <spawn.h>

@interface EXBThemesListController : PSViewController <UITableViewDelegate,UITableViewDataSource> {
    UITableView *_tableView;
    NSMutableArray *_themes;
    NSString *selectedTheme;
}

@property (nonatomic, retain) NSMutableArray *themes;
- (BOOL)usesModernStatusBar;

@end