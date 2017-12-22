from django.contrib.auth.models import AbstractUser
from django.db import models
from django.conf import settings
from django.db.models.signals import post_save
from django.dispatch import receiver
from rest_framework.authtoken.models import Token


@receiver(post_save, sender=settings.AUTH_USER_MODEL)
def create_auth_token(sender, instance=None, created=False, **kwargs):
    if created:
        Token.objects.create(user=instance)


class User(AbstractUser):
    user_id = models.EmailField(unique=True, null=False)
    phone_number = models.CharField(max_length=45)
    introduction = models.TextField()
    profile_image = models.ImageField(null=True)


class Interest(models.Model):
    name = models.CharField(max_length=45)
    eng_name = models.CharField(max_length=45)


class Group(models.Model):
    name = models.CharField(max_length=45)
    place = models.CharField(max_length=45)
    introduction = models.CharField(max_length=45)
    explanation = models.CharField(max_length=45)
    users = models.ForeignKey(
        User,
        related_name='joined_users',
        null=True
    )


class UsersGroup(models.Model):
    user = models.ForeignKey(
        User,
        related_name='users_groups',
        null=True
    )
    group = models.ForeignKey(
        Group,
        related_name='joined_groups',
        null=True
    )
    join_date = models.DateTimeField(auto_now_add=True)
    balance = models.IntegerField()


class Attendence(models.Model):
    users_group = models.ForeignKey(
        UsersGroup,
        related_name='attendence',
    )
    attend = models.BooleanField()
    arrival_time = models.DateField()
    #attendencecol = models.CharField(max_length=45) # For what?


class GroupInterest(models.Model):
    interest = models.ForeignKey(
        Interest,
        related_name='group_interests',
        null=False
    )
    group = models.ForeignKey(
        Group,
        related_name='groups_interests',
        null=False
    )


class Material(models.Model):
    group = models.ForeignKey(
        Group,
        related_name='materials',
        null=True
    )
    addr = models.CharField(max_length=45)
    category = models.CharField(max_length=45)
    created_at = models.DateTimeField(auto_now_add=True)
    updated_at = models.DateTimeField(auto_now=True)


class GroupPlc(models.Model):
    group = models.ForeignKey(
        Group,
        related_name='group_plces',
        null=True
    )
    addr = models.CharField(max_length=45)
