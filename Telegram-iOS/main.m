#import <UIKit/UIKit.h>

int main(int argc, char *argv[]) {
    @autoreleasepool {
        @try {
            return UIApplicationMain(argc, argv, @"Application", @"AppDelegate");
        } @catch (NSException *ex) {
            NSLog(@"%@", ex);
        }
    }
}
