//
//  MoodSongTableViewController.h
//  HelloHarman
//
//  Created by Paul Nuesslein on 4/3/15.
//  Copyright (c) 2015 Paul Nuesslein. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
@interface MoodSongTableViewController : UITableViewController
{
    
    NSArray *songListArray;
    NSArray *fileListArray;
    NSURL *newURL;
    AVAudioPlayer *musicPlayer;
    
}

-(IBAction)playMusic:(id)sender;

@end
