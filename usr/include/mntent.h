#ifndef _MNTENT_H
#define _MNTENT_H       1

struct mntent {
	char *mnt_fsname;	/* name of mounted file system */
	char *mnt_dir;		/* file system path prefix */
	char *mnt_type;		/* mount type (see mntent.h) */
	char *mnt_opts;		/* mount options (see mntent.h) */
	int   mnt_freq;		/* dump frequency in days */
	int   mnt_passno;	/* pass number on parallel fsck */
};

extern FILE *setmntent(const char *, const char *);

extern int endmntent(FILE *fp);

#endif  /* mntent.h */
