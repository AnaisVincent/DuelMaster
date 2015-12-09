#ifndef RECORD__H
#define RECORD__H

/// class Record - 
class Record {
  // Attributes
protected:
  int  idx;
  // Operations
public:
  ~Record ();
  void  clear ();
  void  startRecord ();
  void  recordOne (ActionListe* actions);
  void  stopRecord ();
  void  startReplay ();
  bool  replayOne ();
  void  startRollBack ();
  bool  rollBackOne ();
};

#endif
