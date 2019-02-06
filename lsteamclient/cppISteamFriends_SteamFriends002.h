#ifdef __cplusplus
extern "C" {
#endif
extern const char * cppISteamFriends_SteamFriends002_GetPersonaName(void *);
extern void cppISteamFriends_SteamFriends002_SetPersonaName(void *, const char *);
extern EPersonaState cppISteamFriends_SteamFriends002_GetPersonaState(void *);
extern void cppISteamFriends_SteamFriends002_SetPersonaState(void *, EPersonaState);
extern int cppISteamFriends_SteamFriends002_GetFriendCount(void *, int);
extern CSteamID cppISteamFriends_SteamFriends002_GetFriendByIndex(void *, int, int);
extern EFriendRelationship cppISteamFriends_SteamFriends002_GetFriendRelationship(void *, CSteamID);
extern EPersonaState cppISteamFriends_SteamFriends002_GetFriendPersonaState(void *, CSteamID);
extern const char * cppISteamFriends_SteamFriends002_GetFriendPersonaName(void *, CSteamID);
extern void cppISteamFriends_SteamFriends002_SetFriendRegValue(void *, CSteamID, const char *, const char *);
extern const char * cppISteamFriends_SteamFriends002_GetFriendRegValue(void *, CSteamID, const char *);
extern bool cppISteamFriends_SteamFriends002_GetFriendGamePlayed(void *, CSteamID, uint64 *, uint32 *, uint16 *, uint16 *);
extern const char * cppISteamFriends_SteamFriends002_GetFriendPersonaNameHistory(void *, CSteamID, int);
extern bool cppISteamFriends_SteamFriends002_AddFriend(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends002_RemoveFriend(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends002_HasFriend(void *, CSteamID, int);
extern int32 cppISteamFriends_SteamFriends002_AddFriendByName(void *, const char *);
extern bool cppISteamFriends_SteamFriends002_InviteFriendByEmail(void *, const char *);
extern int cppISteamFriends_SteamFriends002_GetChatMessage(void *, CSteamID, int, void *, int, EChatEntryType *);
extern bool cppISteamFriends_SteamFriends002_SendMsgToFriend(void *, CSteamID, EChatEntryType, const void *, int);
extern int cppISteamFriends_SteamFriends002_GetChatIDOfChatHistoryStart(void *, CSteamID);
extern void cppISteamFriends_SteamFriends002_SetChatHistoryStart(void *, CSteamID, int);
extern void cppISteamFriends_SteamFriends002_ClearChatHistory(void *, CSteamID);
extern int cppISteamFriends_SteamFriends002_GetClanCount(void *);
extern CSteamID cppISteamFriends_SteamFriends002_GetClanByIndex(void *, int);
extern const char * cppISteamFriends_SteamFriends002_GetClanName(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends002_InviteFriendToClan(void *, CSteamID, CSteamID);
extern bool cppISteamFriends_SteamFriends002_AcknowledgeInviteToClan(void *, CSteamID, bool);
extern int cppISteamFriends_SteamFriends002_GetFriendCountFromSource(void *, CSteamID);
extern CSteamID cppISteamFriends_SteamFriends002_GetFriendFromSourceByIndex(void *, CSteamID, int);
#ifdef __cplusplus
}
#endif