// -------------------------------------------------------
// MessageCell.m
//
// Copyright (c) 2009 Jakub Suder <jakub.suder@gmail.com>
// Licensed under MIT license
// -------------------------------------------------------

#import "MessageCell.h"
#import "OBMessage.h"
#import "OBUtils.h"

@implementation MessageCell

SynthesizeAndReleaseLater(contentLabel, usernameLabel);

- (void) displayMessage: (OBMessage *) message {
  contentLabel.text = message.content;
  usernameLabel.text = [message.username stringByAppendingString: @":"];
}

- (void) setSelected: (BOOL) selected animated: (BOOL) animated {
  [super setSelected: selected animated: animated];
  // Configure the view for the selected state
}

@end
