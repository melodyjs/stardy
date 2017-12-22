from django.contrib import admin
from stardy.models import User, Interest, Group, UsersGroup, Attendence, GroupInterest, Material


@admin.register(User)
class UserAdmin(admin.ModelAdmin):
    list_display = ['username', 'user_id', 'phone_number', 'introduction', 'profile_image']
    search_fields = ('username', )


@admin.register(Interest)
class InterestAdmin(admin.ModelAdmin):
    list_display = ['name', 'eng_name']


@admin.register(Group)
class GroupAdmin(admin.ModelAdmin):
    list_display = ['name', 'place', 'introduction', 'explanation', 'users']


@admin.register(UsersGroup)
class UsersGroupAdmin(admin.ModelAdmin):
    list_display = ['user', 'group', 'join_date', 'balance']


@admin.register(Attendence)
class AttendenceAdmin(admin.ModelAdmin):
    list_display = ['users_group', 'attend', 'arrival_time']


@admin.register(GroupInterest)
class GroupInterestAdmin(admin.ModelAdmin):
    list_display = ['interest', 'group']


@admin.register(Material)
class MaterialAdmin(admin.ModelAdmin):
    list_display = ['group', 'addr', 'category', 'updated_at', 'created_at']