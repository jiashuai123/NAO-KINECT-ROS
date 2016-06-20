(cl:defpackage naoqi_bridge_msgs-msg
  (:use )
  (:export
   "<MEMORYPAIRINT>"
   "MEMORYPAIRINT"
   "<STRINGARRAYSTAMPED>"
   "STRINGARRAYSTAMPED"
   "<EVENTSTAMPED>"
   "EVENTSTAMPED"
   "<STATUSCHANGESTAMPED>"
   "STATUSCHANGESTAMPED"
   "<TACTILETOUCH>"
   "TACTILETOUCH"
   "<FLOATSTAMPED>"
   "FLOATSTAMPED"
   "<BOOLSTAMPED>"
   "BOOLSTAMPED"
   "<MEMORYPAIRSTRING>"
   "MEMORYPAIRSTRING"
   "<POSEWITHCONFIDENCESTAMPED>"
   "POSEWITHCONFIDENCESTAMPED"
   "<HANDTOUCH>"
   "HANDTOUCH"
   "<JOINTANGLESWITHSPEED>"
   "JOINTANGLESWITHSPEED"
   "<FADERGB>"
   "FADERGB"
   "<FLOATARRAYSTAMPED>"
   "FLOATARRAYSTAMPED"
   "<MEMORYPAIRFLOAT>"
   "MEMORYPAIRFLOAT"
   "<MEMORYLIST>"
   "MEMORYLIST"
   "<INTSTAMPED>"
   "INTSTAMPED"
   "<FACEROI>"
   "FACEROI"
   "<WORDRECOGNIZED>"
   "WORDRECOGNIZED"
   "<BODYROI>"
   "BODYROI"
   "<INTARRAYSTAMPED>"
   "INTARRAYSTAMPED"
   "<STRINGSTAMPED>"
   "STRINGSTAMPED"
   "<JOINTANGLETRAJECTORY>"
   "JOINTANGLETRAJECTORY"
   "<AUDIOBUFFER>"
   "AUDIOBUFFER"
   "<ROBOTINFO>"
   "ROBOTINFO"
   "<BUMPER>"
   "BUMPER"
   "<RUNBEHAVIORFEEDBACK>"
   "RUNBEHAVIORFEEDBACK"
   "<JOINTANGLESWITHSPEEDACTIONRESULT>"
   "JOINTANGLESWITHSPEEDACTIONRESULT"
   "<BODYPOSEFEEDBACK>"
   "BODYPOSEFEEDBACK"
   "<SETSPEECHVOCABULARYGOAL>"
   "SETSPEECHVOCABULARYGOAL"
   "<RUNBEHAVIORACTIONFEEDBACK>"
   "RUNBEHAVIORACTIONFEEDBACK"
   "<JOINTANGLESWITHSPEEDGOAL>"
   "JOINTANGLESWITHSPEEDGOAL"
   "<JOINTTRAJECTORYACTIONRESULT>"
   "JOINTTRAJECTORYACTIONRESULT"
   "<FOLLOWPATHACTIONRESULT>"
   "FOLLOWPATHACTIONRESULT"
   "<FOLLOWPATHACTIONFEEDBACK>"
   "FOLLOWPATHACTIONFEEDBACK"
   "<JOINTTRAJECTORYACTIONGOAL>"
   "JOINTTRAJECTORYACTIONGOAL"
   "<FOLLOWPATHRESULT>"
   "FOLLOWPATHRESULT"
   "<SPEECHWITHFEEDBACKACTION>"
   "SPEECHWITHFEEDBACKACTION"
   "<BODYPOSEWITHSPEEDRESULT>"
   "BODYPOSEWITHSPEEDRESULT"
   "<SETSPEECHVOCABULARYACTIONGOAL>"
   "SETSPEECHVOCABULARYACTIONGOAL"
   "<JOINTTRAJECTORYGOAL>"
   "JOINTTRAJECTORYGOAL"
   "<JOINTANGLESWITHSPEEDRESULT>"
   "JOINTANGLESWITHSPEEDRESULT"
   "<SETSPEECHVOCABULARYACTIONFEEDBACK>"
   "SETSPEECHVOCABULARYACTIONFEEDBACK"
   "<RUNBEHAVIORACTIONRESULT>"
   "RUNBEHAVIORACTIONRESULT"
   "<SETSPEECHVOCABULARYACTION>"
   "SETSPEECHVOCABULARYACTION"
   "<BLINKACTIONGOAL>"
   "BLINKACTIONGOAL"
   "<JOINTANGLESWITHSPEEDACTIONFEEDBACK>"
   "JOINTANGLESWITHSPEEDACTIONFEEDBACK"
   "<RUNBEHAVIORACTIONGOAL>"
   "RUNBEHAVIORACTIONGOAL"
   "<BODYPOSEWITHSPEEDFEEDBACK>"
   "BODYPOSEWITHSPEEDFEEDBACK"
   "<SETSPEECHVOCABULARYRESULT>"
   "SETSPEECHVOCABULARYRESULT"
   "<BLINKFEEDBACK>"
   "BLINKFEEDBACK"
   "<FOLLOWPATHFEEDBACK>"
   "FOLLOWPATHFEEDBACK"
   "<BODYPOSEACTION>"
   "BODYPOSEACTION"
   "<SPEECHWITHFEEDBACKACTIONFEEDBACK>"
   "SPEECHWITHFEEDBACKACTIONFEEDBACK"
   "<BODYPOSEWITHSPEEDACTIONFEEDBACK>"
   "BODYPOSEWITHSPEEDACTIONFEEDBACK"
   "<BODYPOSEGOAL>"
   "BODYPOSEGOAL"
   "<BODYPOSEWITHSPEEDGOAL>"
   "BODYPOSEWITHSPEEDGOAL"
   "<JOINTANGLESWITHSPEEDACTION>"
   "JOINTANGLESWITHSPEEDACTION"
   "<BODYPOSEWITHSPEEDACTION>"
   "BODYPOSEWITHSPEEDACTION"
   "<BLINKRESULT>"
   "BLINKRESULT"
   "<BODYPOSEWITHSPEEDACTIONRESULT>"
   "BODYPOSEWITHSPEEDACTIONRESULT"
   "<BLINKACTIONRESULT>"
   "BLINKACTIONRESULT"
   "<SPEECHWITHFEEDBACKACTIONRESULT>"
   "SPEECHWITHFEEDBACKACTIONRESULT"
   "<BLINKACTIONFEEDBACK>"
   "BLINKACTIONFEEDBACK"
   "<RUNBEHAVIORACTION>"
   "RUNBEHAVIORACTION"
   "<SPEECHWITHFEEDBACKACTIONGOAL>"
   "SPEECHWITHFEEDBACKACTIONGOAL"
   "<JOINTANGLESWITHSPEEDACTIONGOAL>"
   "JOINTANGLESWITHSPEEDACTIONGOAL"
   "<JOINTANGLESWITHSPEEDFEEDBACK>"
   "JOINTANGLESWITHSPEEDFEEDBACK"
   "<BODYPOSEWITHSPEEDACTIONGOAL>"
   "BODYPOSEWITHSPEEDACTIONGOAL"
   "<JOINTTRAJECTORYACTION>"
   "JOINTTRAJECTORYACTION"
   "<BODYPOSEACTIONFEEDBACK>"
   "BODYPOSEACTIONFEEDBACK"
   "<BODYPOSEACTIONGOAL>"
   "BODYPOSEACTIONGOAL"
   "<SPEECHWITHFEEDBACKGOAL>"
   "SPEECHWITHFEEDBACKGOAL"
   "<JOINTTRAJECTORYRESULT>"
   "JOINTTRAJECTORYRESULT"
   "<FOLLOWPATHACTION>"
   "FOLLOWPATHACTION"
   "<BODYPOSEACTIONRESULT>"
   "BODYPOSEACTIONRESULT"
   "<FOLLOWPATHGOAL>"
   "FOLLOWPATHGOAL"
   "<BLINKACTION>"
   "BLINKACTION"
   "<SPEECHWITHFEEDBACKFEEDBACK>"
   "SPEECHWITHFEEDBACKFEEDBACK"
   "<RUNBEHAVIORGOAL>"
   "RUNBEHAVIORGOAL"
   "<SETSPEECHVOCABULARYFEEDBACK>"
   "SETSPEECHVOCABULARYFEEDBACK"
   "<BLINKGOAL>"
   "BLINKGOAL"
   "<JOINTTRAJECTORYACTIONFEEDBACK>"
   "JOINTTRAJECTORYACTIONFEEDBACK"
   "<BODYPOSERESULT>"
   "BODYPOSERESULT"
   "<FOLLOWPATHACTIONGOAL>"
   "FOLLOWPATHACTIONGOAL"
   "<SETSPEECHVOCABULARYACTIONRESULT>"
   "SETSPEECHVOCABULARYACTIONRESULT"
   "<JOINTTRAJECTORYFEEDBACK>"
   "JOINTTRAJECTORYFEEDBACK"
   "<RUNBEHAVIORRESULT>"
   "RUNBEHAVIORRESULT"
   "<SPEECHWITHFEEDBACKRESULT>"
   "SPEECHWITHFEEDBACKRESULT"
  ))
