namespace private_box_fs_carlis {

class pbox_fuse_adapter : private_box_fs {
	public:
        pbox_fuse_adapter();
        
        // int pbfs_access (const char *, int);
        // int (*bmap) (const char *, size_t blocksize, uint64_t *idx);
		int pbfs_chmod (const char *, mode_t);
		int pbfs_chown (const char *, uid_t, gid_t);
        int pbfs_create (const char *, mode_t, struct fuse_file_info *);
        // void pbfs_destroy (void *);
        // int (*fallocate) (const char *, int, off_t, off_t, struct fuse_file_info *);
		int pbfs_flush (const char *, struct fuse_file_info *);
		int pbfs_fsync (const char *, int, struct fuse_file_info *);
        // int (*ftruncate) (const char *, off_t, struct fuse_file_info *);
        // int (*fgetattr) (const char *, struct stat *, struct fuse_file_info *);
        // int (*flock) (const char *, struct fuse_file_info *, int op);
		int pbfs_fsyncdir (const char *, int, struct fuse_file_info *);
        int pbfs_getattr = (const char *, struct stat *);
		int pbfs_getxattr (const char *, const char *, char *, size_t);
        // int (*ioctl) (const char *, int cmd, void *arg,
        //           struct fuse_file_info *, unsigned int flags, void *data);


		int pbfs_link (const char *, const char *);
		int pbfs_listxattr (const char *, const char *, size_t);
        // int (*lock) (const char *, struct fuse_file_info *, int cmd, struct flock *);
		int pbfs_mkdir (const char *, mode_t);
		int pbfs_mknod (const char *, mode_t, dev_t);
		int pbfs_open (const char *, struct fuse_file_info *);
		int pbfs_opendir (const char *, struct fuse_file_info *);
        // int (*poll) (const char *, struct fuse_file_info *,
        //                struct fuse_pollhandle *ph, unsigned *reventsp);
		int pbfs_read (const char *, char *, size_t, off_t,
			       struct fuse_file_info *);
        // int (*read_buf) (const char *, struct fuse_bufvec **bufp,
        //           size_t size, off_t off, struct fuse_file_info *);
		int pbfs_readdir (const char *, void *, fuse_fill_dir_t, off_t, 
			          struct fuse_file_info *);
		int pbfs_release (const char *, struct fuse_file_info *);
        // int pbfs_readlink (const char *, char *, size_t);
		int pbfs_releasedir (const char *, struct fuse_file_info *);
		int pbfs_removexattr (const char *, const char *);
		int pbfs_rename (const char *, const char *);
		int pbfs_rmdir (const char *);
        // int pbfs_setxattr (const char *, const char *, const char *, size_t, int);
		int pbfs_statfs (const char *, struct statvfs *);
		int pbfs_symlink (const char *, const char *);
		int pbfs_truncate (const char *, off_t);
		int pbfs_unlink (const char *);
		int pbfs_utimens (const char *, struct utimbuf *);
		int pbfs_write (const char *, const char *, size_t, off_t
			        struct fuse_file_info *);
        // int (*write_buf) (const char *, struct fuse_bufvec *buf, off_t off,
        //            struct fuse_file_info *);

		int *pbfs_init (struct fuse_conn_info *conn);

		// int pbfs_getdir (const char *, fusedirh_t, fusedirfil_t);
		// int pbfs_setattr (const char *, const char *, const char *, size_t, int);
};

} /* End 'namespace private_box_fs_carlis'*/ 


